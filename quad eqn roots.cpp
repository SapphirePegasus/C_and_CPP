#include <stdio.h>
#include <math.h>
int main()
{
	int a, b, c, d;
    double root1, root2;
    printf("Enter a, b and c where a*x*x + b*x + c = 0\n");
    scanf("%d%d%d", &a, &b, &c);
    d = b*b - 4*a*c;
    if (d < 0) { //complex roots
    printf("Complex roots : \n");
    printf("First root = %.2lf + %.2lf\n", -b/(double)(2*a), sqrt(-d)/(2*a));
    printf("Second root = %.2lf - %.2lf\n", -b/(double)(2*a), sqrt(-d)/(2*a));
    }
    else { //real roots
    root1 = (-b + sqrt(d))/(2*a);
    root2 = (-b - sqrt(d))/(2*a);
    printf("Real roots : \n");
    printf("First root = %.2lf\n", root1);
    printf("Second root = %.2lf\n", root2);
    }
    return 0;
}
