#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a, c;
    float ab;
    printf("Input the digit you want to check: ");
    scanf("%d", &a);
    c=a%10;
    ab = c;
    ab = ab/2;
    if(ab < 0 || isdigit(ab)){
        printf("ERROR: 1, PLEASE RESTART PROGRAM - PLEASE CHECK ERROR LIST FOR MORE INFO.\n");
    }else{
        if(floor(ab) == ab){
            printf("It's Even! \n");
        }else{
            printf("It's odd! \n");
        }
    }
    system("pause");
    return 0;
}
