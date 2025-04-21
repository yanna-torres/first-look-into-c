#include <stdio.h>
#include <math.h>

int main()
{

    double sideA, sideB, hypotenuse;

    printf("This program calculates the hypotenuse of a right triangle.\n");
    printf("Enter the lengths of the two sides:\n");
    printf("Side A: ");
    scanf("%lf", &sideA);
    printf("Side B: ");
    scanf("%lf", &sideB);

    // Calculate the hypotenuse using the Pythagorean theorem
    hypotenuse = sqrt((sideA * sideA) + (sideB * sideB));

    printf("The length of the hypotenuse is: %.2lf\n", hypotenuse);

    return 0;
}