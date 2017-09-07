
#include <stdio.h>
#include <math.h>

int main()
{
    int add = math(1,4,'+');
    int sub = math(5,2,'-');
    int mult = math(2,3,'*');
    int divide = math(9,3,'/');
    int mod = math(9,2,'%');
    
    printf("%d \n", add);
    printf("%d \n", sub);
    printf("%d \n", mult);
    printf("%d \n", divide);
    printf("%d \n", mod);

    return 0;
}

