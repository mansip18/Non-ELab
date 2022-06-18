#include <stdio.h>
int calculate(int basic)
{
     double hra= (10.0/100)*basic;
    double da= (25.0/100)*basic;
    double gross = basic+hra+da;
    double net = gross;
    printf("Salary = Rs %.2lf",net);
    return net;
}
int main()
{
    int basic;
    printf("Enter basic pay : ");
    scanf("%d",&basic);
    calculate(basic);
    return 0;
}