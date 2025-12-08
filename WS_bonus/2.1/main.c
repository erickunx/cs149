#include <stdio.h>

int main(void) {

   int userNum,divNum,firstNum,secondNum,thirdNum;
   scanf("%d %d", &userNum,&divNum);
    firstNum = userNum/divNum;
    secondNum = firstNum/divNum;
    thirdNum = secondNum/divNum;
    printf("%d %d %d",firstNum,secondNum,thirdNum);
   printf("\n");

   return 0;
}

