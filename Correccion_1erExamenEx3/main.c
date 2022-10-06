#include <stdio.h>
#include <stdlib.h>
void EvaluaABC(int A,int B,int C,int *a,int *b,int *c);
int main()
{
   int A,B,C,a,b,c;

   printf("Ingrese el 1er numero: ");
   scanf("%d",&A);
   printf("Ingrese el 2do numero: ");
   scanf("%d",&B);
   printf("Ingrese el 3er numero: ");
   scanf("%d",&C);
    EvaluaABC(A, B, C,&a,&b,&c);
    printf("El valor actual del 1er numero es:%d\n",a);
    printf("El valor actual del 2do numero es:%d\n",b);
    printf("El valor actual del 3er numero es:%d\n",c);

}

void EvaluaABC(int A,int B,int C,int *a,int *b,int *c)
{
    if(A>B)
    {
        *b=B*2;
    }else{*b=B;}
    if(A<B)
    {
        *a=C-A;
    }else{*a=A;}
    if(C<0)
    {
        *c=C*-1;
    }else{*c=C;}
}
