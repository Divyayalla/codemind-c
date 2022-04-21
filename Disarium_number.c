#include<stdio.h>
#include<math.h>
int main()
{
    int N,i=0,j,u,s=0,t;
    scanf("%d",&N);
    u=t=N;
    while(N!=0)
    {
        j=N%10;
        N/=10;
        i++;
    }
    j=0;
    for(;i>0;i--)
    {
        j=u%10;
        s+=pow(j,i);
        u/=10;
    }
    if(s==t)
    printf("True");
    else
    printf("False");
    return 0;
    
}