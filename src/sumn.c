#include "sumn.h"

#include<stdio.h>

int sumn (int n)
{
    //answer for part 2)
    if (n == 1)
    {
        return 1; //base case is 2*1-1 = 1 so when n is 1 it will return 1
    }
    else
    {
        return (2*n-1) + sumn(n-1); //returns the sum of n'th positive odd number + call sumn of n-1'th positive odd number 
    }
    
}