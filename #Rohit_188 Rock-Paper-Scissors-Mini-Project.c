# Rock-Paper-Scissors-Mini-Project
#include <stdio.h>
#include<time.h>
#include <stdlib.h>
int RPS(char me, char comp)
{
    if (me=='r'&&comp=='p')
    return 0;
    else if(me=='r'&&comp=='s')
    return 1;
    else if(me=='p'&&comp=='r')
    return 1;
    else if(me=='p'&&comp=='s')
    return 0;
    else if(me=='s'&&comp=='r')
    return 0;
    else if(me=='s'&&comp=='p')
    return 1;
    else if(me==comp)
    return 2;
}
int choice(int a)
{
    char me;
    if (a==1)
    {
        me='r';
        printf("You chose Rock\n");
    }
    else if (a==2)
    {
        me='p';
        printf("You chose Paper\n");
    }
    else if (a==3)
    {
        me='s';
        printf("You chose Scissors\n");
    }
    else if (a>3)
    {
        printf("Invalid choice exiting program");
        exit(0);
        
    }
    return me;
}

int main() 
{
    int n;
    int a;
    char comp,me,value,c;
    printf("ROCK PAPER SCISSORS\n\n");
    printf("HOW TO PLAY\n");
    printf("To Play Rock Paper Scissors you must choose any one of the below, \nRock beats Scissors, Paper beats Rock, Scissor beats Paper.\n\n");
    do
    {
        srand(time(NULL));
        n = rand() % 3;
        printf("Enter 1 for Rock\nEnter 2 for Paper\nEnter 3 for Scissors\n\n");
        printf("Choose accordingly: ");
        scanf("%d",&a);
        me=choice(a);
        if (n==0)
        {
            comp='r';
            printf("\nComputer chose Rock");
        }
        else if (n==1)
        {
            comp='p';
            printf("Computer chose Paper");
        }
        else 
        {
            comp='s';
            printf("Computer chose Scissors");
        }
        value=RPS(me,comp);
        if (value==0)
        printf("\nYou Lose :(  Try Again");
        else if (value==1)
        printf("\n\nYou Win :) !!!");
        else 
        {
            printf("\n\nDraw Game -_-");
        }
        printf("\n\nDo you want to play again?\nTo play again type y to end game type n\n");
        scanf(" %c",&c);
    }
    while (c=='y'||c=='Y');
    if (c=='n'||c=='N')
    {
        printf("Thank you for playing");
    }
    else
    {
        printf("Invalid Choice*");
    }
    return 0;
}