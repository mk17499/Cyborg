#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *list1,*list2,*list3,*flist,T,N1,N2,N3,i,j=0,k=0,count=0,temp,z,l;
    scanf("%d%d%d",&N1,&N2,&N3);
    list1=(int*)calloc(N1,sizeof(int));
    list2=(int*)calloc(N2,sizeof(int));
    list3=(int*)calloc(N3,sizeof(int));
    flist=(int*)malloc(sizeof(int));

    for(i=0;i<N1;i++)
    {
        scanf("%d",list1+i);
    }
    for(i=0;i<N2;i++)
    {
        scanf("%d",list2+i);
    }
    for(i=0;i<N3;i++)
    {
        scanf("%d",list3+i);
    }

for(i=0;i<N1;i++)
    {
      for(j=0;j<N2;j++)
        {
            if(*(list1+i)==*(list2+j) && *(list1+i)>0 &&*(list2+j)>0)
                 {
                  count++;
                  *(flist+k)=*(list1+i);
                  *(list1+i)=0;
                  *(list2+j)=0;
                  k++;
                 }
        }
    }
    j=0;
for(i=0;i<N2;i++)
    {
      for(j=0;j<N3;j++)
        {
            if(*(list2+i)==*(list3+j) && *(list2+i)>0 &&*(list3+j)>0)
                 {
                  count++;
                   *(flist+k)=*(list2+i);
                   *(list2+i)=0;
                   *(list3+j)=0;
                  k++;
                 }
        }
    }

    j=0;
    for(i=0;i<N1;i++)
    {
      for(j=0;j<N3;j++)
        {
            if(*(list1+i)==*(list3+j)&& *(list1+i)>0 && *(list3+j)>0)
                 {
                  count++;
                   *(flist+k)=*(list1+i);
                   *(list1+i)=0;
                   *(list3+j)=0;
                  k++;
                 }
        }
    }
    for(j=0;j<count;j++)
     {
	for(z=j+1;z<count;z++)
	   {
	    if(*(flist+j)>*(flist+z))
	     {
	       temp=*(flist+j);
	       *(flist+j)=*(flist+z);
	       *(flist+z)=temp;
	     }
	    }
     }
    printf("%d\n",count);
     for(l=0;l<count;l++)
       {
	       printf("%d\n",*(flist+l));
       }
  return 0;
}
