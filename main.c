#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265

int main()
{
    float num1 = 0 , num2 = 0;
    char op;
    printf("\n\n\t\t\t Welcome To Our Calc Program\n\n-----------------------------------------------\nAdd              : +\nSubtract         : -\nMultiply         : *\nDivide           : /\nModulus          : %%\nsin              : s\ncos              : c\ntan              : t\nsec              : d\ncosec            : f\ncotan            : g\nPower            : ^\nSquare root      : q\nLog base:10      : l\nLn               : n\nClear screen     : Space\nHelp             : ?\nExit             : e\n-----------------------------------------------\n");
    printf("Enter a number :\n");
    scanf("%f",&num1);
    fflush(stdin);
    while(op != 'e')
    {
        scanf("%c",&op);
        switch(op)
        {
            case '+' :
            {
                scanf("%f",&num2);
                fflush(stdin);
                num1 += num2;
                printf("Your result : %0.3f\n",roundf(num1*100)/100);
                break;
            }

            case '-' :
            {

                scanf("%f",&num2);
                fflush(stdin);
                num1 -= num2;
                printf("Your result : %0.3f\n",roundf(num1*100)/100);
                break;
            }

            case '*' :
            {
                scanf("%f",&num2);
                fflush(stdin);
                num1 *= num2;
                if(num1!=-0)
                    printf("Your result : %0.3f\n",roundf(num1*100)/100);
                else
                    printf("Your result : 0.000\n");
                break;
            }

            case '/' :
            {
                scanf("%f",&num2);
                fflush(stdin);
                if(num2 != 0)
                {
                    num1 /= num2;
                    printf("Your result : %0.3f\n",roundf(num1*100)/100);
                }
                else
                    printf("Math Error\nYour last result : %0.3f\n",roundf(num1*100)/100);
                break;
            }

            case '%' :
            {
                scanf("%f",&num2);
                fflush(stdin);
                if(num2 != 0)
                {
                    printf("Num 1 = %d , Num 2 = %d\n",(int)num1,(int)num2);
                    num1 = (int)num1 % (int)num2;
                    printf("Your result : %0.3f\n",num1);
                }
                else
                    printf("Math Error\nYour last result : %0.3f\n",roundf(num1*100)/100);
                break;
            }

            case 's' :
            {
                fflush(stdin);
                num1 = sin(num1*PI/180);
                printf("Your result : %0.3f\n",roundf(num1*100)/100);
                break;
            }

            case 'c' :
            {
                fflush(stdin);
                num1 = cos(num1*PI/180);
                printf("Your result : %0.3f\n",roundf(num1*100)/100);
                break;
            }

            case 't' :
            {
                fflush(stdin);
                if(num1 != 90 || num1!=270)
                {
                    num1 = tan(num1*PI/180);
                    printf("Your result : %0.3f\n",roundf(num1*100)/100);
                }
                else
                    printf("Math Error\nYour last result : %.3f\n",roundf(num1*100)/100);
                break;
            }

            case 'd' :
            {
                fflush(stdin);
                if(num1!=90 || num1!=270)
                {
                    num1 = cos(num1*PI/180);
                    num1 = 1/num1;
                    printf("Your result : %0.3f\n",roundf(num1*100)/100);
                }
                else
                    printf("Math Error\nYour last result : %.3f\n",roundf(num1*100)/100);
                break;
            }

            case 'f' :
            {
                fflush(stdin);
                if(num1!=0 || num1!=180)
                {
                    num1 = sin(num1*PI/180);
                    num1 = 1/num1;
                    printf("Your result : %0.3f\n",roundf(num1*100)/100);
                }
                else
                    printf("Math Error\nYour last result : %.3f\n",roundf(num1*100)/100);
                break;
            }

            case 'g' :
            {
                fflush(stdin);
                if(num1!=0 || num1!=90 || num1!=180 || num1!=270)
                {
                    num1 = tan(num1*PI/180);
                    num1 = 1/num1;
                    printf("Your result : %0.3f\n",roundf(num1*100)/100);
                }
                else
                    printf("Math Error\nYour last result : %.3f\n",roundf(num1*100)/100);
                break;
            }

            case '^' :
            {
                scanf("%f",&num2);
                fflush(stdin);
                if(num1>=0)
                {
                    num1 = pow(num1,num2);
                    printf("Your result : %0.2f\n",roundf(num1*100)/100);
                }else
                {
                    if(abs(num2)>0&&abs(num2)<1)
                    {
                        printf("Math Error\nYour last result : %.2f\n",roundf(num1*100)/100);
                    }
                }
                break;
            }

            case 'q' :
            {
                fflush(stdin);
                if(num1>=0)
                {
                    num1 = sqrt(num1);
                    printf("Your result : %0.2f\n",roundf(num1*100)/100);
                }
                else
                    printf("Math Error\nYour last result : %.2f\n",roundf(num1*100)/100);
                break;
            }

            case 'l' :
            {
                fflush(stdin);
                if(num1>0)
                {

                    num1 = log10(num1);
                    printf("Your result : %0.2f\n",roundf(num1*100)/100);
                }
                else
                    printf("Math Error\nYour last result : %.2f\n",roundf(num1*100)/100);

                break;
            }

            case 'n' :
            {
                fflush(stdin);
                if(num1>0)
                {

                    num1 = log(num1);
                    printf("Your result : %0.2f\n",roundf(num1*100)/100);
                }
                else
                    printf("Math Error\nYour last result : %.2f\n",roundf(num1*100)/100);

                break;
            }

            case ' ' :
            {
                fflush(stdin);
                system("cls");
                printf("Your last result : %0.2f\n",roundf(num1*100)/100);
                break;
            }

            case 'e' :
                exit(0);

            case '?' :
            {
                fflush(stdin);
                printf("--------------------H E L P--------------------\nAdd              : +\nSubtract         : -\nMultiply         : *\nDivide           : /\nModulus          : %%\nsin              : s\ncos              : c\ntan              : t\nsec              : d\ncosec            : f\ncotan            : g\nPower            : ^\nSquare root      : q\nLog base:10      : l\nLn               : n\nClear screen     : Space\nHelp             : ?\nExit             : e\n-----------------------------------------------\n");
                printf("Your last result : %.2f\n",roundf(num1*100)/100);
                break;
            }

            default :
            {
                fflush(stdin);
                printf("Error\nYour last result : %0.2f\n",roundf(num1*100)/100);
            }
        }
    }

    return 0;
}
