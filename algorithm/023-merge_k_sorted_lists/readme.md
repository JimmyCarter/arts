# [合并K个已排序链表](https://leetcode.com/problems/merge-k-sorted-lists/)

合并K个已排序的链表集合，并返回为一个链表。分析并描述它的复杂度。

```
Example:

Input:
[
  1->4->5,
  1->3->4,
  2->6
]
Output: 1->1->2->3->4->4->5->6
```

## 我的思路

看到这个题第一反应就是想到[第21题](https://github.com/Philon/arts/tree/master/algorithm/021-merge_two_sorted_lists)，所以直接⌘C ⌘V，把代码改成下面这样，本地单元测试居然一次过了！满心欢喜提交后告诉老子内存没有对齐...妈个蛋💢！
```c
// 此处省略mergeTwoLists() ...
struct ListNode* mergeKLists(struct ListNode** lists, int listsSize) {
  struct ListNode* result = *lists;
  for (int i = 1; i < listsSize; i++) {
    result = mergeTwoLists(result, lists[i]);
  }

  return result;
}
```
- 时间复杂度：O(n * listsSize)，n是所有链表长度之和
- 空间复杂度：O(1)

*后来我上社区查了下，所谓的`runtime error: member access within misaligned ...`错误其实是个内存访问非法的问题。我十分不要脸的揣测一下：leetcode的测试用例的参数`lists`是一个指针数组，当且仅当`listsSize == 0`的时候，即参数lists是一个长度为0的数组，那么`lists[0]`应该是一个空指针？*
- *我本地的单元测试的内存分配用`calloc()`——`lists[0] == NULL`成立*
- *leetcode服务器可能采用`malloc()`——`lists[0]`是个随机数*

*结果就是导致在官方的机器上，我返回了一个非空(但是无效)指针。唉，这锅，我不想背👋！*

解决所谓的内存对齐错误很简单，在函数最开始加一条判断即可：
```c
// 当链表数组长度为零时，确保返回一个空指针
if (listsSize == 0) {
  return NULL;
}
```

当然，提交之前我心里很清楚，这种效率太低了，但看到beats60%的时候，当时我都震惊了——这届码农不行！

后面想要降低时间复杂度，又尝试了几种办法都无功而返，无奈打开官方解答，看到最后一种方案就是“相邻的两对链表合并”，我擦！这是我距离正确答案最近的一次😅，就这么擦身而过，然后果断把上面的“一一合并”改成了“两两合并”：

```c
struct ListNode* mergeKLists(struct ListNode** lists, int listsSize) {
  int interval = 1;
  while (interval < listsSize) {
    for (int i = 0; i < listsSize; i += interval * 2) {
      struct ListNode* next = (i+interval) < listsSize ? lists[i+interval] : NULL;
      lists[i] = mergeTwoLists(lists[i], next);
    }
    interval *= 2;
  }
  
  return listsSize ? lists[0] : NULL;
}
```
- 时间复杂度：O(n * listsSize)，n是链表数组当中最长的那根
- 空间复杂度：O(1)