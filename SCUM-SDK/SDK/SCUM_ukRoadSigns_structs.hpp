#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// UserDefinedEnum ukRoadSigns.ukRoadSigns
enum class EukRoadSigns : uint8_t
{
	ukRoadSigns__NewEnumerator436  = 0,
	ukRoadSigns__NewEnumerator19   = 1,
	ukRoadSigns__NewEnumerator20   = 2,
	ukRoadSigns__NewEnumerator22   = 3,
	ukRoadSigns__NewEnumerator21   = 4,
	ukRoadSigns__NewEnumerator23   = 5,
	ukRoadSigns__NewEnumerator24   = 6,
	ukRoadSigns__NewEnumerator454  = 7,
	ukRoadSigns__NewEnumerator25   = 8,
	ukRoadSigns__NewEnumerator455  = 9,
	ukRoadSigns__NewEnumerator26   = 10,
	ukRoadSigns__NewEnumerator27   = 11,
	ukRoadSigns__NewEnumerator28   = 12,
	ukRoadSigns__NewEnumerator439  = 13,
	ukRoadSigns__NewEnumerator29   = 14,
	ukRoadSigns__NewEnumerator30   = 15,
	ukRoadSigns__NewEnumerator31   = 16,
	ukRoadSigns__NewEnumerator32   = 17,
	ukRoadSigns__NewEnumerator33   = 18,
	ukRoadSigns__NewEnumerator34   = 19,
	ukRoadSigns__NewEnumerator35   = 20,
	ukRoadSigns__NewEnumerator36   = 21,
	ukRoadSigns__NewEnumerator37   = 22,
	ukRoadSigns__NewEnumerator38   = 23,
	ukRoadSigns__NewEnumerator39   = 24,
	ukRoadSigns__NewEnumerator40   = 25,
	ukRoadSigns__NewEnumerator41   = 26,
	ukRoadSigns__NewEnumerator42   = 27,
	ukRoadSigns__NewEnumerator43   = 28,
	ukRoadSigns__NewEnumerator44   = 29,
	ukRoadSigns__NewEnumerator45   = 30,
	ukRoadSigns__NewEnumerator46   = 31,
	ukRoadSigns__NewEnumerator47   = 32,
	ukRoadSigns__NewEnumerator448  = 33,
	ukRoadSigns__NewEnumerator48   = 34,
	ukRoadSigns__NewEnumerator49   = 35,
	ukRoadSigns__NewEnumerator50   = 36,
	ukRoadSigns__NewEnumerator51   = 37,
	ukRoadSigns__NewEnumerator457  = 38,
	ukRoadSigns__NewEnumerator456  = 39,
	ukRoadSigns__NewEnumerator52   = 40,
	ukRoadSigns__NewEnumerator53   = 41,
	ukRoadSigns__NewEnumerator54   = 42,
	ukRoadSigns__NewEnumerator55   = 43,
	ukRoadSigns__NewEnumerator56   = 44,
	ukRoadSigns__NewEnumerator57   = 45,
	ukRoadSigns__NewEnumerator444  = 46,
	ukRoadSigns__NewEnumerator58   = 47,
	ukRoadSigns__NewEnumerator59   = 48,
	ukRoadSigns__NewEnumerator60   = 49,
	ukRoadSigns__NewEnumerator61   = 50,
	ukRoadSigns__NewEnumerator62   = 51,
	ukRoadSigns__NewEnumerator63   = 52,
	ukRoadSigns__NewEnumerator64   = 53,
	ukRoadSigns__NewEnumerator65   = 54,
	ukRoadSigns__NewEnumerator66   = 55,
	ukRoadSigns__NewEnumerator67   = 56,
	ukRoadSigns__NewEnumerator68   = 57,
	ukRoadSigns__NewEnumerator69   = 58,
	ukRoadSigns__NewEnumerator70   = 59,
	ukRoadSigns__NewEnumerator71   = 60,
	ukRoadSigns__NewEnumerator72   = 61,
	ukRoadSigns__NewEnumerator73   = 62,
	ukRoadSigns__NewEnumerator74   = 63,
	ukRoadSigns__NewEnumerator75   = 64,
	ukRoadSigns__NewEnumerator76   = 65,
	ukRoadSigns__NewEnumerator77   = 66,
	ukRoadSigns__NewEnumerator78   = 67,
	ukRoadSigns__NewEnumerator79   = 68,
	ukRoadSigns__NewEnumerator442  = 69,
	ukRoadSigns__NewEnumerator80   = 70,
	ukRoadSigns__NewEnumerator81   = 71,
	ukRoadSigns__NewEnumerator443  = 72,
	ukRoadSigns__NewEnumerator82   = 73,
	ukRoadSigns__NewEnumerator83   = 74,
	ukRoadSigns__NewEnumerator84   = 75,
	ukRoadSigns__NewEnumerator85   = 76,
	ukRoadSigns__NewEnumerator86   = 77,
	ukRoadSigns__NewEnumerator87   = 78,
	ukRoadSigns__NewEnumerator88   = 79,
	ukRoadSigns__NewEnumerator89   = 80,
	ukRoadSigns__NewEnumerator90   = 81,
	ukRoadSigns__NewEnumerator91   = 82,
	ukRoadSigns__NewEnumerator92   = 83,
	ukRoadSigns__NewEnumerator93   = 84,
	ukRoadSigns__NewEnumerator94   = 85,
	ukRoadSigns__NewEnumerator95   = 86,
	ukRoadSigns__NewEnumerator96   = 87,
	ukRoadSigns__NewEnumerator97   = 88,
	ukRoadSigns__NewEnumerator98   = 89,
	ukRoadSigns__NewEnumerator99   = 90,
	ukRoadSigns__NewEnumerator100  = 91,
	ukRoadSigns__NewEnumerator101  = 92,
	ukRoadSigns__NewEnumerator102  = 93,
	ukRoadSigns__NewEnumerator104  = 94,
	ukRoadSigns__NewEnumerator103  = 95,
	ukRoadSigns__NewEnumerator441  = 96,
	ukRoadSigns__NewEnumerator440  = 97,
	ukRoadSigns__NewEnumerator105  = 98,
	ukRoadSigns__NewEnumerator106  = 99,
	ukRoadSigns__NewEnumerator108  = 100,
	ukRoadSigns__NewEnumerator453  = 101,
	ukRoadSigns__NewEnumerator107  = 102,
	ukRoadSigns__NewEnumerator109  = 103,
	ukRoadSigns__NewEnumerator110  = 104,
	ukRoadSigns__NewEnumerator111  = 105,
	ukRoadSigns__NewEnumerator112  = 106,
	ukRoadSigns__NewEnumerator113  = 107,
	ukRoadSigns__NewEnumerator114  = 108,
	ukRoadSigns__NewEnumerator115  = 109,
	ukRoadSigns__NewEnumerator116  = 110,
	ukRoadSigns__NewEnumerator118  = 111,
	ukRoadSigns__NewEnumerator117  = 112,
	ukRoadSigns__NewEnumerator119  = 113,
	ukRoadSigns__NewEnumerator120  = 114,
	ukRoadSigns__NewEnumerator121  = 115,
	ukRoadSigns__NewEnumerator122  = 116,
	ukRoadSigns__NewEnumerator123  = 117,
	ukRoadSigns__NewEnumerator124  = 118,
	ukRoadSigns__NewEnumerator125  = 119,
	ukRoadSigns__NewEnumerator126  = 120,
	ukRoadSigns__NewEnumerator127  = 121,
	ukRoadSigns__NewEnumerator128  = 122,
	ukRoadSigns__NewEnumerator129  = 123,
	ukRoadSigns__NewEnumerator130  = 124,
	ukRoadSigns__NewEnumerator131  = 125,
	ukRoadSigns__NewEnumerator132  = 126,
	ukRoadSigns__NewEnumerator133  = 127,
	ukRoadSigns__NewEnumerator134  = 128,
	ukRoadSigns__NewEnumerator135  = 129,
	ukRoadSigns__NewEnumerator136  = 130,
	ukRoadSigns__NewEnumerator137  = 131,
	ukRoadSigns__NewEnumerator138  = 132,
	ukRoadSigns__NewEnumerator139  = 133,
	ukRoadSigns__NewEnumerator140  = 134,
	ukRoadSigns__NewEnumerator141  = 135,
	ukRoadSigns__NewEnumerator142  = 136,
	ukRoadSigns__NewEnumerator143  = 137,
	ukRoadSigns__NewEnumerator144  = 138,
	ukRoadSigns__NewEnumerator145  = 139,
	ukRoadSigns__NewEnumerator146  = 140,
	ukRoadSigns__NewEnumerator147  = 141,
	ukRoadSigns__NewEnumerator148  = 142,
	ukRoadSigns__NewEnumerator149  = 143,
	ukRoadSigns__NewEnumerator150  = 144,
	ukRoadSigns__NewEnumerator151  = 145,
	ukRoadSigns__NewEnumerator152  = 146,
	ukRoadSigns__NewEnumerator153  = 147,
	ukRoadSigns__NewEnumerator154  = 148,
	ukRoadSigns__NewEnumerator155  = 149,
	ukRoadSigns__NewEnumerator156  = 150,
	ukRoadSigns__NewEnumerator158  = 151,
	ukRoadSigns__NewEnumerator157  = 152,
	ukRoadSigns__NewEnumerator159  = 153,
	ukRoadSigns__NewEnumerator160  = 154,
	ukRoadSigns__NewEnumerator161  = 155,
	ukRoadSigns__NewEnumerator446  = 156,
	ukRoadSigns__NewEnumerator447  = 157,
	ukRoadSigns__NewEnumerator168  = 158,
	ukRoadSigns__NewEnumerator162  = 159,
	ukRoadSigns__NewEnumerator163  = 160,
	ukRoadSigns__NewEnumerator164  = 161,
	ukRoadSigns__NewEnumerator165  = 162,
	ukRoadSigns__NewEnumerator166  = 163,
	ukRoadSigns__NewEnumerator167  = 164,
	ukRoadSigns__NewEnumerator171  = 165,
	ukRoadSigns__NewEnumerator169  = 166,
	ukRoadSigns__NewEnumerator170  = 167,
	ukRoadSigns__NewEnumerator172  = 168,
	ukRoadSigns__NewEnumerator173  = 169,
	ukRoadSigns__NewEnumerator174  = 170,
	ukRoadSigns__NewEnumerator175  = 171,
	ukRoadSigns__NewEnumerator449  = 172,
	ukRoadSigns__NewEnumerator450  = 173,
	ukRoadSigns__NewEnumerator451  = 174,
	ukRoadSigns__NewEnumerator452  = 175,
	ukRoadSigns__NewEnumerator176  = 176,
	ukRoadSigns__NewEnumerator177  = 177,
	ukRoadSigns__NewEnumerator178  = 178,
	ukRoadSigns__NewEnumerator179  = 179,
	ukRoadSigns__NewEnumerator180  = 180,
	ukRoadSigns__NewEnumerator181  = 181,
	ukRoadSigns__NewEnumerator182  = 182,
	ukRoadSigns__NewEnumerator183  = 183,
	ukRoadSigns__NewEnumerator184  = 184,
	ukRoadSigns__NewEnumerator185  = 185,
	ukRoadSigns__NewEnumerator186  = 186,
	ukRoadSigns__NewEnumerator187  = 187,
	ukRoadSigns__NewEnumerator188  = 188,
	ukRoadSigns__NewEnumerator189  = 189,
	ukRoadSigns__NewEnumerator190  = 190,
	ukRoadSigns__NewEnumerator191  = 191,
	ukRoadSigns__NewEnumerator192  = 192,
	ukRoadSigns__NewEnumerator193  = 193,
	ukRoadSigns__NewEnumerator194  = 194,
	ukRoadSigns__NewEnumerator195  = 195,
	ukRoadSigns__NewEnumerator196  = 196,
	ukRoadSigns__NewEnumerator197  = 197,
	ukRoadSigns__NewEnumerator198  = 198,
	ukRoadSigns__NewEnumerator199  = 199,
	ukRoadSigns__NewEnumerator200  = 200,
	ukRoadSigns__NewEnumerator201  = 201,
	ukRoadSigns__NewEnumerator202  = 202,
	ukRoadSigns__NewEnumerator203  = 203,
	ukRoadSigns__NewEnumerator204  = 204,
	ukRoadSigns__NewEnumerator205  = 205,
	ukRoadSigns__NewEnumerator206  = 206,
	ukRoadSigns__NewEnumerator207  = 207,
	ukRoadSigns__NewEnumerator208  = 208,
	ukRoadSigns__NewEnumerator209  = 209,
	ukRoadSigns__NewEnumerator210  = 210,
	ukRoadSigns__NewEnumerator211  = 211,
	ukRoadSigns__NewEnumerator212  = 212,
	ukRoadSigns__NewEnumerator213  = 213,
	ukRoadSigns__NewEnumerator214  = 214,
	ukRoadSigns__NewEnumerator215  = 215,
	ukRoadSigns__NewEnumerator216  = 216,
	ukRoadSigns__NewEnumerator217  = 217,
	ukRoadSigns__NewEnumerator218  = 218,
	ukRoadSigns__NewEnumerator219  = 219,
	ukRoadSigns__NewEnumerator220  = 220,
	ukRoadSigns__NewEnumerator221  = 221,
	ukRoadSigns__NewEnumerator222  = 222,
	ukRoadSigns__NewEnumerator223  = 223,
	ukRoadSigns__NewEnumerator224  = 224,
	ukRoadSigns__NewEnumerator225  = 225,
	ukRoadSigns__NewEnumerator226  = 226,
	ukRoadSigns__NewEnumerator227  = 227,
	ukRoadSigns__NewEnumerator228  = 228,
	ukRoadSigns__NewEnumerator229  = 229,
	ukRoadSigns__NewEnumerator231  = 230,
	ukRoadSigns__NewEnumerator230  = 231,
	ukRoadSigns__NewEnumerator233  = 232,
	ukRoadSigns__NewEnumerator232  = 233,
	ukRoadSigns__NewEnumerator235  = 234,
	ukRoadSigns__NewEnumerator234  = 235,
	ukRoadSigns__NewEnumerator240  = 236,
	ukRoadSigns__NewEnumerator236  = 237,
	ukRoadSigns__NewEnumerator237  = 238,
	ukRoadSigns__NewEnumerator238  = 239,
	ukRoadSigns__NewEnumerator239  = 240,
	ukRoadSigns__NewEnumerator241  = 241,
	ukRoadSigns__NewEnumerator242  = 242,
	ukRoadSigns__NewEnumerator243  = 243,
	ukRoadSigns__ukRoadSigns_MAX   = 244
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
