#include <stdio.h>

int main(){
	int quant;
	float total, manoel, amigos;
	printf("Total da conta: ");
	scanf("%f",&total);
	printf("Total de amigos: ");
	scanf("%d",&quant);
	if(total < 300){
		manoel = (float) total*0.8;
		amigos = (float)(total-manoel)/quant;
	}else if(total >= 300 && total <= 600){
		manoel = (float) total/2;
		amigos = (float) (total-manoel)/quant;
	}else if(total > 600){
		manoel = total/(quant+1);
		amigos = total/(quant+1);
	}
	printf("Manoel = %.2f", manoel);
	printf("\nAmigos = %.2f", amigos);
	
	return 0;
}
