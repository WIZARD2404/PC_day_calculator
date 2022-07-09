#include <stdio.h>

/**
 * main - A Simple code that accepts an input and print out the day you were born,
 * your age, days you've spent on earth and your zodiac sign.
 *
 * Please Enter Date in this format- DD MM YYYY
 *
 * Returns (0) - Success
 */

int main()
{
        /* The days of the week are represented from 0......7 */

        /* fday: Jan 1st 0001 was on a Saturday (6) */
        const int fday = 6 ;
        int day, month, year, flag = 1, mday, x = 0;

        scanf("%d %2d %4d", &day, &month, &year);
        /**
         * lyear: Subtract a year from DOB for ease of calculations
         * leap : finds the number of leap years between year of birth & 1st year
         * dys & cal: A varia
         * is_leap: A boolean variable to check if a year is a leap year
         */
        int lyear = year - 1, leap = year / 4,
        dys = ((lyear * 365) + leap), cal = dys + fday - 1;
        _Bool is_leap= (!(year % 4));

        //Error Handler
        if((!day) || day >32){
                printf("Please enter a valid day\n");
                flag = 0;
                goto eof;
        } else if ((!month) || month > 13){
                printf("Please enter a valid Month\n");
                flag = 0;
                goto eof;
        } else if((!year)){
                printf("Please enter a valid Year\n");
                goto eof;
        } else ;

        /* Days in a Month calculation + t=    = (cal + day + x) % 7;*/

        int daycalc(void){
        /* A function that calculates the day of the week*/
        // while (flag) - A PC feauture
                switch(month)
                {
                        case 1:
                                mday = (cal + day) % 7;
                                break;
                        case 2:
                                cal += 31;
                                mday = (cal + day) % 7;
                                break;
                        case 3:
                                is_leap? ++x: x;
                                cal += 31 + 28 + x;
                                mday = (cal + day) % 7;
                                x = 0;
                                break;
                        case 4:
                                is_leap? ++x: x;
                                cal += 31 + 28 + 31 + x;
                                mday = (cal + day) % 7;
                                x = 0;
                                break;
                        case 5:
                                is_leap? x: ++x;
                                cal += 31 + 28 + 31 + 30 + x;
                                mday = (cal + day) % 7;
                                //printf("%d", x);
                                x = 0;
                                break;
                        case 6:
                                is_leap? ++x: x;
                                //If is_leap == True increment x
                                cal += 31 + 28 + 31 + 30 + 31 + x;
                                mday = (cal + day) % 7;
                                break;
                        case 7:
                                is_leap? ++x: x;
                                //If is_leap == True increment x
                                cal += 151 + 30 + x;
                                mday = (cal + day) % 7;
                                break;
                        case 8:
                                is_leap? ++x: x;
                                //If is_leap == True increment x, else;
                                cal += 151 + 30 + 31 + x;
                                mday = (cal + day) % 7;
                                break;
                        case 9:
                                is_leap? ++x: x;
                                //If is_leap == True increment x, else;
                                cal += 151 + 30 + 31 + 31 + x;
                                mday = (cal + day) % 7;
                                break;
                        case 10:
                                is_leap? ++x: x;
                                //If is_leap == True increment x, else;
                                cal += 151 + 30 + 31 + 31 + 30 + x;
                                mday = (cal + day) % 7;
                                break;
                        case 11:
                                is_leap? ++x: x;
                                //If is_leap == True increment x, else;
                                cal += 151 + 30 + 31 + 31 + 30 + 31 + x;
                                mday = (cal + day) % 7;
                                break;
                        case 12:
                                is_leap? ++x: x;
                                //If is_leap == True increment x, else;
                                cal += 151 + 30 + 31 + 31 + 30 + 31 + 30 + x;
                                mday = (cal + day) % 7;
                                break;
                        default:
                                printf("Error");
                }

                switch (mday)
                {
                case 0 :
                        printf("You were born on a Sunday\n");
                        break;
                case 1 :
                        printf("You were born on a Monday\n");
                        break;
                case 2 :
                        printf("You were born on a Tuesday\n");
                        break;
                case 3 :
                        printf("You were born on a Wednesday\n");
                        break;
                case 4 :
                        printf("You were born on a Thursday\n");
                        break;
                case 5 :
                        printf("You were born on a Friday\n");
                        break;
                case 6 :
                        printf("You were born on a Saturday\n");
                        break;
                default:
                        printf("Error in modulo");
                }
                return (0);
        }

        /* A function to find zodiac sign*/
        int zodiac(void)
        {
                //while(flag)
                if (((month == 1) && (day >= 20)) || ((month == 2) && (day <= 18))){
                    printf("Your zodiac sign is Aquarius \(Water Bearer\)\n");
                }else if (((month == 2) && (day >= 19)) || ((month == 3) && (day <= 19))){
                    printf("Your zodiac sign is Pisces\n");
                } else if (((month == 3) && (day >= 21)) || ((month == 4) && (day <= 19))){
                    printf("Your zodiac sign is Aquarius \(Water Bearer\)\n");
                } else if (((month == 4) && (day >= 21)) || ((month == 5) && (day <= 19))){
                    printf("Your zodiac sign is Aquarius \(Water Bearer\)\n");
                } else if (((month == 5) && (day >= 21)) || ((month == 6) && (day <= 19)))
                    printf("Your zodiac sign is Aquarius \(Water Bearer\)\n");
                return (0);
        }
        daycalc();
        zodiac();
        eof: printf("I just started learning C recently  so if you like this code,"\
             "encourage me by hitting the upvote button and drop a comment below"\
             " on features you'll like me to add. And please let me know if you spotted an error");

         return 0;
}

/**********************************************************************************************************
 * Still under construction => Get the PC version on Github(https://github.com/WIZARD2404/day_of_week.git)*
 *                                                                                        *****************
 *                                                                                        *
 * This code is Open source and can be rebuilt and redeployed                             *
 *                                                                                        *
 * Credits: GHOST, Leo.                                                                   *
 ******************************************************************************************/
