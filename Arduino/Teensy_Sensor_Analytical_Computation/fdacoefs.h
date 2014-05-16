/*
 * Filter Coefficients (C Source) generated by the Filter Design and Analysis Tool
 *
 * Generated by MATLAB(R) 8.0 and the Signal Processing Toolbox 6.18.
 *
 * Generated on: 16-May-2014 09:51:59
 *
 */

/*
 * Discrete-Time FIR Filter (real)
 * -------------------------------
 * Filter Structure  : Direct-Form FIR
 * Filter Length     : 1002
 * Stable            : Yes
 * Linear Phase      : Yes (Type 2)
 */

/* General type conversion for MATLAB generated C-code  */
#include "tmwtypes.h"
/* 
 * Expected path to tmwtypes.h 
 * C:\Program Files\MATLAB\R2012b\extern\include\tmwtypes.h 
 */
/*
 * Warning - Filter coefficients were truncated to fit specified data type.  
 *   The resulting response may not match generated theoretical response.
 *   Use the Filter Design & Analysis Tool to design accurate
 *   int16 filter coefficients.
 */
const int BL = 1002;
const int16_t B[1002] = {
      -16,      0,      1,      4,      8,     14,     21,     28,     37,
       46,     55,     64,     73,     80,     85,     89,     90,     88,
       84,     77,     68,     57,     45,     31,     18,      4,     -8,
      -19,    -27,    -33,    -36,    -37,    -35,    -30,    -24,    -16,
       -8,      1,      9,     16,     22,     25,     26,     25,     23,
       18,     12,      5,     -1,     -8,    -14,    -18,    -21,    -21,
      -20,    -18,    -13,     -8,     -2,      4,      9,     14,     17,
       19,     19,     17,     14,     10,      5,     -1,     -6,    -11,
      -14,    -17,    -17,    -17,    -14,    -11,     -6,     -1,      4,
        9,     12,     15,     16,     16,     15,     12,      7,      3,
       -2,     -7,    -11,    -14,    -16,    -16,    -15,    -12,     -9,
       -4,      1,      6,     10,     13,     16,     16,     16,     13,
       10,      6,      1,     -4,     -9,    -13,    -15,    -17,    -16,
      -14,    -11,     -7,     -2,      3,      8,     12,     15,     17,
       17,     15,     13,      8,      4,     -2,     -7,    -11,    -15,
      -17,    -18,    -17,    -14,    -10,     -5,      0,      6,     11,
       15,     17,     18,     18,     15,     12,      7,      1,     -5,
      -10,    -14,    -18,    -19,    -19,    -17,    -13,     -9,     -3,
        3,      9,     14,     18,     20,     20,     19,     15,     11,
        5,     -2,     -8,    -13,    -18,    -21,    -21,    -20,    -17,
      -13,     -7,      0,      6,     13,     18,     21,     23,     22,
       19,     15,      9,      2,     -5,    -12,    -17,    -21,    -24,
      -24,    -21,    -17,    -11,     -4,      3,     10,     17,     22,
       25,     25,     24,     20,     14,      7,     -1,     -9,    -16,
      -22,    -25,    -27,    -26,    -22,    -17,     -9,     -1,      7,
       15,     21,     26,     28,     28,     25,     19,     12,      4,
       -5,    -14,    -21,    -27,    -30,    -30,    -28,    -23,    -15,
       -7,      3,     12,     20,     27,     31,     32,     30,     26,
       19,     10,      0,    -10,    -19,    -27,    -32,    -34,    -33,
      -29,    -22,    -13,     -3,      8,     18,     27,     33,     36,
       36,     32,     26,     17,      6,     -5,    -16,    -26,    -33,
      -38,    -39,    -36,    -30,    -21,    -10,      2,     14,     25,
       34,     39,     41,     39,     34,     25,     14,      1,    -12,
      -24,    -34,    -41,    -44,    -43,    -38,    -30,    -18,     -5,
        9,     22,     34,     42,     47,     47,     43,     35,     23,
        9,     -6,    -20,    -33,    -43,    -49,    -51,    -48,    -40,
      -29,    -14,      2,     17,     32,     44,     52,     55,     53,
       46,     35,     20,      3,    -14,    -30,    -44,    -54,    -59,
      -58,    -52,    -41,    -26,     -8,     10,     28,     44,     56,
       63,     64,     59,     48,     33,     15,     -6,    -26,    -44,
      -58,    -67,    -70,    -66,    -56,    -41,    -22,      0,     22,
       43,     59,     71,     76,     74,     65,     50,     30,      6,
      -18,    -41,    -61,    -75,    -83,    -83,    -75,    -60,    -39,
      -14,     12,     39,     61,     79,     90,     92,     86,     72,
       50,     24,     -6,    -35,    -62,    -83,    -98,   -103,    -99,
      -85,    -63,    -35,     -3,     31,     62,     88,    106,    115,
      114,    101,     79,     49,     13,    -25,    -61,    -93,   -117,
     -130,   -132,   -121,    -98,    -66,    -26,     17,     59,     98,
      128,    148,    154,    145,    123,     88,     44,     -6,    -57,
     -104,   -143,   -170,   -182,   -177,   -155,   -118,    -68,    -10,
       52,    112,    163,    201,    221,    222,    201,    161,    103,
       32,    -45,   -122,   -191,   -246,   -280,   -290,   -272,   -227,
     -158,    -69,     32,    137,    237,    321,    380,    407,    398,
      349,    261,    141,     -6,   -167,   -329,   -477,   -596,   -672,
     -691,   -645,   -526,   -333,    -70,    256,    632,   1042,   1466,
     1884,   2274,   2615,   2889,   3080,   3179,   3179,   3080,   2889,
     2615,   2274,   1884,   1466,   1042,    632,    256,    -70,   -333,
     -526,   -645,   -691,   -672,   -596,   -477,   -329,   -167,     -6,
      141,    261,    349,    398,    407,    380,    321,    237,    137,
       32,    -69,   -158,   -227,   -272,   -290,   -280,   -246,   -191,
     -122,    -45,     32,    103,    161,    201,    222,    221,    201,
      163,    112,     52,    -10,    -68,   -118,   -155,   -177,   -182,
     -170,   -143,   -104,    -57,     -6,     44,     88,    123,    145,
      154,    148,    128,     98,     59,     17,    -26,    -66,    -98,
     -121,   -132,   -130,   -117,    -93,    -61,    -25,     13,     49,
       79,    101,    114,    115,    106,     88,     62,     31,     -3,
      -35,    -63,    -85,    -99,   -103,    -98,    -83,    -62,    -35,
       -6,     24,     50,     72,     86,     92,     90,     79,     61,
       39,     12,    -14,    -39,    -60,    -75,    -83,    -83,    -75,
      -61,    -41,    -18,      6,     30,     50,     65,     74,     76,
       71,     59,     43,     22,      0,    -22,    -41,    -56,    -66,
      -70,    -67,    -58,    -44,    -26,     -6,     15,     33,     48,
       59,     64,     63,     56,     44,     28,     10,     -8,    -26,
      -41,    -52,    -58,    -59,    -54,    -44,    -30,    -14,      3,
       20,     35,     46,     53,     55,     52,     44,     32,     17,
        2,    -14,    -29,    -40,    -48,    -51,    -49,    -43,    -33,
      -20,     -6,      9,     23,     35,     43,     47,     47,     42,
       34,     22,      9,     -5,    -18,    -30,    -38,    -43,    -44,
      -41,    -34,    -24,    -12,      1,     14,     25,     34,     39,
       41,     39,     34,     25,     14,      2,    -10,    -21,    -30,
      -36,    -39,    -38,    -33,    -26,    -16,     -5,      6,     17,
       26,     32,     36,     36,     33,     27,     18,      8,     -3,
      -13,    -22,    -29,    -33,    -34,    -32,    -27,    -19,    -10,
        0,     10,     19,     26,     30,     32,     31,     27,     20,
       12,      3,     -7,    -15,    -23,    -28,    -30,    -30,    -27,
      -21,    -14,     -5,      4,     12,     19,     25,     28,     28,
       26,     21,     15,      7,     -1,     -9,    -17,    -22,    -26,
      -27,    -25,    -22,    -16,     -9,     -1,      7,     14,     20,
       24,     25,     25,     22,     17,     10,      3,     -4,    -11,
      -17,    -21,    -24,    -24,    -21,    -17,    -12,     -5,      2,
        9,     15,     19,     22,     23,     21,     18,     13,      6,
        0,     -7,    -13,    -17,    -20,    -21,    -21,    -18,    -13,
       -8,     -2,      5,     11,     15,     19,     20,     20,     18,
       14,      9,      3,     -3,     -9,    -13,    -17,    -19,    -19,
      -18,    -14,    -10,     -5,      1,      7,     12,     15,     18,
       18,     17,     15,     11,      6,      0,     -5,    -10,    -14,
      -17,    -18,    -17,    -15,    -11,     -7,     -2,      4,      8,
       13,     15,     17,     17,     15,     12,      8,      3,     -2,
       -7,    -11,    -14,    -16,    -17,    -15,    -13,     -9,     -4,
        1,      6,     10,     13,     16,     16,     16,     13,     10,
        6,      1,     -4,     -9,    -12,    -15,    -16,    -16,    -14,
      -11,     -7,     -2,      3,      7,     12,     15,     16,     16,
       15,     12,      9,      4,     -1,     -6,    -11,    -14,    -17,
      -17,    -17,    -14,    -11,     -6,     -1,      5,     10,     14,
       17,     19,     19,     17,     14,      9,      4,     -2,     -8,
      -13,    -18,    -20,    -21,    -21,    -18,    -14,     -8,     -1,
        5,     12,     18,     23,     25,     26,     25,     22,     16,
        9,      1,     -8,    -16,    -24,    -30,    -35,    -37,    -36,
      -33,    -27,    -19,     -8,      4,     18,     31,     45,     57,
       68,     77,     84,     88,     90,     89,     85,     80,     73,
       64,     55,     46,     37,     28,     21,     14,      8,      4,
        1,      0,    -16
};
