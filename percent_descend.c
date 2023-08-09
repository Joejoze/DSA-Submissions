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
    struct Student temp;

    for (int i = 0; i < 5; i++) 
    {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Percentage: ");
        scanf("%f", &students[i].percentage);
    }

    for (int i = 0; i < 4; i++) 
    {
        for (int j = i + 1; j < 5; j++) 
        {
            if (students[i].roll_no < students[j].roll_no) 
            {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    printf("\nStudent Records in descending order of roll number:\n");
    printf("Roll No\tName\tPercentage\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\t%s\t\t%.2f\n", students[i].roll_no, students[i].name, students[i].percentage);
    }

    return 0;
}
