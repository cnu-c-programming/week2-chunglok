#include <stdio.h>

int main()
{
     int age;
    char grade;
    float gpa;

    scanf("%d %c %f", &age, &grade, &gpa);
    printf("%d %1c %1.2f\n", age ,grade , gpa);

    return 0;
}
