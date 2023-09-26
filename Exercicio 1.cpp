#include <stdio.h>

int main(){
	
	int num,i;
	
	printf("Digite um n°: ");
	scanf("%d",&num);
	
	if(num % 2 ==0){
	printf("Os valores par de 0 a %d eh: \n",num);
	for(i=0;i<=num;i++){
		if(i % 2==0){
			printf("%d,",i);
		} 	
	}
	
	} else if(num % 2 ==1){
	printf("Os valores impar de 0 a %d eh: \n",num);
	for(i=0;i<=num;i++){
		if(i % 2==1){
			printf("%d",i);
		} 	
	}
	
	} else{
		printf("Resposta invalida!");
	}
	
}
