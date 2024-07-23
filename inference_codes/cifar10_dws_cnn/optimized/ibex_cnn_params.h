#ifndef IBEX_CNN_PARAMS_H
#define IBEX_CNN_PARAMS_H

#define MV1 1263225675
#define MV2 1886417008
#define MV3 1381126738
#define MV4 1263225675
#define MV5 1465341783
#define MV6 1280068684
#define MV7 1869573999
#define MV8 1600085855
#define MV9 1600085855
#define MV10 1970632053
#define MV11 1145324612
#define MV12 1532713819
#define MV13 1296911693

#define SV1 2029118401
#define SV2 946921921
#define SV3 2029118401
#define SV4 1893843841
#define SV5 1893843841
#define SV6 1082196481
#define SV7 2029118401
#define SV8 2029118401
#define SV9 2029118401
#define SV10 2164392961
#define SV11 2029118401
#define SV12 2029118401
#define SV13 2840765761

static const int SB1[1] = {
	1
};

static const int SB2[16] = {
	3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3
};

static const int SB3[16] = {
	135266305, 1048577, 1, 8257, 8193, 135274497, 135266369, 8193, 1, 8193, 65, 1, 134217729, 1, 1, 134225921
};

static const int SB4[16] = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048576, 0, 0, 0, 0
};

static const int SB5[16] = {
	134234177, 136323073, 135282689, 136331393, 270549121, 136331329, 136331329, 136323201, 270540929, 270549121, 270540801, 270532737, 2105473, 8321, 2105345, 2113601
};

static const int SB6[32] = {
	3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3
};

static const int SB7[32] = {
	402669825, 540041217, 537927937, 4194561, 272638209, 537952513, 540049665, 541098049, 404783361, 405831873, 2113793, 536879361, 403726593, 540049665, 271614209, 541089921, 272662721, 271614209, 406880513, 541081793, 272662785, 538992897, 272662785, 403726593, 540033281, 540049601, 1081537, 403726337, 269517057, 272646401, 3178625, 539001089
};

static const int SB8[32] = {
	270565504, 536895744, 406880512, 541090048, 268435712, 406864128, 540049408, 541065216, 406872320, 541090048, 540049600, 405823552, 540041216, 4227264, 540049664, 271589632, 537952320, 4219008, 540033216, 540041408, 541090048, 540049600, 405823552, 405823680, 405823744, 541081856, 406880448, 402677888, 271606016, 138445056, 403726400, 405831680
};

static const int SB9[32] = {
	677380417, 542146817, 806404417, 677421249, 677429569, 810598721, 677421185, 677429441, 408977665, 675332353, 536903937, 675283329, 675307905, 677429505, 811639105, 811639169, 809549953, 407945601, 676380929, 676380993, 810582273, 810598721, 677429569, 675299649, 541106433, 811630785, 675316097, 405848449, 811630913, 811630977, 806404225, 677421441
};

static const int SB10[64] = {
	139501824, 676364608, 673227072, 810582336, 405840256, 408969536, 541114624, 810590528, 810557760, 675307776, 676331840, 811630848, 408994112, 676381056, 810598720, 537952576, 541114432, 674267392, 542162944, 677429568, 408985920, 677429504, 542155136, 676372864, 811639104, 407937344, 542146880, 811630976, 406896832, 675332416, 675316096, 674275712, 677421120, 810590528, 540066112, 408969536, 811647232, 407920960, 273727616, 677421312, 810582272, 676340096, 6332736, 671138176, 677421376, 677429568, 676372544, 540066176, 676372800, 536912192, 406872384, 676372800, 805347712, 810590464, 5284160, 274776448, 677413248, 541089984, 674283520, 541106560, 810598720, 137412992, 810598528, 811639168
};

static const int SB11[64] = {
	810607041, 678486337, 945865089, 810607041, 673227201, 939565505, 946913729, 943767937, 946913729, 811647425, 944816449, 678478273, 811647361, 678478209, 812695937, 678453697, 943776065, 810598849, 944800129, 677437825, 678486401, 946913665, 946921793, 541114753, 945873345, 542163265, 544260417, 544244033, 939548801, 945865025, 678478145, 944824577, 812704129, 5300673, 946889089, 676389057, 941679041, 675340609, 809558465, 273735937, 678461889, 678478145, 812695873, 676381121, 678486465, 671138113, 810557825, 945856961, 944775489, 946921665, 946897345, 809533889, 812695937, 812687809, 812696001, 945865089, 676389249, 677413249, 945840449, 946913473, 943767937, 675332353, 676381121, 811647425
};

static const int SB12[64] = {
	810598784, 811647296, 677404992, 809550144, 677429632, 811647296, 810582400, 675332480, 676381056, 810598720, 542163200, 543211840, 809533440, 673235328, 807444672, 675316096, 810582016, 541114560, 677396800, 810590528, 676381056, 138453376, 809550208, 810598784, 676372800, 810598784, 675332352, 542163328, 674242944, 677421440, 404799808, 542163328, 809542016, 809542016, 810598784, 139501952, 674283712, 541114752, 811622784, 676372672, 542155136, 543211904, 811639168, 811630912, 809542016, 676356480, 673218944, 811630976, 810598720, 810582208, 675307584, 810598784, 543203648, 542163264, 677404672, 811630784, 810590592, 810582400, 674275712, 810590528, 541098304, 675332416, 539001088, 811622784
};

static const int SB13[3] = {
	273736128, 946913728, 675282944
};

#endif /* IBEX_CNN_PARAMS_H */