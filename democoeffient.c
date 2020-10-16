#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct polynomial
{
    int coe[100];
    int exp[100];
}polynomial_type;
int coeff(polynomial_type a, int p)
{
    for(int i=0;i<100;i+=1)
    {
        if(a.exp[i]==p)
        {
            return a.coe[i];
        }
    }
    printf("This power is not in this polynomial.\n");
}
int main()
{
    polynomial_type poly;
    int temp=0;
    for(int i=0;i<100;i+=1)
    {
        poly.exp[i] = i;
        temp = i;
        poly.coe[i] = pow(temp,2)-1;
    }
    int power=0;
    printf("\nPlease input the power you want to find...>\n");
    scanf("%d", &power);
    printf("power:%d\n", power);
    int ans = coeff(poly, power);
    printf("%d",ans);
    return 0;
}