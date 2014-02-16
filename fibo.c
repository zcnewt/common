#include "stdio.h"
int MAX=1000;
int main(){
  long long fibmat[MAX];
  int i;
  fibmat[0]=1;
  fibmat[1]=1;
  for (i=2;i<MAX;i++){
    fibmat[i]=fibmat[i-1]+fibmat[i-2];
    printf("Fibonacci Number %d: %lld \n",i,fibmat[i]);
  }
  return 0;
}
