#include "sum.h"

#include<stdio.h>
#include<assert.h>

/* Sum integers 1 to n */
int sum (int n)
{
/* pre-condition */
  assert (n >= 1);
/* post-condition */
  if (n > 1)
    return n + sum (n - 1);
  else
    return 1;
}

/* Sum integers 1 to n */
int sumtail (int n, int total)
{

  if(n == 1){ //if n equal 1 return 1 + total
    return 1 + total;
  }
  else{
    return sumtail(n-1, n+total); //else return sumtail n-1, with new total being n + total.
  }

}

/* Sum integers 1 to n */
int sumwhile (int n)
{
  assert(n >= 1); //assert that n is equal or larger than 1
  int sumw = 0; //initialize while sum

  for (int i = 1; i <= n; i++) //loop from integer 1 to n
  {
    sumw = sumw + i; //sums current integer i which is 1<= i <=n with the sumtotal (sumw)
  }
  

  return sumw; //returns the sum total
}

