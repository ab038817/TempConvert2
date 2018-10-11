#ifndef TEMPCONVERT_H_INCLUDED
#define TEMPCONVERT_H_INCLUDED

float convertTemperature(float);


float convertTemperature(float temp)
{
   float returnValue;

   returnValue = ((temp * 9) / 5) + 32;


   return returnValue;
}


#endif // TEMPCONVERT_H_INCLUDED
