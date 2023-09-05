#include <stdio.h>
#include <stdlib.h>

// maneira iterativa:
#include <stdio.h>

int fibonacci(int months) {
  int n1 = 0, n2 = 1;

  for (int i = 1; i < months; i++) {
    int n3 = n1 + n2;
    n1 = n2;
    n2 = n3;
  }
  return n2;
}

int main() {
  int n;

  printf("Quantidade de coelhos após N meses!\n");

  printf("Insira a quantiadade de meses: \n");
  scanf("%d", &n);

  printf("A quantidade de coelhos será: %d\n", fibonacci(n));

  return 0;
}

// maneira recursiva:
#include <stdio.h>

int fibonacciR(int months) {
  if (months == 0 || months == 1) {
    return months;
  } else {
    return fibonacci(months - 1) + fibonacci(months - 2);
  }
}

int main() {
  int n;

  printf("Quantidade de coelhos após N meses!\n");

  printf("Insira a quantiadade de meses: \n");
  scanf("%d", &n);

  printf("A quantidade de coelhos será: %d\n", fibonacciR(n));

  return 0;
}
