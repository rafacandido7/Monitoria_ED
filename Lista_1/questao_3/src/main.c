#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_VETOR 10

void calcula_min_max(int *v, int *maior, int *menor) {
  *menor = v[0]; // Inicialize menor com o primeiro elemento do vetor
  *maior = v[0]; // Inicialize maior com o primeiro elemento do vetor

  for (int i = 1; i < TAMANHO_VETOR; i++) {
    if (v[i] < *menor) {
      *menor = v[i];
    }

    if (v[i] > *maior) {
      *maior = v[i];
    }
  }
}

void printVector(int *vector, int length) {
  for (int i = 0; i < length; i++) {
    printf("%d ", *(vector + i));
  }
  printf("\n");
}

int main() {
  int v[TAMANHO_VETOR] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int menor, maior;

  calcula_min_max(v, &maior, &menor);

  printVector(v, TAMANHO_VETOR);

  printf("Menor: %d\nMaior: %d", menor, maior);

  return 0;
}
