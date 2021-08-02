#include<stdio.h>
int main()
{
   int pr1_code,pr1_unit,pr2_code,pr2_unit;
   double unit_price1,unit_price2,total_value;
   scanf("%d %d %lf",&pr1_code,&pr1_unit,&unit_price1);
   scanf("%d %d %lf",&pr2_code,&pr2_unit,&unit_price2);
   total_value= pr1_unit*unit_price1+pr2_unit*unit_price2;
   printf("VALOR A PAGAR: R$ %.2lf\n",total_value);
   return 0;
}
/*
Input Samples	Output Samples
12 1 5.30
16 2 5.10

VALOR A PAGAR: R$ 15.50



*/
