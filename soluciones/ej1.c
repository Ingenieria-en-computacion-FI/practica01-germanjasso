#include <stdio.h>

int main(){
    int a[6];

    for(int i=0; i<6; i++){
        printf("La direccion de a[%i] es: %p\n",i,&a[i]);
    }
    return 0;
}
//2.-Calcula diferencia entre direcciones consecutivas: a[1]-a[0]= 4
//3.- Escribe fórmula general para dirección de a[i]: Direccion= Base +(i x tamaño del tipo de dato)
