#include <stdio.h>

int main()
{
    int score; // Decler Score Variable
    char grade;

    printf("Enter Your Score :- ");
    scanf("%d", &score); // Geting Uesr Value

    // write a logic for Enter more than 100 score

    if (score < 0 || score > 100)
    {
        printf("Please Enter Valide Score");
    }

    //write a logic for chaking gread useing ternary
    grade =  (score >= 90) ? 'A' :
             (score >= 80) ? 'B' :
             (score >= 70) ? 'C' :
             (score >= 50) ? 'D' : 'F';
             

    //Print output 
    printf("Your Gread is : %c", grade);  
   
    return 0;
}