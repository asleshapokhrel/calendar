#include <stdio.h>
#include <stdlib.h>

int get_first_day(int year){
  int day;
  day = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) +
  ((year) / 400) + 1) % 7;
  return day;
}

int main(){
  int year, weekDay, startingDay;
  printf("Enter the year:");
  scanf("%d", &year);
  char *months[] = {"January", "Febraury", "March", "April", "May", "June",
  "July", "August", "September", "October", "November", "December"};
  int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  if((year % 4 == 0 && year % 100 == 0 && year % 400 == 0) || (year % 4 == 0 &&
    year % 100 != 0) ){
    days[1] = 29;
  }

  startingDay = get_first_day(year);
  for(int month=0; month < 12; month++){
    int days_in_month = days[month];
    printf("\n--------------%s-----------", months[month]);
    printf("\n  Sun  Mon  Tue  Wed  Thu  Fri  Sat ");
    printf("\n");

    for (weekDay = 0; weekDay < startingDay; weekDay++) {
      printf("     ");
    }

    for(int day = 1; day <= days_in_month; day++){
      printf("%5d", day);

      if(++weekDay > 6){
        printf("\n");
        weekDay = 0;
      }
      startingDay = weekDay;
    }
    printf("\n");

  }

  return 0;
}
