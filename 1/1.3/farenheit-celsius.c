#include <stdio.h>
/* Print Farenheit-Celsius table
 * for fahr = 0, 20, ..., 300 */
int main () // int type is not specified in example
{
    // int fahr, celsius;
    int fahr;
    for (int fahr = 0; fahr <= 300;  fahr+= 20){
        // printf("%f\t%f\n", fahr, celsius);
        printf("%6d\t%6.1f\n", fahr, (5.0/9.0)*fahr);
    }
    return 0;
}
