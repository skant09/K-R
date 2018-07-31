#include <stdio.h>
/* Print Farenheit-Celsius table
 * for fahr = 0, 20, ..., 300 */
int main () // int type is not specified in example
{
    int fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper){
        celsius = 5* (fahr -32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}
