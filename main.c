#include <stdio.h>
#include "punteros.h"

int main()
{
    int *p1,n1,*p2,n2;
   printf("ingrese numero de a:");
    scanf("%d",&n1);
    printf("ingrese numero de b:");
    scanf("%d",&n2);
    p2=&n2;
    p1=&n1;
    printf("Los valores iniciales cargados son a=%d y b=%d\n",*p1,*p2);
    cambiar(*p1,*p2);
   return 0;
}
