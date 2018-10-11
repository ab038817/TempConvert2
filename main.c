#include <stdio.h>
#include <stdlib.h>
#include "TempConvert.h"


int main()
{
    printf("Enter temperature in Celsius: ");

    float tempC;
    scanf("%f",  &tempC);

      float tempF;
    tempF = convertTemperature(tempC);


    printf("temperature in Fahrenheit: %f", tempF);



}

