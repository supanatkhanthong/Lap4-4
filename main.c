#include <stdio.h>

int main(void) {
  int p;
  float L1,L2,area,sumL,height;
  printf("Enter L1 ");
  scanf("%f",&L1);
   printf("Enter L2 ");
  scanf("%f",&L2);
   printf("enter height ");
  scanf("%f",&height);
p = (L1/L2)*100;
sumL = L1+L2;
if(p>-40){
 area = 0.5*height*sumL;
 printf("Area is : %0.3f",area);
}
  return 0;
}