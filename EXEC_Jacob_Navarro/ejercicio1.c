#include <stdio.h>
#include <stdlib.h>
int main(){
	int num;
	scanf("%d",&num);

	if(num == 0){
		printf("El número ingresado es cero");
	}
	else if (num > 0){
		printf("El número %d es positivo");
	}
	else if ( num < 0){
		printf("El número %d es negativo");
	}
	return 0;
	
}

