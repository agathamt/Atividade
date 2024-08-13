#include <stdio.h>
 
int main() { 
    
 double volume = 0;
 double R = 0.0;
 double PI = 3.14159;
  
  scanf("%lf\n",&R);
  volume = (4.0/3)*PI*R*R*R;
  
  printf("VOLUME = %.3lf\n",volume);
    
 
    return 0;
}