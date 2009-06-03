/******************************************************************************/
// Bullfrog Engine Emulation Library - for use to remake classic games like
// Syndicate Wars, Magic Carpet or Dungeon Keeper.
/******************************************************************************/
/** @file bflib_math.h
 *     Header file for bflib_math.c.
 * @par Purpose:
 *     Math routines.
 * @par Comment:
 *     Just a header file - #defines, typedefs, function prototypes etc.
 * @author   Tomasz Lis
 * @date     24 Jan 2009 - 08 Mar 2009
 * @par  Copying and copyrights:
 *     This program is free software; you can redistribute it and/or modify
 *     it under the terms of the GNU General Public License as published by
 *     the Free Software Foundation; either version 2 of the License, or
 *     (at your option) any later version.
 */
/******************************************************************************/
#ifndef BFLIB_MATH_H
#define BFLIB_MATH_H

#include "bflib_basics.h"

#include "globals.h"

#ifdef __cplusplus
extern "C" {
#endif
/******************************************************************************/
enum MathOperator {
    MOp_UNDEFINED                      =  0,
    MOp_EQUAL                          =  1,
    MOp_NOT_EQUAL                      =  2,
    MOp_SMALLER                        =  3,
    MOp_GREATER                        =  4,
    MOp_SMALLER_EQ                     =  5,
    MOp_GREATER_EQ                     =  6,
    MOp_LOGIC_AND                      =  7,
    MOp_LOGIC_OR                       =  8,
    MOp_LOGIC_XOR                      =  9,
    MOp_BITWS_AND                      = 10,
    MOp_BITWS_OR                       = 11,
    MOp_BITWS_XOR                      = 12,
    MOp_SUM                            = 13,
    MOp_SUBTRACT                       = 14,
    MOp_MULTIPLY                       = 15,
    MOp_DIVIDE                         = 16,
    MOp_MODULO                         = 17,
}; 

/******************************************************************************/
DLLIMPORT int _DK_lbCosTable[2048];
#define lbCosTable _DK_lbCosTable
DLLIMPORT int _DK_lbSinTable[2048];
#define lbSinTable _DK_lbSinTable
/******************************************************************************/

long LbSinL(long x);
long LbCosL(long x);
long __fastcall LbSqrL(long x);
long LbMathOperation(unsigned char opkind, long val1, long val2);

/******************************************************************************/
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
#include "bflib_mathinln.h"
#endif

#endif
