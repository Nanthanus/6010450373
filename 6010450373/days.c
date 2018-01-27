#include <stdio.h>
float main()
{
    float gpa1, gpa2, credits, semester;
    printf("Input the previous semester GPA: ");
    scanf("%f", &gpa1);
    printf("Input the previous credits: ");
    scanf("%f", &credits);
    printf("Input the credits this semester: ");
    scanf("%f", &semester);
    gpa2 = ((gpa1*credits)+(semester*gpa2))/(credits+semester);
    printf("Input the required GPA: ");
    scanf("%f", &gpa2);
    gpa2 = ((gpa2*(credits+semester))-(gpa1*credits))/semester;
    printf("The GPA this semester should be %.2f", gpa2);
}