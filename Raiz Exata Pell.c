#include <stdio.h>
#include <stdlib.h>
/*
Bruno M. Silva
14-02-2024
Calcula a raiz quadrada exata Utilizando o metodo Pell
*/

int main()
{
   int n = 0;
   int i = 1;
   int m = 0;
   int z = 0;
   printf("Entre com o valor a ser calculado: ");
   scanf("%d", &m);
   z=m;
   while (m >= i)
    {
      m -= i;
      i = i + 2;
      n = n + 1;
   }
    printf("Resultado da raiz de %d = %d \n",z, n);
    printf("Resto = %d \n",m);
    return 0;
}
