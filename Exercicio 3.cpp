#include <stdio.h>

int  main(){
	
	int opcao,numero1,numero2;
	
	printf("1. Multiplicacao\n");
	printf("2. Divisao\n");
	
	printf("Escolha uma opcao: ");
	scanf("%d",&opcao);
	
	while(opcao<1 || opcao>2){
		printf("Digite uma opcao valida");
		
		printf("Escolha uma opcao: ");
		scanf("%d",&opcao);
	}
	
	printf("Digite o numero 1 \n");
	scanf("%d",&numero1);
	
	printf("Digite o numero 2 \n");
	scanf("%d",&numero2);
	
	if(opcao==1){
		printf("Resultado eh: %d",numero1*numero2);
	} else if (opcao==0){
		printf("Nao e possivel fazer divisao por zero");
	}
	
}
