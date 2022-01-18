#include<stdio.h>
int main ()
{   
int hf,sf,s;
scanf("%d %d %d" ,&hf,&sf,&s);
if (hf>50&&sf>60&&s>100)
         printf("%d",10);
else if(hf>50&&sf>60)
      printf("%d",9);
else if(sf>60&&s>100)
     printf("%d",8);
else if(hf>50&&s>100)
    printf("%d",7);
else if(hf>50||sf>60||s>100)
     printf("%d",6);
else
    printf("%d",5);

return 0;
}



