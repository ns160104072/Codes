#include<stdio.h>
int main()
{
    int emp_no,work_hour;
    double amount_per_hour,SALARY;

    scanf("%d %d %lf",&emp_no,&work_hour,&amount_per_hour);
    SALARY=work_hour*amount_per_hour;
    printf("NUMBER = %d\n",emp_no);
    printf("SALARY = U$ %.2lf\n",SALARY);
    return 0;
}
/*
Input Samples	Output Samples
25              NUMBER = 25
                SALARY = U$ 550.00
100
5.50


*/
