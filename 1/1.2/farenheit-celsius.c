#include <stdio.h>
/* Print Farenheit-Celsius table
 * for fahr = 0, 20, ..., 300 */
int main () // int type is not specified in example
{
    // int fahr, celsius;
    float fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20.0;

    fahr = lower;
    while (fahr <= upper){
        celsius = (5.0/9.0) * (fahr -32);
        // printf("%f\t%f\n", fahr, celsius);
        printf("%6.1f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}
