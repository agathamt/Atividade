#include<stdio.h>

int somainteiro (int a, int b, int c);

  int main()
{//var

 int x=0, y=0, z=0, r=0;

 scanf("%d\n%d\n%d",&x,&y,&z);

 r = somainteiro(x,y,z);
 
 printf("SOMA = %d\n",r);

 return(0);
}