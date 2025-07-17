#include<stdio.h>
#include<math.h>
int main(){
    float amount;
    printf("enter the amount of loan you are seeking:- ");
    scanf("%f",&amount);

    int month ;
    printf("enter the month: ");
    scanf("%d",&month);

    float interest_rate;
    printf("enter rate of interest(yearly) ");
    scanf("%f",&interest_rate);

    int p = amount;
    int n = month;
    double r = interest_rate/1200;

    // printf("%d %d %lg",p,n,r);

    float w = pow((1+r),n);
    
    float emi = (p*r*w)/(w-1);

    printf("your monthly emi = %.2f",emi);
}
