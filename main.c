#include <stdio.h>
#include <conio.h>

int main()
{
int a, xOld, n, x; //this is creating the number variable to store the user input from
     a = 0; //initialise
     x = a; //initialise
     xOld = 0; //initialise
     n = 0; //initialise

  printf("Enter Number to find square root of\n"); // this will display the text asking for user input
  scanf("%d",&a); // this is taking the user input and assigning it to the variable number
     x = a;
 while (n<10)               //&& (x-xOld !== 0) //<< i cant get this to work, so single exit condition it is.
    {

    xOld = x;
                          //    printf("values going into loop\n a %d\n  x %d\n xOld %d\n n %d\n", a, x, xOld, n);
    x = 0.5*(x+a/x);

    n = n+1;

    printf(" %d\n", x);
    }
    printf(" The Square root of %d is %d\n", a, x);




return 0;
}
