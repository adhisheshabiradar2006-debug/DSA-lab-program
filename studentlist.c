//c program to read list of student and display only first n students
#include<stdio.h>
int main()
{
    int n,i;
    char name[50][50];
    printf("enter the number of students=");
    scanf("%d",&n);
    printf("enter the students name:");
    for(i=0;i<n;i++)
    {
        scanf("%s",name[i]);
    }
    printf("first %d students are:");
    for(i=0;i<n;i++)
    {
        printf("%s",name[i]);
    }
    return 0;
}

