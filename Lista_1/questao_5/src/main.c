#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 30;

char *getString(char *s) {
  printf("Digite a string:\n");

  fgets(s, 30, stdin);

  char *space = strstr(s, "\n");

  if (space != NULL) {
    *space = '\0';
  }

  return s;
}

char *getSeparate(char *sep) {
  printf("Digite o separador entre as duas strings\n");
  fgets(sep, 10, stdin);

  return sep;
}

char *concatenateStrings(char *s1, char *s2, char sep) {
  int totalLength = strlen(s1) + 1 + strlen(s2) + 1;
  char *result = (char *)malloc(totalLength);

  if (result != NULL) {
    snprintf(result, totalLength, "%s%c%s", s1, sep, s2);
  }

  return result;
}

int main() {
  char s1[30];
  char s2[30];
  char sep = '-';

  getString(s1);
  getString(s2);

  getSeparate(&sep);

  char *concat = concatenateStrings(s1, s2, sep);

  printf("Primeira String: %s, Segunda String: %s, String concatenada: %s\n",
	 s1, s2, concat);

  return 0;
}
