#include <stdio.h>
#include <stdlib.h>

int main(){
	int num;
	//aqui queremos que el codigo se ejecute mientras el numero se encuentre entre nos intervalos, haga scanf del numero introducido y imprima el numero escaneado con un printf y que si no es el numero encontrado entre el intervalo que hemos establecido en el while el numero no se tenga en cuenta
	do{
	scanf("%d",&num);
	printf("Has ingresado el número",num);	
	}while(num >=1 || num <=10);
	
//conclusión: lo que no consigo es que me deje de salir el erorr too many arguments si le añado al printf un , num despues de su texto , ya que lo que quiero es que junto al texto aparezca el numero introducido , y si quito ese , num lo que sucede es que se desordena y primero sale el numero escaneado y abajoun has ingreasado el numero
	
	

}
