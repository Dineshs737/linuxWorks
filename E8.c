#include<stdio.h>
#include<math.h>

double power();
// double cal(int);
int main()
{
    int user_num;
    printf("----------------------------------------------\n");

    printf("Scientific Calculator\n");

    printf("---------------------------------------\n");

    printf("1. Power\n");
    printf("2. Square Root\n");
    printf("3. Exponential\n");
    printf("4. Log\n");
    printf("5. Round\n");

    printf("Enter the operation number :");
    scanf("%d",&user_num);
    printf("---------------------------------------\n");


    switch(user_num)
    {
        case 1: power(); break;

        // case 2: SquareRoot(); break;

        // case 3: Exponential(); break;

        // case 4: Log();break;

        // case 5: Round(); break; 
    }

    // cal(user_num);


    return 0;
}  
double power()
{
    double  base,Exponent;

    printf("Enter base :");
    scanf("%lf",&base);

    printf("Enter Exponent :");
    scanf("%lf",&Exponent);

    double result =pow(base,Exponent);


}

