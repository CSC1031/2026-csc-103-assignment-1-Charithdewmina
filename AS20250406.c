#include <stdio.h>
//*as20250406*/
int main() {
    float maths_marks, science_marks, english_marks;
    float total_marks, average;
    char grade;
    int isPass = 1;


    printf("Enter marks for Mathematics (out of 100): ");
    scanf("%f", &maths_marks);

    printf("Enter marks for Science (out of 100): ");
    scanf("%f", &science_marks);

    printf("Enter marks for English (out of 100): ");
    scanf("%f", &english_marks);


    total_marks = maths_marks + science_marks + english_marks;
    average = total_marks / 3.0;


    if (maths_marks < 40 , science_marks < 40 , english_marks < 40) {
        isPass = 0;
    }

    if (average >= 80 && average <= 100) {
        grade = 'A';
    } else if (average >= 70 && average < 80) {
        grade = 'B';
    } else if (average >= 60 && average < 70) {
        grade = 'C';
    } else if (average >= 50 && average < 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    float highest = maths_marks;
    if (science_marks > highest) highest = science_marks;
    if (english_marks > highest) highest = english_marks;

    int hasDistinction = 0;
    if (average >= 85 && maths_marks >= 80 && science_marks >= 80 && english_marks >= 80) {
        hasDistinction = 1;
    }

    printf("\n---------------------------\n");
    printf("Total: %.2f\n", total_marks);
    printf("Average: %.2f\n", average);
    printf("Grade: %c\n", grade);

    if (isPass == 1) {
        printf("Result: PASS\n");
    } else {
        printf("Result: FAIL\n");
    }

    printf("---------------------------\n");

    return 0;
}
