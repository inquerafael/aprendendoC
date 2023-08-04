#include <stdio.h>

int main(void) {
  printf("Hello World\n");

  int notas[3];
  int media;
  int cont = 0;

  while (cont < 3) {
    printf("Digite a Nota: ");
    scanf("%d", &notas[cont]);
    cont++;
  }
  media = (notas[0] + notas[1] + notas[2]) / 3;
  printf("media: %d\n", media);

  if (media >= 7) {
    printf("Aluno aprovado!");
  } else if (media < 5) {
    printf("Aluno reprovado!");
  } else {
    printf("recuperaçao!");
  }

  return 0;
}