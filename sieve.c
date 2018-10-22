#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "sieve.h"
int sieve(int targetprime){
  if(targetprime == 1){
    return 2;
  }
  if(targetprime == 2){
    return 3;
  }
  int size = targetprime*log(targetprime) * 1.25;
  char* nums = malloc(size);
  for (int y = 0; y<size; y++){
    nums[y] = 1;
  }
  int numprime = 2;
  int curprime = 3;
  int next = 3;
  int test = 0;
  for(int y=2; y<size; y++){
    int count = 0;
    for(int x = curprime + 1;x < size;x++){

      if (nums[x] == 1){

        if ((x%curprime) == 0){
          nums[x] = 0;
        }
        else{
          if(count == 0){
            count ++;
            next = x;
          }
        }

      }

    }
    //printf("%d\n", curprime);
    if(numprime == targetprime){
      return next;
      printf("%d\n",test);
    }
    curprime = next;
    numprime ++;
  }
  return next;
}
