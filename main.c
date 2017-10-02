#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int* p;
    p = &n;

    printf("%d\n", p);
    printf("%d\n", p+1);
    printf("%d\n", p+2);
}

/*void modificar(int* dato);

int main()
{
    int numero = 7;
    printf("El valor es: %d\n", numero);

    modificar(&numero);
    printf("El valor modificado es: %d", numero);

    return 0;
}

void modificar(int* dato)
{
    *dato = 23;
}*/
