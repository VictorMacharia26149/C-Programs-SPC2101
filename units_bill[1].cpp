
/*
Name:Victor Munene
Reg :CT100/G/26149/25
description ;programme for water bills
*/
#include<stdio.h>

int main() {
int units;
float bills;
   //input for units
  printf("Enter water units consumed:");
  scanf("%d",&units);
  
  //units and bills qualifications
  if(units <=30)
  {
    bills=units*20;
    }
  else if(units>30&&units<=60)
  {
    bills=30*25+((units=30)*25);
    }
    else(units>60);
    {
    bills=30*20+((units=30)*25)+((units-60)*30);
    }
    //display for total bill
    printf("Total water bill:%.2f ksh\n",bills);
    return 0;
}