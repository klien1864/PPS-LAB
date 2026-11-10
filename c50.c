#include<stdio.h>
int main()
{
    int icecream[5],sum=0;
    printf("Enter 5 values");
    for(int i=0;i<5;i++)
        scanf("%d",&icecream[i]);
      for(int i=0;i<5;i++)
        sum=sum+icecream[i];
      printf("sum=%d",sum);
      return 0;
}
