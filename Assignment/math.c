#include <stdio.h>
#include <math.h>

int math(int num1, int num2, char Operator) {
    int output = 0;
    switch(Operator) {
        case '+':
            output = num1 + num2;
            break;
        case '-':
            output = num1 - num2;
            break;
        case '*':
            output = num1 * num2;
            break;
        case '/':
            output = num1 / num2;
            break;
        case '%':
            output = num1 % num2;
            break;
    }
    return output;
}
