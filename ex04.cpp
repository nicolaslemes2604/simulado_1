#include <stdio.h>

int main(){
	int total, i, idade, idadeM, idadeF, min, seg, piorTempo, piorSeg, melhorSeg, melhorTempo;
	char genero;
	
	printf("Informe o total de competidores: ");
	scanf("%d",&total);
	
	piorTempo = -1;
	piorSeg = -1;
	
	melhorTempo = 61;
	melhorSeg = 61;
	
	for(i=total; i>0; i--){
		
		printf("Informe a idade do competidor: ");
		scanf("%d",&idade);
		
		printf("Informe o genero do competidor: ");
		scanf(" %c",&genero);
		
		printf("Informe o tempo em minutos: ");
		scanf("%d",&min);
		
		printf("Informe o tempo em segundos: ");
		scanf("%d",&seg);
		
		
		if(genero == 'm' && min >= piorTempo){
			if(min == piorTempo && seg > piorSeg){
				piorTempo = min;
				piorSeg = seg;
				idadeM = idade;
			}else{
				piorTempo = min;
				piorSeg = seg;
				idadeM = idade;
			}
		}
		if(genero == 'f' && min <= melhorTempo){
			if(min == melhorTempo && seg < melhorSeg){
				melhorTempo = min;
				melhorSeg = seg;
				idadeF = idade;
			}else{
				melhorTempo = min;
				melhorSeg = seg;
				idadeF = idade;
			}
		}
	}
	printf("Masculino\nPior tempo %d:%d - Idade: %d anos\n", piorTempo, piorSeg, idadeM);
	printf("Feminino\nMelhor tempo %d:%d - Idade: %d anos", melhorTempo, melhorSeg, idadeF);
	
	return 0;
}
