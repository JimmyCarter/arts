#include <stdlib.h>
#include <assert.h>
#include <stdarg.h>

#include "solution.h"

#define median(n1, n2) \
  findMedianSortedArrays(n1, sizeof(n1) / sizeof(int), \
      n2, sizeof(n2) / sizeof(int))

int main(int argc, char* argv[]) {
  int nums1[0];
  int nums2[] = {2, 3};
  assert(median(nums1, nums2) == 2.5);

  int m[] = {15,40,103,108,121,140,140,298,319,327,364,411,463,508,523,667,677,773,774,841,866,872,896,914,920,957,970,1039,1040,1051,1072,1087,1092,1095,1121,1214,1264,1289,1337,1380,1396,1438,1497,1498,1510,1515,1556,1557,1621,1712,1787,1823,1855,1879,1942,1988,1995,1998,2028,2055,2063,2072,2137,2148,2149,2190,2220,2226,2255,2310,2369,2411,2441,2467,2527,2591,2599,2761,2796,2796,2801,2816,2836,3000,3004,3008,3030,3055,3063,3077,3246,3311,3329,3396,3412,3462,3468,3509,3609,3681,3697,3703,3817,3820,3831,3999,4090,4143,4155,4167,4178,4283,4288,4301,4330,4341,4495,4775,4822,4844,4866,4875,4919,4952,4992,5008,5035,5060,5084,5088,5099,5116,5122,5274,5293,5303,5304,5308,5335,5378,5418,5420,5427,5427,5476,5493,5504,5506,5580,5580,5590,5596,5604,5727,5779,5795,5842,5942,5955,6016,6095,6174,6219,6255,6338,6410,6418,6490,6494,6494,6551,6613,6667,6680,6733,6761,6762,6776,6800,6818,6819,6877,6923,6939,6940,6980,6987,7008,7040,7088,7102,7178,7185,7294,7332,7337,7468,7499,7540,7564,7601,7688,7724,7726,7729,7730,7803,7823,7839,7936,7984,8017,8077,8143,8144,8145,8260,8270,8294,8308,8343,8343,8393,8432,8457,8465,8500,8534,8535,8577,8595,8639,8842,8891,8946,8971,9000,9015,9046,9114,9151,9200,9236,9265,9308,9321,9342,9364,9436,9540,9564,9576,9650,9672,9695,9701,9737,9783,9840,9845,9891,9995,10197,10305,10349,10417,10433,10523,10533,10541,10560,10628,10632,10666,10789,10800,10837,10844,10868,10879,11063,11090,11126,11141,11202,11222,11235,11261,11387,11430,11469,11609,11634,11699,11702,11726,11848,11899,11913,11949,11989,12020,12167,12177,12202,12213,12257,12356,12371,12443,12484,12602,12607,12645,12761,12775,12788,12902,12928,12940,12960,12968,13026,13032,13048,13066,13118,13142,13165,13248,13269,13329,13331,13389,13417,13454,13542,13548,13568,13604,13613,13625,13626,13640,13684,13700,13704,13710,13710,13886,13904,13967,14028,14091,14133,14206,14223,14252,14449,14470,14478,14522,14559,14612,14629,14656,14678,14768,14799,14805,14920,14955,15069,15112,15136,15158,15223,15238,15271,15318,15342,15435,15448,15489,15523,15535,15562,15567,15589,15617,15675,15678,15698,15757,15758,15862,15885,15915,15932,15933,15941,15975,16051,16080,16115,16233,16386,16394,16440,16503,16515,16558,16601,16663,16668,16739,16933,16954,16973,17105,17138,17150,17165,17175,17187,17213,17248,17284,17285,17322,17362,17409,17440,17443,17456,17510,17560,17681,17705,17749,17796,17801,17829,17853,17875,17915,18001,18009,18013,18080,18098,18199,18220,18303,18319,18369,18384,18399,18429,18526,18578,18579,18588,18664,18696,18750,18798,18860,18926,18966,19021,19126,19309,19352,19405,19417,19427,19431,19490,19528,19537,19596,19628,19652,19735,19736,19751,19751,19830,19965,20005,20037,20060,20072,20160,20166,20166,20198,20244,20296,20396,20403,20479,20484,20543,20557,20573,20574,20577,20595,20611,20641,20656,20686,20724,20779,20794,20796,20797,20813,20871,20963,20982,21029,21038,21060,21118,21169,21185,21223,21223,21249,21261,21301,21302,21326,21354,21391,21418,21418,21451,21625,21634,21697,21710,21792,21991,22002,22015,22120,22121,22194,22221,22237,22267,22275,22277,22313,22320,22387,22455,22456,22461,22477,22483,22505,22534,22580,22627,22770,22784,22811,22858,22881,22936,22942,22949,22969,23033,23044,23062,23071,23103,23125,23151,23160,23165,23214,23222,23249,23254,23348,23509,23528,23529,23554,23555,23563,23588,23625,23625,23686,23695,23707,23839,23890,23910,23936,23963,24050,24283,24284,24319,24321,24368,24384,24397,24417,24440,24478,24491,24509,24573,24577,24724,24732,24775,24777,24831,24852,24896,24923,24925,24944,24958,25000,25012,25014,25046,25082,25101,25118,25131,25158,25176,25184,25207,25241,25263,25264,25275,25303,25387,25391,25396,25427,25471,25492,25512,25535,25643,25664,25695,25711,25732,25818,25839,25846,25882,26017,26041,26059,26068,26075,26115,26199,26217,26229,26299,26316,26316,26326,26326,26389,26490,26581,26759,26773,26792,26797,26809,26843,26856,27026,27034,27130,27137,27144,27160,27171,27172,27177,27189,27198,27238,27315,27368,27432,27433,27452,27457,27473,27700,27701,27715,27727,27727,27765,27784,27801,27809,27868,27891,27902,27926,28076,28121,28127,28294,28443,28474,28513,28523,28569,28646,28693,28736,28757,28810,28817,28826,28829,28842,28871,28877,28884,28927,28933,28939,28985,29241,29354,29358,29396,29418,29435,29447,29561,29569,29612,29615,29675,29705,29778,29871,29917,29921,29929,29999,30044,30047,30069,30123,30227,30234,30285,30311,30410,30446,30506,30531,30579,30593,30612,30701,30707,30715,30724,30747,30766,30784,30786,30820,30826,30832,30860,30910,30955,31046,31112,31144,31243,31299,31299,31307,31318,31327,31382,31490,31492,31509,31516,31542,31578,31631,31704,31720,31733,31759,31772,31792,31804,31940,31941,31979,31996,32219,32287,32313,32345,32368,32476,32479,32484,32487,32508,32516,32583,32657,32703,32751,32753};
  int n[] = {10,77,152,198,315,364,385,422,424,487,491,500,500,533,547,613,634,781,842,867,888,889,903,912,916,934,945,946,956,982,991,1066,1094,1231,1273,1330,1350,1365,1367,1404,1413,1464,1477,1510,1546,1639,1648,1671,1727,1728,1749,1795,1850,1906,2009,2012,2017,2053,2157,2174,2197,2225,2246,2361,2384,2389,2401,2488,2493,2494,2535,2572,2579,2636,2669,2884,2905,3013,3077,3111,3139,3168,3176,3243,3254,3327,3453,3485,3493,3531,3570,3583,3642,3695,3789,3797,3818,3849,3859,3873,3890,3934,3941,3959,3963,3988,4165,4169,4170,4171,4350,4395,4413,4430,4438,4476,4535,4571,4636,4646,4742,4818,4826,4836,4919,5029,5065,5078,5090,5128,5128,5175,5327,5361,5530,5583,5587,5590,5628,5648,5856,5905,5947,5988,6028,6043,6071,6085,6102,6111,6124,6179,6223,6285,6364,6451,6483,6541,6588,6621,6662,6671,6694,6718,6729,6760,6791,6874,6914,6945,7069,7093,7109,7132,7205,7229,7231,7313,7327,7340,7347,7367,7405,7422,7613,7621,7625,7641,7672,7726,7789,7803,7830,7850,7866,7899,7965,8007,8130,8137,8144,8163,8168,8179,8196,8221,8261,8271,8290,8359,8381,8486,8502,8517,8567,8568,8585,8617,8621,8658,8790,8824,8839,8848,8869,8904,8969,8975,8978,8992,9058,9070,9137,9142,9168,9198,9208,9216,9291,9292,9314,9337,9340,9381,9405,9426,9431,9434,9444,9480,9525,9534,9550,9571,9593,9624,9676,9698,9749,9753,9839,9859,9867,10031,10063,10072,10187,10192,10239,10253,10273,10290,10290,10291,10347,10356,10364,10440,10476,10499,10535,10569,10580,10610,10641,10646,10673,10685,10770,10813,10815,10901,10944,10947,10948,10981,11001,11132,11140,11147,11150,11175,11186,11187,11283,11315,11383,11430,11448,11693,11768,11815,11843,11851,11914,12039,12089,12095,12134,12151,12210,12272,12288,12349,12354,12358,12400,12402,12455,12469,12503,12533,12551,12562,12589,12599,12599,12728,12735,12824,12871,12907,12998,13000,13025,13059,13064,13077,13079,13088,13092,13181,13222,13228,13293,13369,13372,13426,13479,13533,13557,13752,13753,13757,13780,13812,13837,13884,13926,13984,13992,14026,14114,14137,14140,14338,14365,14387,14406,14413,14447,14522,14557,14584,14620,14630,14697,14741,14877,14936,14936,14948,14965,14992,15026,15058,15092,15126,15145,15153,15166,15240,15291,15309,15346,15350,15360,15424,15469,15545,15546,15626,15635,15657,15757,15820,15825,15897,15916,15959,15963,16027,16028,16032,16046,16084,16189,16252,16260,16350,16441,16446,16471,16511,16518,16546,16592,16594,16621,16647,16771,16877,16981,17019,17067,17110,17131,17239,17281,17283,17308,17411,17441,17493,17583,17586,17678,17681,17798,17802,17858,17898,17960,18021,18042,18046,18074,18100,18150,18249,18258,18301,18302,18387,18412,18448,18575,18640,18657,18657,18668,18698,18764,18768,18775,18811,18863,18914,19004,19005,19064,19091,19120,19268,19286,19323,19327,19360,19496,19497,19621,19675,19695,19748,19748,19812,19864,19931,19947,20004,20014,20063,20067,20067,20084,20154,20164,20169,20220,20247,20247,20327,20351,20363,20405,20441,20459,20517,20533,20587,20623,20632,20642,20726,20729,20740,20832,20860,20955,20980,21046,21108,21112,21213,21238,21299,21334,21409,21447,21549,21574,21651,21664,21703,21725,21734,21776,21782,21811,21861,21868,21912,21944,21963,22065,22111,22148,22168,22360,22383,22388,22388,22416,22436,22511,22529,22563,22572,22577,22585,22620,22652,22682,22701,22869,22880,22949,23058,23071,23075,23104,23111,23219,23249,23258,23336,23338,23365,23457,23471,23497,23539,23582,23605,23628,23645,23745,23750,23853,23869,23882,23919,24025,24038,24052,24056,24071,24104,24107,24168,24277,24281,24311,24378,24445,24504,24510,24564,24592,24704,24733,24818,24827,24887,24888,24912,24931,25008,25017,25041,25051,25060,25114,25120,25204,25254,25286,25328,25348,25374,25390,25398,25421,25804,25986,26058,26315,26318,26331,26390,26413,26473,26723,26746,26783,26953,26958,26960,27019,27076,27088,27090,27166,27173,27173,27186,27385,27406,27427,27449,27457,27482,27511,27523,27537,27552,27554,27581,27602,27603,27622,27626,27644,27669,27741,27750,27839,27883,27909,27909,27986,28017,28077,28080,28117,28186,28306,28364,28393,28448,28479,28498,28540,28629,28650,28663,28670,28681,28687,28717,28743,28789,28813,28893,29113,29177,29279,29309,29355,29450,29482,29495,29628,29642,29691,29757,29765,29778,29799,29818,29883,29901,29924,29995,30090,30091,30130,30181,30202,30231,30244,30249,30264,30265,30326,30373,30463,30554,30603,30675,30677,30678,30740,30801,30814,30854,30893,30939,30947,31025,31028,31034,31053,31092,31126,31129,31163,31256,31271,31304,31370,31395,31501,31510,31544,31605,31627,31647,31653,31680,31712,31807,31817,31832,31903,32094,32118,32200,32225,32255,32297,32307,32387,32443,32450,32462,32463,32511,32568,32616,32700,32735};
  assert(median(m, n) == 16048.5);
}