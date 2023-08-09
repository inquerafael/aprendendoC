#include <stdio.h>

int main(void) {
  printf("Hello World\n"); // anti-zica
  char frame[39] = "+-----------------------------------+\n";
  int tf = 0; // true, false

  char nome[45];
  char escolhas[1];
  double media[3];
  char materia[][25] = {"Matematica", "Historia", "Portugues"};

  while (tf == 0) {
    printf("Digite o nome do aluno: ");
    scanf("%c", &nome[45]);
    printf(
        "Selecione a materia \n> Matematica(A)\n> Historia(B)\n> Portugues(C)");
    scanf("%c", &escolhas[1]);
    if ((escolhas[0] == 'a') || (escolhas[0] == 'b') || (escolhas[0] == 'c')) {
      switch (escolhas[0]) {
      case 'a':
        printf("Matematica");
        break;
      case 'b':
        printf("Historia");
        break;
      case 'c':
        printf("Portugues");
        break;
      }
    } else {
      printf("A letra digitada não faz parte das opcoes dispostas acima");
      tf = 1; // provisorio
    }
  }

  return 0;
}