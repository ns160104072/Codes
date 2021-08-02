#include<stdio.h>
int main()
{
    double A,B,C,cir_area,sqr_area,trap_area,rec_area,tri_area;
    scanf("%lf %lf %lf",&A,&B,&C);
    tri_area=((A + B) / 2)*C;
    cir_area=3.14159*C*C;
    trap_area=1/2.0(A+B)*C;
    sqr_area=B*B;
    rec_area=A*B;
    printf("TRIANGULO: %.3lf\n",tri_area);
    printf("CIRCULO: %.3lf\n",cir_area);
    printf("TRAPEZIO: %.3lf\n",trap_area);
    printf("QUADRADO: %.3lf\n",sqr_area);
    printf("RETANGULO: %.3lf\n",rec_area);
    return 0;

}

