/*
 * Fibonacci numbers defined recursively
 */
#include "fib.h"

#include <assert.h>		/* assert */
#include <stdio.h>		/* printf */

/* Fibonacci function definition */
int fib (int n, int p, int pp)
{
    assert(n >= 1); //check that n is equal or larger than 1


    if(n == 1){ //if n is 1, return p
        return p;
    }
    else if(n == 2){ //else if n is 2 return pp
        return pp;
    }
    else{ //else
        return fib(n-1, pp , pp + p); // returns fib with recursive tail, n-1, with new previous p and pp being pp and pp+p.
    }

}
