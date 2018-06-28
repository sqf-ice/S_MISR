//-----------------------------------------------------------------------------
//  File          : logo.h
//  Module        :
//  Description   : Define constant Logo Data.
//  Author        : Lewis
//  Notes         :
//
//  Naming conventions
//  ~~~~~~~~~~~~~~~~~~
//               Struct : Leading T
//             Constant : Leading K
//      Global Variable : Leading g
//    Function argument : Leading a
//       Local Variable : All lower case
//
//  Date          Who         Action
//  ------------  ----------- -------------------------------------------------
//  10 May  2006  Lewis       Initial Version for new CONTROL
//-----------------------------------------------------------------------------
#ifndef _LOGO_H_
#define _LOGO_H_

#include "common.h"

#define SPECTRA_LOGO
//#define EPS_LOGO  1

// Spectra Logo
#ifdef SPECTRA_LOGO
static const BYTE KPrintLogo[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x1C,0x00,0x00,0x00,0x00,0x00,
0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x10,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x10,0x00,0x01,0x00,0x00,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0x3F,0x00,0x00,
0x00,0x00,0x1E,0x00,0x00,0x00,0x00,0x00,
0x00,0x1C,0x80,0x01,0x00,0xC0,0x03,0x10,
0x00,0x00,0x00,0x00,0x00,0x80,0x03,0x0C,
0x00,0x70,0xF0,0x01,0x06,0x00,0x00,0x00,
0x1E,0x18,0x80,0x03,0x00,0xE0,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x03,0x00,

0x00,0x00,0x1E,0x00,0x00,0x00,0x00,0x00,
0x00,0x1F,0xC0,0x03,0x00,0xF0,0x07,0x10,
0x00,0x00,0x00,0x00,0x00,0xF0,0x01,0x1E,
0x00,0x38,0xB0,0x03,0x07,0x00,0x00,0xF0,
0x1F,0x7C,0xC0,0x07,0x00,0xF0,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x0F,0x00,
0x00,0x00,0x3C,0x00,0x00,0x00,0x00,0x00,
0x00,0x3E,0xE0,0x07,0x00,0x30,0x02,0x10,
0x00,0x00,0x00,0x0C,0x00,0x3E,0x00,0x1E,
0x00,0x1C,0xF0,0x01,0x07,0x00,0x00,0xFF,
0x03,0xFC,0xC0,0x0F,0x00,0xF8,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x1F,0x00,
0x00,0x00,0x1C,0x00,0x00,0x00,0x00,0x00,
0x00,0x7E,0xC0,0x0F,0x00,0xF0,0x07,0x10,
0x00,0x00,0x00,0x3C,0x80,0x0F,0x00,0x1E,
0x00,0x1F,0xF0,0x03,0x07,0x00,0xF0,0x1F,

0x00,0xF8,0xC1,0x1F,0x00,0xFC,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x1F,0x00,
0x00,0x00,0x06,0x03,0x00,0x00,0x00,0x00,
0x00,0xFE,0xC0,0x1F,0x00,0xE0,0x07,0x10,
0x00,0x00,0x00,0xFC,0x00,0x81,0x01,0x3C,
0x80,0x07,0xE0,0x03,0x0F,0x00,0xF8,0x03,
0x00,0xF8,0x81,0x1F,0x00,0xFE,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x1F,0x00,
0x00,0x80,0x6B,0x06,0xFE,0x00,0x00,0x00,
0x00,0x1C,0xC0,0x1F,0x00,0xC0,0x07,0x30,
0x00,0x00,0x00,0xFC,0x07,0xF0,0x0F,0x7C,
0xC0,0x07,0xF0,0x03,0x0E,0x00,0xFF,0x00,
0x00,0x78,0x80,0x07,0x00,0xFE,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x3F,0x00,
0x00,0xF0,0xCC,0x84,0xFF,0x00,0x00,0x00,
0x00,0x1C,0x80,0x07,0x00,0xE0,0x07,0x30,

0x00,0x00,0x00,0xF0,0x07,0xF0,0x07,0x5C,
0xF0,0x01,0x38,0x00,0x0E,0xF0,0x1F,0x00,
0x00,0x30,0x80,0x07,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x00,0x00,0xF0,0x3F,0x00,
0x00,0x1E,0xD8,0xE7,0xFF,0x00,0x00,0x00,
0x00,0x1C,0x80,0x07,0x00,0x70,0x00,0x30,
0x00,0x00,0x00,0xE0,0x07,0x70,0x1F,0x18,
0xF8,0x00,0x1E,0x00,0x0E,0xFC,0x01,0x00,
0x00,0x70,0x00,0x07,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x00,0x00,0xF0,0x3F,0x00,
0x00,0x00,0xF8,0xF0,0x61,0x00,0x00,0x00,
0x00,0x18,0x80,0x07,0x00,0x1C,0x00,0x30,
0x00,0x00,0x00,0x80,0x1F,0xF0,0x1F,0x18,
0x3C,0x80,0x07,0x00,0x0E,0x3F,0x00,0x00,
0x00,0x70,0x00,0x0F,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x00,0x00,0xF0,0x3F,0x00,

0x00,0x10,0x30,0x70,0x00,0x00,0x00,0x00,
0x00,0x18,0x00,0x07,0x00,0x0F,0x10,0x30,
0x00,0x00,0x00,0x00,0x1E,0xE0,0x07,0x18,
0x1E,0xE0,0x81,0x01,0x0C,0x07,0x00,0x00,
0x00,0x70,0x00,0x0F,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x00,0x00,0xF0,0x3F,0x00,
0x00,0x1C,0x00,0x38,0x00,0x00,0x00,0x00,
0x00,0x18,0x00,0x0F,0xE0,0x43,0x24,0x70,
0x00,0x00,0x00,0x80,0x7C,0xC0,0x01,0x98,
0x0F,0x78,0xE0,0x01,0x9C,0x03,0x00,0x00,
0x00,0x70,0x00,0x0E,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x00,0x00,0xF0,0x3F,0x00,
0x00,0x0E,0x00,0x18,0x00,0x00,0x00,0x00,
0x00,0x18,0x00,0x0F,0x7C,0xC0,0x2C,0x70,
0x00,0x00,0x00,0xC0,0xF1,0x41,0x00,0xF8,
0x83,0x1F,0xF0,0x01,0x1C,0x00,0x00,0x00,

0x00,0x70,0x00,0x0E,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x00,0x08,0xF0,0x3F,0x00,
0x00,0x0F,0x00,0xF8,0x3F,0x00,0x00,0x00,
0x00,0x30,0x00,0x0F,0x0E,0x80,0x3F,0x60,
0x00,0x00,0x00,0xE0,0xE3,0x07,0x00,0xF8,
0x00,0x00,0x78,0x00,0x1C,0x18,0x00,0x00,
0x00,0x60,0x00,0x1E,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x00,0x0F,0xF0,0x3F,0x00,
0x00,0x07,0x00,0xF8,0x7F,0x00,0x00,0x00,
0x00,0x30,0x00,0x0E,0x00,0x80,0x0F,0xE0,
0x00,0x00,0x00,0xF0,0x83,0x1F,0x00,0x7E,
0x00,0x00,0x18,0x00,0x1C,0x7E,0x00,0x00,
0x00,0xE0,0x00,0x1E,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x00,0x0A,0xF0,0x3F,0x00,
0x80,0x03,0x00,0xF0,0xFF,0x00,0x00,0xF0,
0x0F,0x30,0x00,0x0E,0x00,0x00,0x00,0xE0,

0x00,0x00,0x00,0xF0,0x03,0x1E,0x00,0x3F,
0x00,0x00,0x78,0x00,0x1C,0x3E,0x00,0x00,
0x00,0xE0,0x00,0x1C,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x00,0x0A,0xF0,0x3F,0x00,
0x80,0x03,0x00,0x00,0xFF,0x00,0x00,0xFC,
0x3F,0x30,0x00,0x1E,0x00,0x00,0x00,0xE0,
0x00,0x00,0x00,0x30,0x03,0xFC,0xC0,0x3F,
0x00,0x00,0xF8,0x07,0x1C,0x1E,0x00,0x00,
0x00,0xE0,0x00,0x1C,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x00,0x0C,0xF0,0x3F,0x00,
0x80,0x03,0x00,0x00,0x78,0x00,0x80,0xFF,
0x7F,0x30,0x00,0x1E,0x00,0x00,0x00,0xF0,
0x01,0x00,0x00,0x10,0x03,0xF0,0xF3,0x37,
0x80,0x03,0xF8,0x07,0x1C,0x00,0x00,0x00,
0x00,0xE0,0x00,0x1C,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x80,0x0D,0xF0,0x3F,0x00,

0x80,0x07,0x00,0x00,0x3E,0x00,0xE0,0x0F,
0xFC,0x30,0x00,0x1E,0x10,0x00,0x00,0xF0,
0x03,0x00,0x00,0xF8,0x03,0xE0,0xFF,0x31,
0xC0,0x01,0xC0,0x07,0x1C,0x00,0x00,0x00,
0x00,0xC0,0x00,0x1C,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0xC0,0x05,0xF0,0x3F,0x00,
0x00,0x1F,0x00,0xE0,0x1F,0x00,0xF0,0x01,
0xF0,0xF0,0x3F,0x1E,0x18,0x00,0x00,0xFE,
0x1F,0x00,0x00,0xFF,0x01,0x80,0x7F,0x30,
0xE0,0x30,0xF0,0x03,0x1C,0x00,0x00,0x00,
0x00,0xC0,0x00,0x1C,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x80,0x06,0xF0,0x3F,0x00,
0x00,0xFE,0x00,0xFE,0x07,0xFE,0x73,0x00,
0x70,0xF8,0x7F,0x1E,0x0C,0x00,0xC0,0x9F,
0xFF,0x00,0xFE,0xFF,0x07,0x00,0x3F,0x30,
0x60,0xE0,0xFF,0x00,0x1E,0x00,0x03,0x00,

0x70,0xC0,0x01,0x1C,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0xC0,0x03,0xF0,0x3F,0x00,
0x00,0xF8,0xFF,0xFF,0x00,0xFF,0x3F,0x00,
0x78,0xFC,0x7F,0x1E,0x0C,0x00,0xE0,0x7F,
0xFE,0xFF,0xFF,0xFF,0x1F,0x80,0x3F,0x30,
0x60,0x00,0x1E,0x00,0x1F,0x80,0x01,0x00,
0x30,0xC0,0x01,0x1C,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x40,0x01,0xF0,0x3F,0x00,
0x00,0xF0,0xFF,0x3F,0xE0,0xFF,0x1F,0xC0,
0xFF,0xFF,0x71,0x0E,0x0E,0x00,0xE0,0xFF,
0xF9,0xFF,0xFF,0xFF,0x1F,0xC0,0x73,0x30,
0xE0,0x00,0x00,0xC0,0x1F,0xE0,0x03,0x00,
0x7E,0xE0,0x00,0x1C,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0xC0,0x00,0xF0,0x3F,0x00,
0x00,0x00,0xFF,0x07,0xF0,0x87,0xFF,0xFF,
0xFF,0xEF,0x7F,0x0E,0x0E,0x00,0xE0,0xFF,

0xE0,0xFF,0x1F,0x38,0x3E,0xE0,0x60,0x30,
0xE0,0x03,0x00,0xF0,0x33,0xF0,0x07,0xE0,
0xFF,0xFF,0x00,0x0C,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x30,0x00,0xF0,0x3F,0x00,
0x00,0x00,0x20,0x00,0xF8,0x01,0xFF,0xFF,
0x3F,0xC0,0x7F,0x0E,0x0E,0x00,0x00,0xF0,
0x00,0x00,0x00,0xF8,0x3D,0x70,0x70,0x30,
0xE0,0x1F,0x00,0xFE,0xF0,0xFF,0xFF,0xFF,
0xEF,0x7F,0x00,0x0E,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x18,0x00,0xF0,0x3F,0x00,
0x00,0x00,0x30,0x00,0x3E,0x00,0xF0,0x7F,
0x00,0x00,0x1F,0x0E,0x1E,0x00,0x00,0x78,
0x00,0x00,0x00,0xF0,0x3F,0xF0,0x7F,0x30,
0xC0,0xFF,0xFF,0x3F,0xF0,0x3F,0xFF,0xFF,
0xC1,0x1F,0x00,0x0E,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x03,0x00,0xF0,0x3F,0x00,

0x00,0x00,0x30,0x00,0x1F,0x00,0x00,0x00,
0x00,0x00,0x00,0x0E,0x1C,0x00,0x00,0x1E,
0x00,0x00,0x00,0xE0,0x1F,0xE0,0x3F,0x10,
0x00,0xFF,0xFF,0x0F,0xE0,0x1F,0xFC,0x1F,
0x00,0x00,0x00,0x06,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x00,0x00,0xF0,0x3F,0x00,
0x00,0x00,0x70,0xE0,0x0F,0x70,0x00,0x00,
0x00,0x70,0x00,0x06,0x78,0x00,0xE0,0x1F,
0x70,0x00,0x00,0xC0,0x1F,0xE0,0x1F,0x10,
0x00,0xFC,0xFF,0x03,0x80,0x0F,0xF0,0x0F,
0x0C,0x00,0x00,0x06,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x00,0x00,0xF0,0x3F,0x00,
0x00,0x00,0xF0,0xFF,0x03,0x1E,0x00,0x00,
0x00,0x1E,0x00,0x06,0xF0,0xFF,0xFF,0x07,
0x3F,0x00,0x00,0x00,0x00,0xC0,0x0F,0x10,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

0x3E,0x00,0x00,0x02,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x00,0x00,0xF0,0x3F,0x00,
0x00,0x00,0xF0,0xFF,0x80,0x07,0x00,0x00,
0x80,0x03,0x00,0x02,0xE0,0xFF,0x7F,0xC0,
0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x1F,0x00,0x00,0x00,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x00,0x00,0xF0,0x3F,0x00,
0x00,0x00,0xC0,0x1F,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xFC,0x07,0xF0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x1C,0x00,0x00,0x00,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x00,0x00,0xF0,0x3F,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x00,0x00,0xF0,0x3F,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x00,0x08,0xF0,0x3F,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x00,0x08,0xF0,0x3F,0x00,

0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x00,0x08,0xF0,0x3F,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0xF0,0xDF,0x1F,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x00,0x08,0xF0,0x3F,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

0x00,0x00,0x00,0x00,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x00,0x0C,0xF0,0x3F,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x10,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x00,0x08,0xF0,0x3F,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x00,0x0E,0xF0,0x3F,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x00,0x0F,0xF0,0x3F,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x80,0x0B,0xF0,0x3F,0x00,
0x80,0x07,0x07,0x3C,0xF8,0x3F,0x07,0xFE,
0xC0,0x81,0x03,0x1E,0x30,0x00,0xC0,0xFF,
0x00,0x1E,0x70,0x70,0x18,0x78,0x00,0xFC,
0x83,0xFF,0x03,0xFC,0x1F,0xF8,0xC7,0x03,
0xE7,0x7F,0xF8,0x1F,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0xC0,0x0B,0xF0,0x3F,0x00,

0x80,0x07,0x07,0x3C,0xF8,0x3F,0x07,0xFF,
0xC3,0x83,0x03,0x1E,0x30,0x00,0xC0,0xFF,
0x01,0x1F,0x70,0x70,0x18,0x38,0x00,0xFE,
0x87,0xFF,0x03,0xFC,0x1F,0xFC,0x8F,0x83,
0xE7,0xFF,0xF8,0x1F,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0xE0,0x0B,0xF0,0x3F,0x00,
0x80,0x0F,0x07,0x3E,0xF8,0x1F,0xC7,0xEF,
0xC7,0x87,0x03,0x1F,0x30,0x00,0xC0,0xF3,
0x01,0x1F,0xF0,0x70,0x18,0x1E,0x00,0x9F,
0x8F,0xFF,0x01,0xFC,0x1F,0x9F,0x9F,0xC7,
0xE3,0xFF,0xF8,0x1F,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0xF0,0x0F,0xF0,0x3F,0x00,
0x80,0x1F,0x07,0x7E,0x80,0x03,0xC7,0x01,
0xC7,0x8F,0x03,0x3F,0x30,0x00,0xC0,0x81,
0x81,0x3F,0xF0,0x71,0x98,0x0F,0x80,0x07,
0x9E,0x03,0x00,0x1C,0x80,0x07,0x1C,0xEF,

0xE1,0xC0,0x81,0x01,0x00,0xFC,0x07,0x00,
0x00,0x00,0x00,0xE0,0x0E,0xF0,0x1F,0x00,
0x80,0x3F,0x07,0xFF,0x80,0x03,0xE7,0x01,
0xCE,0x9F,0x83,0x33,0x30,0x00,0xC0,0xFF,
0xC1,0x33,0xF0,0x77,0xF8,0x03,0x80,0x03,
0x9C,0xFF,0x00,0xFC,0x9F,0x03,0x00,0xFE,
0xE0,0xE0,0x80,0x01,0x00,0xF8,0x07,0x00,
0x00,0x00,0x08,0xB0,0x0F,0xF0,0x1F,0x00,
0x80,0x73,0x87,0xE7,0x81,0x03,0xE7,0x00,
0xCE,0x9D,0xC3,0x71,0x30,0x00,0xC0,0xFF,
0xC1,0x71,0xB0,0x7F,0xF8,0x0F,0x80,0x03,
0x9C,0xFF,0x00,0xFC,0x9F,0xC3,0x1F,0x78,
0xE0,0xFF,0x80,0x01,0x00,0xF0,0x07,0x00,
0x00,0x00,0x08,0xF0,0x0F,0xF0,0x0F,0x00,
0x80,0x73,0x87,0xC3,0x81,0x03,0xE7,0x00,
0xCE,0x91,0xC3,0x71,0x30,0x00,0xC0,0xC1,

0xE3,0x70,0x30,0x7E,0x78,0x0E,0x80,0x03,
0x9C,0x07,0x00,0x1C,0x80,0xC3,0x1F,0x30,
0xE0,0x3F,0x80,0x01,0x00,0xE0,0x07,0x00,
0x00,0x00,0x08,0xF0,0x0F,0xF0,0x01,0x00,
0x80,0xF3,0xC7,0xFF,0x83,0x03,0xE7,0x01,
0xCF,0xF1,0xE3,0xFF,0x30,0x00,0xC0,0x81,
0xE3,0xFF,0x30,0x7E,0x38,0x1E,0x80,0x03,
0x9C,0x03,0x00,0x1C,0x80,0x87,0x1E,0x30,
0xE0,0x01,0x80,0x01,0x00,0x80,0x07,0x00,
0x00,0x00,0x08,0xF0,0x0F,0xF0,0x00,0x00,
0x80,0xE3,0xC7,0xFF,0x83,0x03,0xC7,0x83,
0xC7,0xF1,0xF3,0xFF,0x31,0x00,0xC0,0x81,
0xF3,0xFF,0x31,0x7C,0x18,0x1C,0x80,0x0F,
0x9E,0x03,0x00,0x1C,0x00,0x0F,0x1C,0x30,
0xE0,0x00,0x80,0x01,0x00,0x00,0x00,0x00,
0x00,0x00,0x08,0xF0,0x0F,0x00,0x00,0x00,

0x80,0xC3,0xE7,0x81,0x87,0x03,0x87,0xFF,
0xC3,0xE1,0x73,0xC0,0xF1,0x3F,0xC0,0xFF,
0x73,0xC0,0x31,0x78,0x18,0x78,0x00,0xFF,
0x8F,0x03,0x00,0xFC,0x1F,0xFE,0x1F,0x30,
0xE0,0x00,0x80,0x01,0x00,0x00,0x00,0x00,
0x00,0x00,0x08,0xF0,0x0F,0x00,0x00,0x00,
0x80,0x83,0xF7,0x00,0x8F,0x03,0x07,0xFF,
0xC1,0xC1,0x33,0x80,0xF3,0x3F,0xC0,0xFF,
0x30,0xC0,0x33,0x70,0x18,0xF0,0x00,0xFC,
0x83,0x07,0x00,0xFC,0x1F,0xFC,0x07,0x30,
0xE0,0x00,0x80,0x01,0x00,0x00,0x00,0x00,
0x00,0x00,0x08,0xF0,0x0F,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x0A,0xF0,0x07,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x0B,0xF0,0x03,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x0C,0xF0,0x0F,0xF0,0x01,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
#endif

#ifdef EPS_LOGO
static const BYTE KPrintLogo[] =  {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x1C,0x00,0x00,0x00,0x00,0x00,
0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x10,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x10,0x00,0x01,0x00,0x00,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0x3F,0x00,0x00,
0x00,0x00,0x1E,0x00,0x00,0x00,0x00,0x00,
0x00,0x1C,0x80,0x01,0x00,0xC0,0x03,0x10,
0x00,0x00,0x00,0x00,0x00,0x80,0x03,0x0C,
0x00,0x70,0xF0,0x01,0x06,0x00,0x00,0x00,
0x1E,0x18,0x80,0x03,0x00,0xE0,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x03,0x00,

0x00,0x00,0x1E,0x00,0x00,0x00,0x00,0x00,
0x00,0x1F,0xC0,0x03,0x00,0xF0,0x07,0x10,
0x00,0x00,0x00,0x00,0x00,0xF0,0x01,0x1E,
0x00,0x38,0xB0,0x03,0x07,0x00,0x00,0xF0,
0x1F,0x7C,0xC0,0x07,0x00,0xF0,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x0F,0x00,
0x00,0x00,0x3C,0x00,0x00,0x00,0x00,0x00,
0x00,0x3E,0xE0,0x07,0x00,0x30,0x02,0x10,
0x00,0x00,0x00,0x0C,0x00,0x3E,0x00,0x1E,
0x00,0x1C,0xF0,0x01,0x07,0x00,0x00,0xFF,
0x03,0xFC,0xC0,0x0F,0x00,0xF8,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x1F,0x00,
0x00,0x00,0x1C,0x00,0x00,0x00,0x00,0x00,
0x00,0x7E,0xC0,0x0F,0x00,0xF0,0x07,0x10,
0x00,0x00,0x00,0x3C,0x80,0x0F,0x00,0x1E,
0x00,0x1F,0xF0,0x03,0x07,0x00,0xF0,0x1F,

0x00,0xF8,0xC1,0x1F,0x00,0xFC,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x1F,0x00,
0x00,0x00,0x06,0x03,0x00,0x00,0x00,0x00,
0x00,0xFE,0xC0,0x1F,0x00,0xE0,0x07,0x10,
0x00,0x00,0x00,0xFC,0x00,0x81,0x01,0x3C,
0x80,0x07,0xE0,0x03,0x0F,0x00,0xF8,0x03,
0x00,0xF8,0x81,0x1F,0x00,0xFE,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x1F,0x00,
0x00,0x80,0x6B,0x06,0xFE,0x00,0x00,0x00,
0x00,0x1C,0xC0,0x1F,0x00,0xC0,0x07,0x30,
0x00,0x00,0x00,0xFC,0x07,0xF0,0x0F,0x7C,
0xC0,0x07,0xF0,0x03,0x0E,0x00,0xFF,0x00,
0x00,0x78,0x80,0x07,0x00,0xFE,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x3F,0x00,
0x00,0xF0,0xCC,0x84,0xFF,0x00,0x00,0x00,
0x00,0x1C,0x80,0x07,0x00,0xE0,0x07,0x30,

0x00,0x00,0x00,0xF0,0x07,0xF0,0x07,0x5C,
0xF0,0x01,0x38,0x00,0x0E,0xF0,0x1F,0x00,
0x00,0x30,0x80,0x07,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x00,0x00,0xF0,0x3F,0x00,
0x00,0x1E,0xD8,0xE7,0xFF,0x00,0x00,0x00,
0x00,0x1C,0x80,0x07,0x00,0x70,0x00,0x30,
0x00,0x00,0x00,0xE0,0x07,0x70,0x1F,0x18,
0xF8,0x00,0x1E,0x00,0x0E,0xFC,0x01,0x00,
0x00,0x70,0x00,0x07,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x00,0x00,0xF0,0x3F,0x00,
0x00,0x00,0xF8,0xF0,0x61,0x00,0x00,0x00,
0x00,0x18,0x80,0x07,0x00,0x1C,0x00,0x30,
0x00,0x00,0x00,0x80,0x1F,0xF0,0x1F,0x18,
0x3C,0x80,0x07,0x00,0x0E,0x3F,0x00,0x00,
0x00,0x70,0x00,0x0F,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x00,0x00,0xF0,0x3F,0x00,

0x00,0x10,0x30,0x70,0x00,0x00,0x00,0x00,
0x00,0x18,0x00,0x07,0x00,0x0F,0x10,0x30,
0x00,0x00,0x00,0x00,0x1E,0xE0,0x07,0x18,
0x1E,0xE0,0x81,0x01,0x0C,0x07,0x00,0x00,
0x00,0x70,0x00,0x0F,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x00,0x00,0xF0,0x3F,0x00,
0x00,0x1C,0x00,0x38,0x00,0x00,0x00,0x00,
0x00,0x18,0x00,0x0F,0xE0,0x43,0x24,0x70,
0x00,0x00,0x00,0x80,0x7C,0xC0,0x01,0x98,
0x0F,0x78,0xE0,0x01,0x9C,0x03,0x00,0x00,
0x00,0x70,0x00,0x0E,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x00,0x00,0xF0,0x3F,0x00,
0x00,0x0E,0x00,0x18,0x00,0x00,0x00,0x00,
0x00,0x18,0x00,0x0F,0x7C,0xC0,0x2C,0x70,
0x00,0x00,0x00,0xC0,0xF1,0x41,0x00,0xF8,
0x83,0x1F,0xF0,0x01,0x1C,0x00,0x00,0x00,

0x00,0x70,0x00,0x0E,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x00,0x08,0xF0,0x3F,0x00,
0x00,0x0F,0x00,0xF8,0x3F,0x00,0x00,0x00,
0x00,0x30,0x00,0x0F,0x0E,0x80,0x3F,0x60,
0x00,0x00,0x00,0xE0,0xE3,0x07,0x00,0xF8,
0x00,0x00,0x78,0x00,0x1C,0x18,0x00,0x00,
0x00,0x60,0x00,0x1E,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x00,0x0F,0xF0,0x3F,0x00,
0x00,0x07,0x00,0xF8,0x7F,0x00,0x00,0x00,
0x00,0x30,0x00,0x0E,0x00,0x80,0x0F,0xE0,
0x00,0x00,0x00,0xF0,0x83,0x1F,0x00,0x7E,
0x00,0x00,0x18,0x00,0x1C,0x7E,0x00,0x00,
0x00,0xE0,0x00,0x1E,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x00,0x0A,0xF0,0x3F,0x00,
0x80,0x03,0x00,0xF0,0xFF,0x00,0x00,0xF0,
0x0F,0x30,0x00,0x0E,0x00,0x00,0x00,0xE0,

0x00,0x00,0x00,0xF0,0x03,0x1E,0x00,0x3F,
0x00,0x00,0x78,0x00,0x1C,0x3E,0x00,0x00,
0x00,0xE0,0x00,0x1C,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x00,0x0A,0xF0,0x3F,0x00,
0x80,0x03,0x00,0x00,0xFF,0x00,0x00,0xFC,
0x3F,0x30,0x00,0x1E,0x00,0x00,0x00,0xE0,
0x00,0x00,0x00,0x30,0x03,0xFC,0xC0,0x3F,
0x00,0x00,0xF8,0x07,0x1C,0x1E,0x00,0x00,
0x00,0xE0,0x00,0x1C,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x00,0x0C,0xF0,0x3F,0x00,
0x80,0x03,0x00,0x00,0x78,0x00,0x80,0xFF,
0x7F,0x30,0x00,0x1E,0x00,0x00,0x00,0xF0,
0x01,0x00,0x00,0x10,0x03,0xF0,0xF3,0x37,
0x80,0x03,0xF8,0x07,0x1C,0x00,0x00,0x00,
0x00,0xE0,0x00,0x1C,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x80,0x0D,0xF0,0x3F,0x00,

0x80,0x07,0x00,0x00,0x3E,0x00,0xE0,0x0F,
0xFC,0x30,0x00,0x1E,0x10,0x00,0x00,0xF0,
0x03,0x00,0x00,0xF8,0x03,0xE0,0xFF,0x31,
0xC0,0x01,0xC0,0x07,0x1C,0x00,0x00,0x00,
0x00,0xC0,0x00,0x1C,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0xC0,0x05,0xF0,0x3F,0x00,
0x00,0x1F,0x00,0xE0,0x1F,0x00,0xF0,0x01,
0xF0,0xF0,0x3F,0x1E,0x18,0x00,0x00,0xFE,
0x1F,0x00,0x00,0xFF,0x01,0x80,0x7F,0x30,
0xE0,0x30,0xF0,0x03,0x1C,0x00,0x00,0x00,
0x00,0xC0,0x00,0x1C,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x80,0x06,0xF0,0x3F,0x00,
0x00,0xFE,0x00,0xFE,0x07,0xFE,0x73,0x00,
0x70,0xF8,0x7F,0x1E,0x0C,0x00,0xC0,0x9F,
0xFF,0x00,0xFE,0xFF,0x07,0x00,0x3F,0x30,
0x60,0xE0,0xFF,0x00,0x1E,0x00,0x03,0x00,

0x70,0xC0,0x01,0x1C,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0xC0,0x03,0xF0,0x3F,0x00,
0x00,0xF8,0xFF,0xFF,0x00,0xFF,0x3F,0x00,
0x78,0xFC,0x7F,0x1E,0x0C,0x00,0xE0,0x7F,
0xFE,0xFF,0xFF,0xFF,0x1F,0x80,0x3F,0x30,
0x60,0x00,0x1E,0x00,0x1F,0x80,0x01,0x00,
0x30,0xC0,0x01,0x1C,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x40,0x01,0xF0,0x3F,0x00,
0x00,0xF0,0xFF,0x3F,0xE0,0xFF,0x1F,0xC0,
0xFF,0xFF,0x71,0x0E,0x0E,0x00,0xE0,0xFF,
0xF9,0xFF,0xFF,0xFF,0x1F,0xC0,0x73,0x30,
0xE0,0x00,0x00,0xC0,0x1F,0xE0,0x03,0x00,
0x7E,0xE0,0x00,0x1C,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0xC0,0x00,0xF0,0x3F,0x00,
0x00,0x00,0xFF,0x07,0xF0,0x87,0xFF,0xFF,
0xFF,0xEF,0x7F,0x0E,0x0E,0x00,0xE0,0xFF,

0xE0,0xFF,0x1F,0x38,0x3E,0xE0,0x60,0x30,
0xE0,0x03,0x00,0xF0,0x33,0xF0,0x07,0xE0,
0xFF,0xFF,0x00,0x0C,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x30,0x00,0xF0,0x3F,0x00,
0x00,0x00,0x20,0x00,0xF8,0x01,0xFF,0xFF,
0x3F,0xC0,0x7F,0x0E,0x0E,0x00,0x00,0xF0,
0x00,0x00,0x00,0xF8,0x3D,0x70,0x70,0x30,
0xE0,0x1F,0x00,0xFE,0xF0,0xFF,0xFF,0xFF,
0xEF,0x7F,0x00,0x0E,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x18,0x00,0xF0,0x3F,0x00,
0x00,0x00,0x30,0x00,0x3E,0x00,0xF0,0x7F,
0x00,0x00,0x1F,0x0E,0x1E,0x00,0x00,0x78,
0x00,0x00,0x00,0xF0,0x3F,0xF0,0x7F,0x30,
0xC0,0xFF,0xFF,0x3F,0xF0,0x3F,0xFF,0xFF,
0xC1,0x1F,0x00,0x0E,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x03,0x00,0xF0,0x3F,0x00,

0x00,0x00,0x30,0x00,0x1F,0x00,0x00,0x00,
0x00,0x00,0x00,0x0E,0x1C,0x00,0x00,0x1E,
0x00,0x00,0x00,0xE0,0x1F,0xE0,0x3F,0x10,
0x00,0xFF,0xFF,0x0F,0xE0,0x1F,0xFC,0x1F,
0x00,0x00,0x00,0x06,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x00,0x00,0xF0,0x3F,0x00,
0x00,0x00,0x70,0xE0,0x0F,0x70,0x00,0x00,
0x00,0x70,0x00,0x06,0x78,0x00,0xE0,0x1F,
0x70,0x00,0x00,0xC0,0x1F,0xE0,0x1F,0x10,
0x00,0xFC,0xFF,0x03,0x80,0x0F,0xF0,0x0F,
0x0C,0x00,0x00,0x06,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x00,0x00,0xF0,0x3F,0x00,
0x00,0x00,0xF0,0xFF,0x03,0x1E,0x00,0x00,
0x00,0x1E,0x00,0x06,0xF0,0xFF,0xFF,0x07,
0x3F,0x00,0x00,0x00,0x00,0xC0,0x0F,0x10,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

0x3E,0x00,0x00,0x02,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x00,0x00,0xF0,0x3F,0x00,
0x00,0x00,0xF0,0xFF,0x80,0x07,0x00,0x00,
0x80,0x03,0x00,0x02,0xE0,0xFF,0x7F,0xC0,
0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x1F,0x00,0x00,0x00,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x00,0x00,0xF0,0x3F,0x00,
0x00,0x00,0xC0,0x1F,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xFC,0x07,0xF0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x1C,0x00,0x00,0x00,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x00,0x00,0xF0,0x3F,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x00,0x00,0xF0,0x3F,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x00,0x08,0xF0,0x3F,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x00,0x08,0xF0,0x3F,0x00,

0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x00,0x08,0xF0,0x3F,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0xF0,0xDF,0x1F,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x00,0x08,0xF0,0x3F,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

0x00,0x00,0x00,0x00,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x00,0x0C,0xF0,0x3F,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x10,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x00,0x08,0xF0,0x3F,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x00,0x0E,0xF0,0x3F,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x00,0x0F,0xF0,0x3F,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0x80,0x0B,0xF0,0x3F,0x00,
0x80,0x07,0x07,0x3C,0xF8,0x3F,0x07,0xFE,
0xC0,0x81,0x03,0x1E,0x30,0x00,0xC0,0xFF,
0x00,0x1E,0x70,0x70,0x18,0x78,0x00,0xFC,
0x83,0xFF,0x03,0xFC,0x1F,0xF8,0xC7,0x03,
0xE7,0x7F,0xF8,0x1F,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0xC0,0x0B,0xF0,0x3F,0x00,

0x80,0x07,0x07,0x3C,0xF8,0x3F,0x07,0xFF,
0xC3,0x83,0x03,0x1E,0x30,0x00,0xC0,0xFF,
0x01,0x1F,0x70,0x70,0x18,0x38,0x00,0xFE,
0x87,0xFF,0x03,0xFC,0x1F,0xFC,0x8F,0x83,
0xE7,0xFF,0xF8,0x1F,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0xE0,0x0B,0xF0,0x3F,0x00,
0x80,0x0F,0x07,0x3E,0xF8,0x1F,0xC7,0xEF,
0xC7,0x87,0x03,0x1F,0x30,0x00,0xC0,0xF3,
0x01,0x1F,0xF0,0x70,0x18,0x1E,0x00,0x9F,
0x8F,0xFF,0x01,0xFC,0x1F,0x9F,0x9F,0xC7,
0xE3,0xFF,0xF8,0x1F,0x00,0xFE,0x07,0x00,
0x00,0x00,0x00,0xF0,0x0F,0xF0,0x3F,0x00,
0x80,0x1F,0x07,0x7E,0x80,0x03,0xC7,0x01,
0xC7,0x8F,0x03,0x3F,0x30,0x00,0xC0,0x81,
0x81,0x3F,0xF0,0x71,0x98,0x0F,0x80,0x07,
0x9E,0x03,0x00,0x1C,0x80,0x07,0x1C,0xEF,

0xE1,0xC0,0x81,0x01,0x00,0xFC,0x07,0x00,
0x00,0x00,0x00,0xE0,0x0E,0xF0,0x1F,0x00,
0x80,0x3F,0x07,0xFF,0x80,0x03,0xE7,0x01,
0xCE,0x9F,0x83,0x33,0x30,0x00,0xC0,0xFF,
0xC1,0x33,0xF0,0x77,0xF8,0x03,0x80,0x03,
0x9C,0xFF,0x00,0xFC,0x9F,0x03,0x00,0xFE,
0xE0,0xE0,0x80,0x01,0x00,0xF8,0x07,0x00,
0x00,0x00,0x08,0xB0,0x0F,0xF0,0x1F,0x00,
0x80,0x73,0x87,0xE7,0x81,0x03,0xE7,0x00,
0xCE,0x9D,0xC3,0x71,0x30,0x00,0xC0,0xFF,
0xC1,0x71,0xB0,0x7F,0xF8,0x0F,0x80,0x03,
0x9C,0xFF,0x00,0xFC,0x9F,0xC3,0x1F,0x78,
0xE0,0xFF,0x80,0x01,0x00,0xF0,0x07,0x00,
0x00,0x00,0x08,0xF0,0x0F,0xF0,0x0F,0x00,
0x80,0x73,0x87,0xC3,0x81,0x03,0xE7,0x00,
0xCE,0x91,0xC3,0x71,0x30,0x00,0xC0,0xC1,

0xE3,0x70,0x30,0x7E,0x78,0x0E,0x80,0x03,
0x9C,0x07,0x00,0x1C,0x80,0xC3,0x1F,0x30,
0xE0,0x3F,0x80,0x01,0x00,0xE0,0x07,0x00,
0x00,0x00,0x08,0xF0,0x0F,0xF0,0x01,0x00,
0x80,0xF3,0xC7,0xFF,0x83,0x03,0xE7,0x01,
0xCF,0xF1,0xE3,0xFF,0x30,0x00,0xC0,0x81,
0xE3,0xFF,0x30,0x7E,0x38,0x1E,0x80,0x03,
0x9C,0x03,0x00,0x1C,0x80,0x87,0x1E,0x30,
0xE0,0x01,0x80,0x01,0x00,0x80,0x07,0x00,
0x00,0x00,0x08,0xF0,0x0F,0xF0,0x00,0x00,
0x80,0xE3,0xC7,0xFF,0x83,0x03,0xC7,0x83,
0xC7,0xF1,0xF3,0xFF,0x31,0x00,0xC0,0x81,
0xF3,0xFF,0x31,0x7C,0x18,0x1C,0x80,0x0F,
0x9E,0x03,0x00,0x1C,0x00,0x0F,0x1C,0x30,
0xE0,0x00,0x80,0x01,0x00,0x00,0x00,0x00,
0x00,0x00,0x08,0xF0,0x0F,0x00,0x00,0x00,

0x80,0xC3,0xE7,0x81,0x87,0x03,0x87,0xFF,
0xC3,0xE1,0x73,0xC0,0xF1,0x3F,0xC0,0xFF,
0x73,0xC0,0x31,0x78,0x18,0x78,0x00,0xFF,
0x8F,0x03,0x00,0xFC,0x1F,0xFE,0x1F,0x30,
0xE0,0x00,0x80,0x01,0x00,0x00,0x00,0x00,
0x00,0x00,0x08,0xF0,0x0F,0x00,0x00,0x00,
0x80,0x83,0xF7,0x00,0x8F,0x03,0x07,0xFF,
0xC1,0xC1,0x33,0x80,0xF3,0x3F,0xC0,0xFF,
0x30,0xC0,0x33,0x70,0x18,0xF0,0x00,0xFC,
0x83,0x07,0x00,0xFC,0x1F,0xFC,0x07,0x30,
0xE0,0x00,0x80,0x01,0x00,0x00,0x00,0x00,
0x00,0x00,0x08,0xF0,0x0F,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x0A,0xF0,0x07,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x0B,0xF0,0x03,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x0C,0xF0,0x0F,0xF0,0x01,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
#endif  // EPS_LOGO

#endif // _LOGO_H_

