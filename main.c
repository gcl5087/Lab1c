//Author: Grace Lavin gcl5087@psu.edu
// Collaborator: Justin Tien - jst5381@psu.edu
// Collaborator: Henry Radzikowksi - har5254@psu.edu
// Collaborator: Ruilan Sun - rfs5748@psu.edu

#include <stdio.h>
#include <readline/readline.h> 

int main(void) {
  char *celsiusV = readline("Enter temperature in celsius: ");
  
  double doubleC = atof(celsiusV);

  double fahrV = (1.8* (doubleC) + 32);

  printf("%f° in Celsius is equivalent to %f° Fahrenheit.", doubleC, fahrV);
  return 0;

}