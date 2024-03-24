#include<stdio.h>
#include<math.h>
#include<stdbool.h>

double power();
// double cal(int);
int main()
{
    int user_num;
    char yORn ='y';

    while(yORn=='y' || yORn=='Y')
    {
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
        case 1: printf("The result is:%.2lf",power());  break;

        // case 2: SquareRoot(); break;

        // case 3: Exponential(); break;

        // case 4: Log();break;

        // case 5: Round(); break; 
    }

    printf("Do you want to continue? Y/N :");
    scanf("%lf",&yORn);
   

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

   return pow(base,Exponent); 


}

