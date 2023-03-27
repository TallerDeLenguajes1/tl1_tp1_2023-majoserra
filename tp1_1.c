#include<stdio.h>

int main(){
    int *puntero, num;

    num = 2;
    puntero = &num;

    printf("Contenido del puntero: %i", *puntero);
    printf("Dirección de memoria almacenada por el puntero: %i", puntero);
    printf("Dirección de memoria de la variable: %i", puntero);
    printf("Dirección de memoria del puntero: %i", &puntero);
    
    return 0;
}