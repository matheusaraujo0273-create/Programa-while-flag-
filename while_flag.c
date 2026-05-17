#include <stdio.h>
#include <locale.h>
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
 
	int soma = 0;
	int contador = 0;
	int n;


	while(n > -1){
	printf("\n Digite qualquer numero (digite -1 pra terminar): ");
	scanf("%d", &n);
	
	
	if(n == -1){
		break;
	}
	contador++;
	soma= soma + n;

	}	
		
	printf("\n Quantidade de numeros: %d ", contador);
	printf("\n Soma dos valores digitados: %d", soma);
}
