/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   datatype.h
 * Author: hansone123
 *
 * Created on December 8, 2015, 12:34 AM
 */

#ifndef DATATYPE_H
#define DATATYPE_H


typedef unsigned char uchar;
typedef unsigned long long int uint64;
typedef long long int int64;
struct real_num {
  unsigned char sign;     /* Sign of the overall value */
  unsigned char approx;   /* True if the value is approximate */
  short e;                /* The exponent. */
  uint64 m;       /* The significant */
};

#endif /* DATATYPE_H */

