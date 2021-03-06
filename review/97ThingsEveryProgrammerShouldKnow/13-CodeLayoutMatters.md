# 代码排版很重要

[原文链接](https://97-things-every-x-should-know.gitbooks.io/97-things-every-programmer-should-know/content/en/thing_13/)

就在几年前，我在一套Cobol系统上工作，这套系统不允许任何人改变代码行缩进，除非有充足的原因，因为将一行(代码)起始移到某个特殊列时会破坏某些东西。有的时候这种排版会引起误导，因此我们不得不非常仔细地阅读代码，因为我们无法信任它。该项政策必须消耗掉程序员很大精力。

有研究表明，我们编程时会花更多的时间来浏览和阅读代码，找出要改变的地方，而不是一直敲代码，这便是我们想优化的地方。

- *更容易扫描*。人类确实善于视觉模式匹配(我们可以在大草原上从残缺的一点信息中认出狮子)，所以我可以通过创建与作用于无关的任何内容来帮助自己，以及大多数商业术语带来的“偶然复杂度”，通过标准化来淡化背景(好比大草原)。如果有行为逻辑相像的代码看起来也像，我的感知系统会帮我识别出不同的地方。这就是为何我会观察一个类在编译单元是如何布局的约定：常量、字段、公有方法、私有方法。
- *富有表现力的布局*。我们都学会花时间去寻找正确的命名，以便我们的代码能够更清楚地表达它的意图，而不仅仅是列出步骤，对么？代码的排版也是表达的一部分。首个切入点应该是团队基本代码通过自动格式化处理，然后我自己的代码进行手动调整。除非存在分歧，否则一个团队应该尽快融入到这种“手工制作”的风格中。一个格式化工具无法理解我的意图(我应该知道，我写过一次)，对我而言它在换行和分组所反映的代码意图更重要，而不仅仅是代码语法。(Kevin McGuire把我从自动化格式代码的束缚中拯救了出来)
- *紧凑的格式*。我在屏幕上看到得越多，我通过滚动屏幕和切换文件看到完整的上下文就越多，换而言之我可以在脑海里保持较少的状态。长的程序注释和大量的空格是为了8个字符的名称与行打印更合理，但我现在通过IDE进行语法高亮和交叉链接(跳转)。像素成了限制我的因素，我希望每个人都能为我理解代码做出贡献。我希望排版可以帮我更好地理解代码，仅此而已。

一个非程序员朋友有次说这段代码看起来像诗一样。我也对这段确实不错的代码很有感觉，文本中的每个地方都有明确的目的，帮我了解其想法。不幸的是，写代码不可能像写诗一样罗曼蒂克。