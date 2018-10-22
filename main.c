#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "sieve.h"
int main(int argc, char * argv[]){

  printf("Testing sieve function:\n");
  printf("1st prime is %d \n", sieve(1));
  printf("2nd prime is %d \n", sieve(2));
  printf("100th prime is %d \n", sieve(100));
  printf("1000th prime is %d \n", sieve(1000));
  printf("10000th prime is %d \n", sieve(10000));
  return 0;
}
