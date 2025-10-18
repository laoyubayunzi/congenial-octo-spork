#include <stdio.h>
#include<stdlib.h>
int main()
{
	int a[100][100]={0};
	int v[100]={0};
	int n=0;
	int m=0;
	int p=0;
	int q=0;
	int t=0;
	int x[100]={0};
	int c=0;
    scanf("%d %d", &n, &m);
	 for (int i = 0; i < m; i++) 
	 {
        scanf("%d %d", &p,&q);
        a[p][q]=1;
        a[q][p]=1;
     }
	 for(int i = 1; i <= n; i++)
   {
     if(v[i]==0) 
     {
     c++;
     t=0; 
     x[t++]=i;
     v[i]=1;
     while (t>0) 
	  {
        int u=x[--t]; 
        for(int j = 1; j <= n; j++) 
	   {
          if (a[u][j]==1&& v[j] == 0) 
	     {
           v[j]=1;
           x[t++]=j;          
	     }
	   }
      }
     }
    }
    printf("%d",c);


    system("pause");
    return 0;
}