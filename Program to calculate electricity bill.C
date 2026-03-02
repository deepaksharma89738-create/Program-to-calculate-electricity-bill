/*Program to calculate electricity bill*/
#include<stdio.h>
int main()          
{
    float units, bill;
    printf("Enter the number of units consumed: ");
    scanf("%f", &units);
    if (units <= 100) 
    {
        bill = units * 0.5;
    } 
    else if (units <= 200) 
    {
        bill = 100 * 0.5 + (units - 100) * 0.75;
    } 
    else if (units <= 300) 
    {
        bill = 100 * 0.5 + 100 * 0.75 + (units - 200) * 1.20;
    } 
    else 
    {
        bill = 100 * 0.5 + 100 * 0.75 + 100 * 1.20 + (units - 300) * 1.50;
    }
    printf("Electricity bill = %.2f", bill);
    return 0;
}