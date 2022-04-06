#include <time.h>
#include <stdio.h>

const long int ITERATIONS = 250000000;

void normal_division(){
  int x = 2500000000;
  clock_t start_t, end_t, total_t;
  printf("\n========== | Teste para 'x = i/2' | ==========\n");
  start_t = clock();
  printf("\nInicio: %ld clock pulses\n", start_t);
  for(int i=0; i< ITERATIONS; i++) {
     x = x/2;
   }
  end_t = clock();
  printf("Fim: %ld clock pulses\n", end_t);
  printf("Diferença: %ld clock pulses\n", (end_t - start_t));

  total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
  printf("Tempo total gasto pela CPU: %lds\n", total_t);
  printf("\n==================================================\n");
}

void division_by_displacement(){
  int x = 2500000000;
  clock_t start_t, end_t, total_t;
  printf("\n========== | Teste para 'x = x >> 1;' | ==========\n");
  start_t = clock();
  printf("\nInicio: %ld clock pulses\n", start_t);
  for(int i=0; i< ITERATIONS; i++) {
     x = x >> 1;
   }
  end_t = clock();
  printf("Fim: %ld clock pulses\n", end_t);
  printf("Diferença: %ld clock pulses\n", (end_t - start_t));

  total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
  
  printf("\nTempo total gasto pela CPU: %lds\n", total_t);
  printf("\n==================================================\n");
}


int main () {
  system("clear");
  printf("\n\nClocks por segundo nesse sistema: %ld\n", CLOCKS_PER_SEC);
  printf("Iterações utilizadas para o teste: %ld\n", ITERATIONS);

  normal_division(); // => x = x/2 
  division_by_displacement(); // x = x >> 1;

  return(0);
}