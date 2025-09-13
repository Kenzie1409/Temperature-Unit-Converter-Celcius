#include <stdio.h>

int main()
{
    float cel, kel, far, rea;
    printf("enter temperature in celcius: \n");
    scanf("%f", &cel);

    kel = cel + 273;
    far = cel*9/5+32;
    rea = cel*4/5;

    printf("%f derajat celcius = %f kelvin, %f derajat farenheit, %f derajat reamur\n", cel, kel, far, rea);
    
    return 0;
}
