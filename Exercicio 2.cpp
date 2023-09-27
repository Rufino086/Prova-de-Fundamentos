#include <stdio.h>

int main(){
	
	int opc;
	do{
	printf("____________________________________\n");
	printf("|         Google agencias          |\n");
	printf("____________________________________\n");
	printf("|                                  |\n");
	printf("|  1- Cadastrar      2- Buscar     |\n");
	printf("|  3- Atualizar      4- Excluir    |\n");
	printf("|            5- Sair               |\n");
	printf("|                                  |\n");
	printf("____________________________________\n");
	scanf("%d",&opc);
	
	} while(opc<=0||opc>5);
	switch(opc){
	
	case 1:
	printf("Voce escolheu a opcao Cadastrar \n");
	break;
	
	case 2:
	printf("Voce escolheu a opcao Buscar \n");
	break;
	
	case 3:
	printf("Voce escolheu a opcao Atualizar\n");
	break;
	
	case 4:
	printf("Voce escolheu a opcao Excluir \n");
	break;
	
	case 5:
	printf("Voce escolheu a opcao Sair \n");
	return 0;
	break;	
		
	}
	
}
