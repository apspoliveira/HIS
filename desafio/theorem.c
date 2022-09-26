#include "theorem.h"

INT32 pitagoras ( UINT16 cateto_1, UINT16 cateto_2) {
    INT32 hipotenusa_quadrado = cateto_1*cateto_1 + cateto_2*cateto_2;

    if (cateto_1 >= 255 || cateto_2 >= 255)
        return -1;
    else if (hipotenusa_quadrado == 0)
        return -1;
    
    int contador = 1, raiz_quadrada=1;
    // Calcular raiz quadrada
    while (raiz_quadrada <= hipotenusa_quadrado)
    {
        contador++;
        raiz_quadrada = contador*contador;
    }

    if (raiz_quadrada == 1)
        return -1;

    return hipotenusa_quadrado;
}