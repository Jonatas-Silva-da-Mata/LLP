# include <stdio.h>
# include <locale.h>
  int main() {
  	setlocale(LC_ALL, "Portuguese_Brazil");
  	
  	float a, b, c, r1, r2;
  	printf("Digite dois n�meros para soma-los\n\n\n");
  	
  	printf("Digite o primeiro n�mero: ");
  	scanf("%f", &a);
  	
  	printf("Digite o segundo n�mero: ");
  	scanf("%f", &b);
  	
  	r1 = a + b;
  	
  	printf("A soma desses dois n�meros � %.1f\n\n", r1);
  	
  	printf("Digite um terceiro n�mero que voc� deseja subtrair com o resultado: ");
  	scanf("%f", &c);
  	
  	r2 = r1 - c;
  	
  	printf("O resultado da subtra��o desse novo n�mero com o resultado � %.1f", r2);
  	
  	
  	return 0;
  }
