#include<stdio.h>

int main()
{
    double A,B,C,pi=3.14159,tr,c,t,s,r;
    scanf("%lf%lf%lf",&A,&B,&C);

    tr = (A*C)/2;
    c = pi*pow(C,2);
    t = (A+B)*C/2;
    s = B*B;
    r = A*B;

    printf("TRIANGULO: %.3lf\n",tr);
    printf("CIRCULO: %.3lf\n",c);
    printf("TRAPEZIO: %.3lf\n",t);
    printf("QUADRADO: %.3lf\n",s);
    printf("RETANGULO: %.3lf\n",r);

return 0;
}

