#include<stdio.h>
int main()
{
   double salary,sales,total;
   char str[10];
   scanf("%c",&str);
   scanf("%lf %lf",&salary,&sales);
   total=salary+(sales*0.15);
   printf("TOTAL = R$ %.2lf\n",total);
   return 0;
}
/*
Input Samples	Output Samples
JOAO
500.00
1230.30

                TOTAL = R$ 684.54
*/
