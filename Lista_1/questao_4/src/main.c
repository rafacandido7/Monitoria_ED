#include <stdio.h>
#include <stdlib.h>

int getLength() {
  int length;
  printf("Digite o tamanho do vetor: \n");
  scanf("%d", &length);

  return length;
}

int *readVector(int length) {
  int *vector = (int *)malloc(length * sizeof(int));
  printf("Digite os valores do vetor: \n");

  for (int i = 0; i < length; i++) {
    printf("Digite o %d valor: \n", i + 1);
    scanf("%d", vector + i);
  }

  return vector;
}

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void reverter_vetor(int length, int *vector) {
  for (int i = 0; i < (length / 2); i++) {
    swap(vector + i, vector + length - i - 1);
  }
}

void printVector(int *vector, int length) {
  for (int i = 0; i < length; i++) {
    printf("%d", *(vector + i));
  }
  printf("\n");
}

int main() {
  printf("====== Inverte Vetor ======\n");
  int length = getLength();

  int *vector = readVector(length);

  printVector(vector, length);

  reverter_vetor(length, vector);

  printVector(vector, length);

  free(vector);

  return 0;
}
