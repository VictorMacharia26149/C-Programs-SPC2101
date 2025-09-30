/*
Name:Victor Munene
Reg No:CT100/G/26149/25
Description:Loan qualification programme
*/

#include <stdio.h>
int main() {
    int age;
    double income;

    // Prompt for age and income
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your annual income: ");
    scanf("%lf", &income);

    // display for Qualifications
    if (age >= 21 && income >= 21000) {
        printf("Congratulations! You qualify for a loan.\n");
    }
    else {
        printf("Unfortunately,we are unable to offer you a loan at this time.\n");
    }
   return 0;
}
