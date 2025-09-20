//Simple C programme
/*
Name:Victor Munene
Reg no:CT100/G/26149/25
Description:User Information
*/

#include <stdio.h>

//main function
int main(int argc, char**argv)
{
 int Contact;
    printf("Enter your Contact:");
    scanf("%d", & Contact);
 int Age;
    printf("Enter your Age(in years):");
    scanf("%d", &Age);
 int Weight;
    printf("Enter your Weight(in kg):");
    scanf("%d", &Weight);
    
        //display for entered informatin
   printf("These is your recorded information; \n");
   printf("Your Contact is: %d \n",Contact);
   printf("Your Age is :%d years\n",Age);
   printf("Your Weight is:%d kg",Weight);
   return 0;
}
