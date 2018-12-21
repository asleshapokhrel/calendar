#include <stdio.h>
#include <stdlib.h>

int main(){
  int year;
  printf("Enter the year:");
  scanf("%d", &year);
  char *months[] = {"January", "Febraury", "March", "April", "May", "June",
  "July", "August", "September", "October", "November", "December"};

  for(int month=0; month < 12; month++){
    printf("\n\n--------------%s-----------", months[month]);
    printf("\n  Sun  Mon  Tue  Wed  Thu  Fri  Sat ");
  }

  return 0;
}
