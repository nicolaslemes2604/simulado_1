#include <stdio.h>


int main(){
	float peso, altura, IMC;
	printf("Informe o peso: ");
	scanf("%f", &peso);
	printf("Informe a altura: ");
	scanf("%f", &altura);
	
	IMC = peso/(altura*altura);
	
	if(IMC < 18.5){
			printf("Seu IMC EH %.2f", IMC);
		printf("\nClassificação: Abaixo do peso");
	}else if(IMC >=18.5 && IMC <= 24.9){
		printf("Seu IMC eh %.2f", IMC);
	printf("\nClassificação: Peso ideal");
	}else if(IMC >= 25 && IMC <=30){
			printf("Seu IMC EH %.2f", IMC);
		printf("\nClassificação: Acima do peso");
	}else if(IMC > 30){
			printf("Seu IMC eh %.2f", IMC);
		printf("\nClassificação: Obesidade");
	}
	

	
	return 0;
}
