#include <stdio.h>
#include <locale.h>
  int main(){
  	setlocale (LC_ALL, "Portuguese_Brazil");
  	
  	int a, b;
  	
  	float resultado;
  	printf("Divida os n�meros que deseja:\n\n");
  	
  	printf("Insira o Primeiro N�mero: ");
  	scanf("%d", &a);
  	
  	printf("Insira o Segundo N�mero: ");
  	scanf("%d", &b);
  	
  	resultado = a / b;
  	
  	int resto = a % b;  	
  	
  	printf("O quociente entre os n�meros %d e %d � %.1f e o resto � %d", a, b, resultado, resto);
  	
  	return 0;
  }
