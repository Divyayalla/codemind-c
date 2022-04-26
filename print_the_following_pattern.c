 #include<stdio.h>
 int main()
 {
     int N,i,j;
     scanf("%d",&N);
     for(i=1;i<=N;i++)
     {
         for(j=1;j<=N;j++)
         {
             if(j==i||i==(N-j+1))
            printf("x");
            else
            printf("0");
             
         }
         printf("
");
     }
 }