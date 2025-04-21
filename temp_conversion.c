#include <stdio.h>
#include <ctype.h>

int main()
{
    char unit;
    double temperature, convertedTemperature;

    printf("Enter the temperature (e.g., 32F, 100C): ");
    scanf("%lf%c", &temperature, &unit);

    unit = toupper(unit); // Convert unit to uppercase for consistency

    if (unit == 'C') {
        // Convert Celsius to Fahrenheit
        convertedTemperature = (temperature * 9.0 / 5.0) + 32.0;
        printf("%.1lfC is %.1lfF\n", temperature, convertedTemperature);
    } else if (unit == 'F') {
        // Convert Fahrenheit to Celsius
        convertedTemperature = (temperature - 32.0) * 5.0 / 9.0;
        printf("%.1lfF is %.1lfC\n", temperature, convertedTemperature);
    } else {
        printf("Invalid unit. Please use 'C' for Celsius or 'F' for Fahrenheit.\n");
    }
    return 0;
}