#include <stdio.h>
#include<stdlib.h>
int main()
{
	int n=0;
	int a[100]={0};//初始化0
	scanf("%d",&n);
	for(int i=0;i<n;i++)//反转除了第i个硬币
	{
	   for(int j=0;j<n;j++)
	   {
		   if(i!=j){a[j]=(a[j]==0)?1:0;}
	   
	   }
	   for(int i=0;i<n;i++)
	   {
	     printf("%d",a[i]);
	   }
	 printf("\n");//换行
	}




    system("pause");
    return 0;
}