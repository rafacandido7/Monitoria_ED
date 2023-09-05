#include <math.h>
#include <stdio.h>
#include <stdlib.h>

float calcula_delta(float a, float b, float c) { return pow(b, 2) - 4 * a * c; }

void calcula_raizes(float a, float b, float c) {
  const float delta = calcula_delta(a, b, c);

  if (delta < 0) {
    printf("A equação não possui raiz real!\n");
  }

  if (delta == 0) {
    const float raiz = -b / (2 * a);

    printf("A equação possui 2 raizes com o mesmo valor: %f.\n", raiz);
  }

  if (delta > 1) {
    const float raiz1 = ((-b + sqrtf(delta)) / (2 * a));
    const float raiz2 = ((-b - sqrtf(delta)) / (2 * a));

    printf("A equação possui 2 raizes: %f e %f.\n", raiz1, raiz2);
  }
}

void pega_coeficientes(float *a, float *b, float *c) {
  printf("Digite os coeficientes da equação (valor1 valor2 valor3):\n");
  scanf("%f %f %f", a, b, c);
}

int main() {
  float a = 0, b = 0, c = 0;
  pega_coeficientes(&a, &b, &c);

  calcula_raizes(a, b, c);

  return 0;
}
