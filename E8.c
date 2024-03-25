#include<stdio.h>
#include<math.h>
#include<stdbool.h>


// double cal(int);



double Exponential(); double SquareRoot(); double power(); double Log(); double Round(); 
int main()
{
    int user_num;
    char Yes_or_No ='y';

    while(Yes_or_No=='y')
    {
    printf("----------------------------------------------\n");

    printf("Scientific Calculator\n");

    printf("---------------------------------------\n");

    printf("1. Power\n");
    printf("2. Square Root\n");
    printf("3. Exponential\n");
    printf("4. Log\n");
    printf("5. Round\n");

       printf("\n");

    printf("Enter the operation number :");
    scanf("%d",&user_num);
   


    switch(user_num)
    {
        case 1: printf("The result is:%.2lf",power());  break;

        case 2: printf("The result is:%.2lf",SquareRoot()); break;

        case 3:  printf("The result is:%.2lf", Exponential()); break;

        case 4: printf("The result is:%.2lf",Log());break;

         case 5:printf("The result is:%.2lf", Round()); break; 
    }
    
    printf("\n\n\n---------------------------------------\n");

    printf("\nDo you want to continue? Y/N :");
    scanf("%c",&Yes_or_No);
    scanf("%c",&Yes_or_No);

    if(Yes_or_No =='y' ||Yes_or_No =='Y')  Yes_or_No='y';

    else  break;



   
   

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

double SquareRoot()
{
    double num;
    printf("Enter the number :");
    scanf("%lf",&num);

    return sqrt(num);
}

double Exponential()
{
    double num;
    printf("Enter The Number :");
    scanf("%lf",&num);

    return exp(num);
}

double Log()
{
    double num;
    printf("Enter The Number :");
    scanf("%lf",&num);
    return log(num);
}

double Round()
{
    double num;
    printf("Enter The Number :");
    scanf("%lf",&num);

    return round(num);

}

