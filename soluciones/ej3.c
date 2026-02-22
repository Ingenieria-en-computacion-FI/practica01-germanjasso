
#include <stdio.h>
int main(){

    int a[3];
    int b[3];
    int c[3];
    
    for(int i = 0; i<3;i++){
        printf("La direccion de a[%i] es: %p\n",i,&a[i]);
    }
    printf("\n");
    
    for(int i = 0; i<3;i++){
        printf("La direccion de b[%i] es: %p\n",i,&b[i]);
    }
    printf("\n");
    
    for(int i = 0; i<3;i++){
        printf("La direccion de c[%i] es: %p\n",i,&c[i]);
    }
    return 0;
}
/*
2.-¿Están juntos en memoria?
Si pero en orden diferente, porque a la hora de almacenarlos, como es memoria stack, se almacenan uno seguido del otro
3.-¿De qué depende?
De como la pila almacena las variables (de mayor a menor)*/
