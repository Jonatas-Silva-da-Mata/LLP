#include <stdio.h>
#include <locale.h>
  int main(){
  	setlocale (LC_ALL, "Portuguese_Brazil");
  	
  	float a, b, resultado;
  	printf("Divida os n�meros que deseja:\n\n");
  	
  	printf("Insira o Primeiro N�mero: ");
  	scanf("%f", &a);
  	
  	printf("Insira o Segundo N�mero: ");
  	scanf("%f", &b);
  	
  	resultado = (a / b)%;
  	printf("O quociente entre os n�meros %.2f e %.2f � %.2", a, b, resultado);
  	
  	return 0;
  }
