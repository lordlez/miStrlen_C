/** Programa que devuelve la cantidad de letras de
una cadena usando aritmetica de punteros en C */

#include <stdio.h>

int miStrlen(char* cad);

int main()
{
    char cad[] = {"lenguaje"};
    int cantidad;
    cantidad = miStrlen(cad);
    printf("La cantidad de caracteres de la cadena es: %d", cantidad);
    return 0;
}

int miStrlen(char* cad)
{
    char* i = cad;
    while(*i != '\0')
    {
        i++;
    }
    return i - cad;
}
