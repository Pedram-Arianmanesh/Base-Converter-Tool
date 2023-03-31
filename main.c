#include <stdio.h>
#include <stdbool.h>

int main()
{
   int a,b;
   printf("Please enter your decimal base number:");
   scanf("%d",&a);
   printf("Now enter your wanted base from 2 to 9:");
   scanf("%d",&b);
   int i=0;
   int x=a;
   while (x>0){
    x=x/b;
    i++;
   }
  int Nmab[i];
   x=0;
   while(a>0){
   Nmab[x]=a%b;
   a=a/b;
   x++;
   }
    x=x-1;

    while(i>0){
   printf("%d",Nmab[x]);
   i=i-1;
   x=x-1;
}


    return 0;
}
