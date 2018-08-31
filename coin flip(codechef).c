#include<stdio.h>
int main()
  {
    long int T,G,arr[3],i,j,k;
    scanf("%ld",&T);
      for(i=0;i<T;i++)
        {
          scanf("%ld",&G);
          for(k=0;k<G;k++)
            {
                for(j=0;j<3;j++)
                  {
                     scanf("%ld",&arr[j]);
                   }
                 if(arr[0]==arr[2] && arr[1]%2==0)
                    {
                       printf("%ld\n",arr[1]/2); 
                    }
                else if(arr[0]==arr[2] && arr[1]%2 !=0)
                    {
                      printf("%ld\n",arr[1]/2);
                    }
                else if(arr[0] != arr[2] && arr[1]%2 ==0)
                    {
                      printf("%ld\n",(arr[1]/2));
                    }
                else if(arr[0] != arr[2] && arr[1]%2 !=0)
                    {
                      printf("%ld\n",(arr[1]/2)+1);
                    }
           } 
           printf("\n");
       }
       return 0;
     }               
 