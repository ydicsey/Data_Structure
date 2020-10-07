#include <stdio.h>

typedef struct{
	float c[100];
	int exp[100];
}poly;

int coeff(poly a, int p)
{
	for(int i = 0; i < 100; i++)
		if(a.exp[i] == p)
		{
			return a.c[i];
			break;
		}
		

	/*if(a.exp[i] == p)
		return a.c[i];
	else
	{
		return coeff(poly a, int p, int i++);
	}*/
}

int main(void)
{
	poly a;
	a.c[0] = 1;
	a.c[2] = 222;
	a.exp[2] = 2;
	int p = 2;
	 
	printf("%d",coeff(a,p));
}