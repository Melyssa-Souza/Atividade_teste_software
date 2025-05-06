#include <stdio.h>
#include "calcularPreco.h"

float calcularPreco(int idade, int quantidade) {
    if (quantidade > 5 || quantidade < 1) {
      printf("Quantidade invalida.\n");
      return -1.0;
  } 
  printf("Quantidade valida.\n");

  float precoUnitario;

  if (idade <= 12) {
    precoUnitario = 10.00;
  } else if (idade >= 60) {
    precoUnitario = 15.00;
  } else {
    precoUnitario = 30.00;
  }

  return precoUnitario * quantidade;
}

