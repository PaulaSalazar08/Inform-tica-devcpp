#include<stdio.h>

int main(){
	int cont;
	char letras[4]; //vector para guardar 4 letras
//	letras[0]='H';
//	letras[1]='O';
//	letras[2]='L';
//	letras[3]='A';
	//Leemos las cuatro letras
	for(cont=0;cont<4;cont++){ //es equivalente a poner for cont in range(0,4):
	//cont++ es lo mismo que cont=cont+1
		printf("\nletras[%i]= ",cont); //retorno de carro, es decir que pase a la siguiente línea, el %i es un número entero
		scanf(" %c",&letras[cont]); //scanf es el tipo de dato y donde lo gurado, el espacio de antes de %c sirve para seguir el espacio anterior, y %c es porque estamos con letras	
	}
	//Los mostramos por pantalla
	for(cont=0;cont<4;cont++){
		printf(" %c ",letras[cont]);
	}
	
	
	
	return(0);
}
