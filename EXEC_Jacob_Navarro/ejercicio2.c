#include <stdio.h>
#include <stdlib.h>
int main(){
	int dias;
		scanf("%d",&dias);

	switch (dias){
		
		case 1:
			printf("Lunes");
		
				break;
		
		case 2:
			printf("Martes");
		
				break;
		case 3:
			printf("Miercoles");
				
				break;
		case 4: 
			printf("Jueves");

				break;
		case 5:
			printf("Viernes");

				break;
		case 6: 
			printf("Sábado");

				break;

		case 7: 
			printf("Domingo")
				
				break;
		default:
			printf("Número no válido")
			break;
	}
