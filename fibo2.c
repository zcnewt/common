#include <stdio.h>
#include <stdlib.h>
#include <gmp.h>
int MAX=10000;
int main(void){
  mpz_t * fibmat;
  fibmat = malloc(sizeof(mpz_t) * MAX);
  printf("size of mpz_t: %lu\n",sizeof(mpz_t));
  int i;
  mpz_init_set_ui(fibmat[0],1);
  mpz_init_set_ui(fibmat[1],1);
  for (i=2;i<MAX;i++){
    mpz_init(fibmat[i]);
    mpz_add(fibmat[i],fibmat[i-1],fibmat[i-2]);
  }
  gmp_printf("Fibonacci Number %d:\n %Zd \n",i-1,fibmat[i-1]);
  return 0;
}
