#include <stdio.h>
#include <locale.h>

  int main(){
  	setlocale (LC_ALL, "Portuguese_Brazil");
  	
  	float a, b, c, d, resultado;
  	printf("Atribua os valores dos quatros numeros\n\n\n\n");
  	
  	printf("Primeiro numero: ");
  	scanf("%f", &a);
  	
  	printf("Segundo N�mero: ");
	scanf("%f", &b);
	
	printf("Terceiro N�mero: ");
	scanf("%f", &c);
	
	printf("Quarto N�mero: ");
	scanf("%f", &d);
	
	resultado = (a*b*c*d);
	printf("O resultado do produto dos n�meros %.0f, %.0f, %.0f e %.0f �: %.0f", a, b, c, d, resultado);
	
	return 0;	 	
  }
