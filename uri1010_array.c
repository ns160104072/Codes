#include<stdio.h>
int main()
{
   int pr_code[2],pr_unit[2],i;
   double unit_price[2],total_value=0;
   for(i=0;i<2;i++){
     scanf("%d %d %lf,&pr_code[i],&pr_unit[i],&unit_price[i]");
   }
   total_value=((pr_unit[0]*unit_price[0])+(pr_unit[1]*unit_price[1]));
   printf("VALOR A PAGAR: R$ %.2lf\n",total_value);
   return 0;
}
