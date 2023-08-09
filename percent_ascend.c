/* 
Name :- Joel Jose
Roll no :- 25
Batch :- B    
*/

#include <stdio.h>
#include <string.h>

struct Student 
{
    int roll_no;
    char name[50];
    float percentage;
};

int main() 
{
    struct Student students[5];

    for (int i = 0; i < 5; i++) 
    {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Percentage: ");
        scanf("%f", &students[i].percentage);
    }
    
    for (int i = 0; i < 4; i++) 
    {
        for (int j = 0; j < 4 - i; j++) 
        {
            if (students[j].roll_no > students[j + 1].roll_no) 
            {
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
    
    printf("\nStudent Records in Ascending Order of Roll Number:\n");
    printf("Roll No\tName\t\tPercentage\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("%d\t%s\t%.2f\n", students[i].roll_no, students[i].name, students[i].percentage);
    }
    
    return 0;
}
