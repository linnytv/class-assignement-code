#include <stdio.h>
#include <stdlib.h>

int main()
{
   int number;
   printf("Enter you number: \n");
   scanf("%d", &number);
   if(number>=0){
    printf("Your number is positive \n");
   }
   else{
    printf("Your number is negative \n");
   }
    return 0;
}
