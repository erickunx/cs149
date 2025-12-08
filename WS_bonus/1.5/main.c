#include <stdio.h>

int main(void) {
   int baseInt;
   int headInt;
   
   scanf("%d",&baseInt);
   scanf("%d",&headInt);   
   for(int i = 1; i <= 4 ; i++) {
    if(i<3){
        printf("    ");
    }
    else{
        for(int j = 0; j <=3; j++){
            printf("%d",baseInt);
        }
    }

    for(int k = 0; k <i; k++){
        printf("%d",headInt);
    }
       printf("\n");
   }
   for(int i = 3; i > 0; i --){
    if(i > 2){
        for(int j = 0; j <=3; j++){
            printf("%d",baseInt);
        }
    }else {
    printf("    ");

    }
    for(int k = 0; k <i; k++){
        printf("%d",headInt);
    }
       printf("\n");
   }

   

   return 0;
}

