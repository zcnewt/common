#include <stdio.h>
#include <stdlib.h>
#include <gmp.h>
int MAX=1000000;//tested so far up to 1 million! DAAAYYYYUM
int main(void){
  mpz_t * fibmat;
  fibmat = malloc(sizeof(mpz_t) * MAX);
  printf("size of mpz_t: %lu\n",sizeof(mpz_t));
  int i;
  mpz_init_set_ui(fibmat[0],1);
  mpz_init_set_ui(fibmat[1],1);
  mpz_init_set_ui(fibmat[2],2);
  for (i=2;i<MAX;i++){
    mpz_add(fibmat[2],fibmat[1],fibmat[0]);//set second position to new value
    mpz_swap(fibmat[0],fibmat[1]);
    mpz_swap(fibmat[1],fibmat[2]);
  }
  //gmp_printf("Limb size:%lu  \nFibonacci Number %d:\n %Zd \n",mpz_size(fibmat[1]),MAX,fibmat[1]);
  printf("Limb size for %d fibonaccia number: %lu\n Size in memory(bytes):%lu\n",MAX,mpz_size(fibmat[1]),mpz_size(fibmat[1])*16);
  return 0;
}
