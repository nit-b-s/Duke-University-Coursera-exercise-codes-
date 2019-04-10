#include<stdio.h>
#include<stdlib.h>

struct _retire_info{
  int months;
  double contribution;
  double rate_of_return;
};
typedef struct _retire_info retire_info;


void retirement(int startAge, double initial, retire_info working, retire_info retired){

  int i;
  for(i = 0; i < working.months; i++){
    printf("Age %3d month %2d you have $%.2lf\n", startAge / 12 , startAge % 12, initial);
    initial += (initial * working.rate_of_return) + working.contribution;
    startAge++;
  }

  for(i = 0; i < retired.months; i++){
    printf("Age %3d month %2d you have $%.2lf\n", startAge / 12 , startAge % 12, initial);
    initial += (initial * retired.rate_of_return) + retired.contribution;
    startAge++;
  }
}

int main(void){

  /*
    Working:
     --------
      Months: 489
      Per Month Savings: $1000
      Rate of Return:  4.5% per year ( 0.045/12 per month) 
                       [above inflation]
    Retired:
    --------
      Months: 384
      Per Month Spending: -4000
      Rate of Return: 1% per year ( 0.01/12 per month) 
                      [above inflation]
    Starting conditions:
    -------------------
       Age: 327 months (27 years, 3 months)
       Savings: $21,345
  */

  retire_info working;
  working.months = 489;
  working.contribution = 1000;
  working.rate_of_return = 0.045/12;

  retire_info retired;
  retired.months = 384;
  retired.contribution = -4000;
  retired.rate_of_return = 0.01/12;

  int age = 327;
  double initial = 21345;
  retirement (age, initial, working, retired);

  return 0;
}
