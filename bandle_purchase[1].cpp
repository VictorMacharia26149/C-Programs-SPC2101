
/*
Name:Victor Munene
Reg :CT100/G/26149/25
Description:mobile data purchase programme
*/
#include <stdio.h>
int main() {
    int choice;
    printf("**Choose your bundle cost(Kes)**\n");
    printf("1.100MB @kes50\n.");
    printf("2.500MB @kes200\n.");
    printf("3.1GB @kes350\n.");
    printf("4.2GB @kes600\n.");
    
    printf("Enter choice (1-4):");
    scanf("%d",& choice);
    
    if(choice==1) {
     printf("100MB kes 50");
    }
    else if(choice==2) {
     printf("500MB KES 200");
    }
    else if(choice==3) {
     printf("1GB KES 350");
    }
    else if(choice==4) {
     printf("2GB KES 600");
    }
    else{
     printf("invalid choice");
    }
    return 0;
}