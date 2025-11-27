#include <stdio.h>
int main()
{

    int a, b;
    int and, or, nota, notb;

    printf("Enter First Number: "); // Take Inut From User
    scanf("%d", &a);

    printf("Enter Second Number: ");
    scanf("%d", &b);

    and = a & b; // Operate And,Or and Not Operator
    or = a | b;
    nota = ~a;
    notb = ~b;

    printf("And Operator: %d\n", and); // Display Output
    printf("Or Operator: %d\n", or);
    printf("Not a Operator: %d\n", nota);
    printf("Not b Operator: %d\n", notb);

    return 0;
}