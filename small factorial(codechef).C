#include<stdio.h>
int main()
  {
   int m,a[500],j,i=1,k,x,temp=0,num=120;
    a[0]=1;
    m=1;
    i=1;
    scanf("%d",&num);
    while(i<=num)
     {
	    for(j=1;j<=m;j++)
	     {
	      x=(i*a[j-1])+temp;
	      a[j-1]=x%10;
	      temp=x/10;
	     }
	    while(temp!=0)
	     {
	      m++;
	      a[j-1]=temp%10;
	      temp=temp/10;
	      j++;
	    }
       i++;
     }
	 for(k=m;k>=1;k--)
	   {
	    printf("%d",a[k-1]);
	   }
    printf("\n");
   return 0;
 }
