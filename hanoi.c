#include <stdio.h> 
  
void towerOfHanoi(int numero_de_elementos, char torre_de_origem, char torre_de_destino, char torre_auxiliar) 
{ 
    if (numero_de_elementos == 1) 
    { 
        printf("\n Mova a peça 1 da torre: %c para a torre %c", torre_de_origem, torre_de_destino); 
        return; 
    } 
    towerOfHanoi(numero_de_elementos-1, torre_de_origem, torre_auxiliar, torre_de_destino); 
    printf("\n Mova a peça %d da torre %c para a torre %c", numero_de_elementos, torre_de_origem, torre_de_destino); 
    towerOfHanoi(numero_de_elementos-1, torre_auxiliar, torre_de_destino, torre_de_origem); 
} 
  
int main() 
{ 
    int numero_de_elementos;
    scanf("%d", &numero_de_elementos); 
    towerOfHanoi(numero_de_elementos, 'A', 'C', 'B'); 
    return 0; 
} 

