#include <stdio.h>

int main(void) {
   int currentPrice;
   int lastMonthsPrice;
   double mortgage;
   int diff;

   
   scanf("%d", &currentPrice);
   scanf("%d", &lastMonthsPrice);
   diff = currentPrice-lastMonthsPrice;
   /* Type your code here. */
   mortgage = (currentPrice*0.051)/12;
   printf("This house is $%d. The change is $%d since last month.\n",currentPrice,diff);
   printf("The estimated monthly mortgage is $%lf.\n",mortgage);
   return 0;
}

