#include <stdio.h>
#include <stdlib.h>


int main () {
  int number;
  printf("Enter you number: \n");
  scanf("d", &number);
  if ( number> 0) {
    printf("positive number \n");
   }
   else if (number < 0) {
    printf("negative number \n");
  }
  return 0;
}

