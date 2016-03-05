/* This file is automatically generated. DO NOT EDIT! */

#ifndef _sf_alloc_h
#define _sf_alloc_h


#ifndef _LARGEFILE_SOURCE
#define _LARGEFILE_SOURCE
#endif

#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>

#if defined(_MSC_VER) && (_MSC_VER < 1800)
#define strdup _strdup
#define snprintf _snprintf
#endif

#include "_bool.h"


/*------------------------------------------------------------*/
void *sf_alloc (size_t n,   /* number of elements */
                size_t size /* size of one element */);
/*< output-checking allocation >*/

/*------------------------------------------------------------*/
double *sf_doublealloc (size_t n /* number of elements */);
/*< double allocation >*/

/*------------------------------------------------------------*/
double **sf_doublealloc2(size_t n1, /* fast dimension */
                         size_t n2  /* slow dimension */);
/*< float 2-D allocation, out[0] points to a contiguous array >*/

#endif
