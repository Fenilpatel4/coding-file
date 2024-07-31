#include<stdio.h>
#include<conio.h>

int main()
{
    int marks = 90; 
    
    printf("90-100 = A+\n");
    printf("80-89  = B+\n");
    printf("70-79  = C+\n");   
    printf("60-69  = D+\n");
    printf("less than 60 = F\n");

    printf("Marks entered: %d\n", marks);

     if (marks >= 90 && marks <= 100)
	{
        printf("Grade A+");
    } else if (marks >= 80 && marks <= 89)
	{
        printf("Grade B+");
    } else if (marks >= 70 && marks <= 79) 
	{
        printf("Grade C+");
    } else if (marks >= 60 && marks <= 69)
	{
        printf("Grade D+");
    } else if (marks < 60 && marks >= 0)
	{
        printf("Grade F");
    }
    
}