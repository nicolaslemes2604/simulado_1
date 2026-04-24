#include <stdio.h>

int main(){
	float valor, ma, me, dif;
	printf("Informe um valor: ");
	scanf("%f", &valor);
	ma = -100;
	me = 10000;
	
	while(valor != 0){
		if(valor > ma){
			ma = valor;
		}
		if(valor < me){
			me = valor;
		}
		printf("Informe outro valor: ");
		scanf("%f", &valor);
	}
	
	dif = ma - me;
	
	printf("Maior preco %.2f: ", ma);
	printf("\nMenor preco %.2f: ", me);
	printf("\nDiferenca %.2f: ", dif);
	
	
	return 0;
}
