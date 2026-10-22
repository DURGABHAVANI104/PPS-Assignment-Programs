//BMI classification

#include <stdio.h>

int main()
{
    float weight, height, bmi;

    printf("Enter weight in kg: ");
    scanf("%f", &weight);

    printf("Enter height in meters: ");
    scanf("%f", &height);

    if (weight <= 0 || height <= 0)
    {
        printf("Invalid input\n");
        return 1;
    }

    bmi = weight / (height * height);
    printf("BMI = %.2f\n", bmi);

    if (bmi < 18.5)
        printf("Underweight\n");
    else if (bmi < 25)
        printf("Normal\n");
    else if (bmi < 30)
        printf("Overweight\n");
    else
        printf("Obese\n");

    return 0;
}
