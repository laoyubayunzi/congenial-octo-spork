#include <stdio.h>
#include <stdlib.h>
int main() {
	int i=1;
	int j=1;

   
	while(i <= 9) 
	{
		j=1;
		
	    while(j <= 9) 
	      {
			  if(j>i) {break;}
	       printf("%d×%d=%2d ",j,i,i*j);
             j++;
          }
     i++;
	 printf("\n");
    }



	system("pause");
    return 0;
}