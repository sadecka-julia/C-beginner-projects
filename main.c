#include <stdio.h>
#include <math.h>

int main() {
    int num1;
    int num2;
    char mat;
    int result;
    printf("Print your first number: \n");
    scanf("%d", &num1);
    printf("Print your second number: \n");
    scanf("%d", &num2);
    printf("What would you like to do with this numbers? (+,-,*,/,^,@) \n");
    scanf(" %c", &mat);
    printf("Your operetion is: %d %c %d", num1, mat, num2);
    if (mat == '+')
    {
        result = num1+num2;
    }
    else if (mat == '-')
    {
        result = num1-num2;
    }
    else if (mat == '*')
    {
        result = num1*num2;
    }
    else if (mat == '/')
    {
        result = num1/num2;
    }
    else if (mat == '^')
    {
        result = pow(num1, num2);
    }
    else if (mat == '@')
    {
        result = sqrt(num1);
    }
    else {
        printf("Choose one of the giving characters ");
    }
    printf("\nYour result is: %d", result);
    return 0 ;
}
