#include<stdio.h>
			      #include<stdlib.h>
				  int main()
				      {
  int p1,p2,tp1=0,tp2=0,*l1,*l2,*ld,diff,max,i,flag=0,temp=0,T;
  
  scanf("%d",&T);
     l1=(int*)calloc(T,sizeof(int));
     l2=(int*)calloc(T,sizeof(int));
     ld=(int*)calloc(T,sizeof(int));
 
  for(i=0;i<T;i++)
     {
		scanf("%d%d",&p1,&p2);
		p1=p1+tp1;
		tp1=p1;
		p2=p2+tp2;
		tp2=p2;
		*(l1+i)=p1;
		*(l2+i)=p2;
		diff=*(l1+i)-*(l2+i);
		*(ld+i)=diff;
		 if(*(ld+i)>0 && *(ld+i)>temp)
		   {
		       temp=*(ld+i);
		       flag=1;
		   }
		 else if(*(ld+i)<0 && *(ld+i)*-1>temp)
		  {
		     temp=*(ld+i)*-1;
		     flag=2;
		  }
 
     }
	  printf("%d %d",flag,temp);
	  
	  return 0;
				      }