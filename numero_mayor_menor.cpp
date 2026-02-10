/*Escribe un programa que lea tres números enteros y devuelva el mayor y el menor */

#include<stdio.h>

int main(){
int n1;
int n2;
int n3;
int mayor;
//Pido al usuario que introduzca esos 3 números
printf("\nIntroduce el primer numero: ");//\n es un símbolo que significa retorno de carro
scanf(" %i",&n1);
printf("\nIntroduce el segundo numero: ");
scanf(" %i",&n2);
printf("\nIntroduce el tercer numero: ");
scanf(" %i",&n3);
mayor=n1;
//printf("\nHas introducido los numeros %i, %i y %i",n1,n2,n3);
if(n1>n2){
    mayor=n1;    
}
else{
    mayor=n2;
}
if(n3>mayor){
    mayor=n3;
}
printf("El mayor es el %i",mayor);
return 0;

}

