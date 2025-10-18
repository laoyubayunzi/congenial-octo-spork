#include <stdio.h>
#include<stdlib.h>
int main()
{
	double n=0;
	double r=0;
	scanf("%lf",&n);//分类讨论
	if(n<=150&&n>0)
	{
	r=n*0.44630;
	printf("%.11lf",r);
	}
	else if(n>150&&n<=400)
	{
	r=150*0.44630+(n-150)*0.46630;
	printf("%.11lf",r);
	}
	else if(n>400)
	{
	r=150*0.44630+250*0.46630+(n-400)*0.56630;
	printf("%.11lf",r);
	}

    system("pause");
    return 0;
}