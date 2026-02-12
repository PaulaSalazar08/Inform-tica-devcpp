//¿Cuántas vocales tiene? Guardar aeiou en un vector.


#include<stdio.h>

int main(){
	char letras[4]; //vector para guardar 4 letras
	char vocales[5];
	vocales[0]='A';
	vocales[1]='E';
	vocales[2]='I';
	vocales[3]='O';
	vocales[4]='U';
	int cont;
	int cont2;
	int nvocales=0;
	//Leemos las cuatro letras
	for(cont=3;cont>=0;cont--){ //es equivalente a poner for cont in range(0,4):
	//cont++ es lo mismo que cont=cont+1
		printf("\nletras[%i]= ",cont); //retorno de carro, es decir que pase a la siguiente línea, el %i es un número entero
		scanf(" %c",&letras[cont]); //scanf es el tipo de dato y donde lo gurado, el espacio de antes de %c sirve para seguir el espacio anterior, y %c es porque estamos con letras	
	}
	//Los mostramos por pantalla
	for(cont=0;cont<4;cont++){
		printf(" %c ",letras[cont]);
		//Comparamos la letra con las vocales
		for(cont2=0;cont2<5;cont2++){
			if(letras[cont]==vocales[cont2]){ //Como es una comparación será ==
			nvocales++;
			
			}
			
		}
	}
	printf("\n Tiene %i vocales", nvocales);
	
	
	return(0);
}
