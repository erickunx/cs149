#include <stdio.h>

int main(void) {
   int userNum,userNumTwo;
   
   printf("Enter integer:\n");
   scanf("%d", &userNum);
   printf("You entered: %d\n",userNum);
   int squared,cubed;
   squared = userNum*userNum;

   printf("%d squared is %d\n",userNum,squared);
   cubed= userNum*userNum*userNum;
   printf("And %d cubed is %d!!\n",userNum,cubed);
   printf("Enter another integer:\n");
   scanf("%d",&userNumTwo);
   int addNum,timesNum;
   addNum = userNum+userNumTwo;
   printf("%d + %d is %d\n", userNum,userNumTwo,addNum);
   timesNum = userNum*userNumTwo;
   printf("%d * %d is %d\n",userNum,userNumTwo,timesNum);

   return 0;
}
