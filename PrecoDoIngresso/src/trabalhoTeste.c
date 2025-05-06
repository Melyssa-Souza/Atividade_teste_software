#include <stdio.h>
#include "calcularPreco.h"

int main(void) {
  int idade, quantidade;

  printf("Digite a idade do visitante: ");
  scanf("%d", &idade);

  if (idade < 0) {
    printf("Idade inválida.\n");
    return 1;
  }

  printf("Digite a quantidade de bilhetes: ");
  scanf("%d", &quantidade);

  float precoTotal = calcularPreco(idade, quantidade);

  if (precoTotal >= 0) {
    printf("Preço total: R$ %.2f\n", precoTotal);
  }

}
