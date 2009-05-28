/*----------------------------------------------------------------------------
 ADOL-C -- Automatic Differentiation by Overloading in C++
 File:     usrparms.h
 Revision: $Id$
 Contents: User parameters:
           These parameters might affect the performance of the ADOL-C
           system; they are intended to be tweeked by users and local
           maintainence personal.
 
 Copyright (c) Andrea Walther, Andreas Griewank, Andreas Kowarz, 
               Hristo Mitev, Sebastian Schlenkrich, Jean Utke, Olaf Vogel
  
 This file is part of ADOL-C. This software is provided as open source.
 Any use, reproduction, or distribution of the software constitutes 
 recipient's acceptance of the terms of the accompanying license file.
                           
----------------------------------------------------------------------------*/

#if !defined(ADOLC_USRPARMS_H)
#define ADOLC_USRPARMS_H 1

/*--------------------------------------------------------------------------*/
/* Buffer sizes */
#define OBUFSIZE  65536 /* 16384 or  524288  */
#define LBUFSIZE  65536 /* 16384 or  524288  */
#define VBUFSIZE  65536 /* 16384 or  524288  */

/*--------------------------------------------------------------------------*/
/* Buffer size for temporary Taylor store */
#define TBUFSIZE  65536 /* 16384 or  524288  */

/*--------------------------------------------------------------------------*/
/* Number of temporary Taylor stores*/
#define TBUFNUM    32

/*--------------------------------------------------------------------------*/
/* ADOL-C data types */
#define locint     unsigned int                /* ensure locint is unsigned */
#define revreal    double

/*--------------------------------------------------------------------------*/
/* Data types used by Fortran callable versions of functions */
#define fint       long
#define fdouble    double

/*--------------------------------------------------------------------------*/
/* Definionion of inf and NaN */
#define inf_num    1.0     /* don't undefine these;  on non-IEEE machines */
#define inf_den    0.0     /* change the values to get small fractions    */
#define non_num    0.0     /* (inf_num/inf_den) and (non_num/non_den)     */
#define non_den    0.0     /* respectively, see the documentation         */
#define ADOLC_EPS  10E-20  /* for test on zero                            */

/*--------------------------------------------------------------------------*/
/* Enable/disable asinh, acosh,atanh, erf */
#undef ATRIG_ERF
/* #define ATRIG_ERF 1 */

/****************************************************************************/
/* Standard output used for diagnostics by ADOL-C,                          */
/* e.g. stdout or stderr or whatever file identifier                        */
#define DIAG_OUT stderr

/*--------------------------------------------------------------------------*/
/* Use 'calloc' instead of 'malloc' in ADOL-C allocation routines. If you   */
/* have any trouble with uninitialized memory, then define ADOLC_USE_CALLOC.*/
#define ADOLC_USE_CALLOC 1

/*--------------------------------------------------------------------------*/
/* Constants used by the checkpointing part (revolve) */
#define ADOLC_CHECKUP 1000
#define ADOLC_REPSUP 1000

/*--------------------------------------------------------------------------*/
/* Maximal size (Bytes) of a block to be written with fwrite or read with   */
/* fread  --- power of 2 > 8 preferable ;-) ---                             */
#define ADOLC_IO_CHUNK_SIZE 1073741824

/*--------------------------------------------------------------------------*/
#endif
