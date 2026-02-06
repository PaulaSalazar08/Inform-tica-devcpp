//para que sirven los parentesis del main()

#include<stdio.h>

int main(){
    char salir;//definimos la variable salir (tipo char)
    int num=2;//definimos la variable num (tipo int)
    float pi=3.1416;//definimos la variable pi (tipo float)
    printf("  Me has regalado %i el numero: ",num);//Instruccion de salida
    //%i es un descriptor. Indica el tipo de variable que voy a sacar por
    // pantalla y su posicion
    scanf("%c",&salir);//Instruccion de entrada. Necesita el descriptor %c
    // porque le decimos que el usuario va a introducir una letra y se lo
    //va a asignar a la variable salir
    return(0);
}
