#include <stdio.h>
#include <math.h>

int main(void) {
   double x;
   double y;
   double z;
   scanf("%lf %lf %lf", &x,&y,&z);
   double x_w_pow_z = pow(x,z);
   double x_w_pow_y_pow_2 = pow(x,pow(y,2));
   double abs_y = fabs(y);
   double sqrt_of_x_times_y_to_the_pow_of_z = sqrt(pow(x*y,z));

   printf("%0.2lf %0.2lf %0.2lf %0.2lf\n", x_w_pow_z, x_w_pow_y_pow_2,abs_y,sqrt_of_x_times_y_to_the_pow_of_z);

   /* Type your code here. Note: Include the math library above first. */


   return 0;
}

