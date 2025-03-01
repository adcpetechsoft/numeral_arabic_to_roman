/*
Arabic to Roman Numeral Program
Response to Golf Code https://code.golf/arabic-to-roman#c

Created by amdg


*/




// ---------------------------
// Preprocessor declaration


#define STR_MAX 50

#include <stdio.h>


// ---------------------------
// ator method
// Actuan numeral convertion


int ator(int numx)
{

    // ***********************
    // Variables  Declaration
    int a;
    int b;

    int num;
    int nump;

    char str01[STR_MAX];
    int str01_count;


    // *************************
    // Actual Function Run

    // string pointer initialization
    str01_count=0;

    // transfer to the number to  be process
    nump=numx;

    // actual convertion
    
    // Test and process for 1000 to 4000
    if(nump>=1000 && nump<4000 )
    {
        a=(nump/1000);

        for(b=1; b<=a; b++)
        {
            str01[str01_count]='M';
            str01_count++;
        };

        nump=(nump-(a*1000));

    };

    // Test and process for 900 and +
    if(nump>=900 && nump<1000)
    {
        str01[str01_count]='C';
        str01_count++;
        str01[str01_count]='M';
        str01_count++;

        nump=(nump-900);

    };

    // Test and process for 400 to 5000
    if(nump>=400 && nump<500)
    {
        str01[str01_count]='C';
        str01_count++;
        str01[str01_count]='D';
        str01_count++;

        nump=(nump-400);
    }

    // Test and process for 500 to 900
    if(nump>=500 && nump<900)
    {
        str01[str01_count]='D';
        str01_count++;

        if(nump>=600)
        {
            a=( (nump/100) - 5);
            for(b=1; b<=a; b++)
            {
                str01[str01_count]='C';
                str01_count++;
            };
        };

        a=(nump / 100);
        nump=(nump - (a*100) );

    };

    // Test and process for 100 to 400

    if(nump>=100 && nump<400)
    {
        a=(nump / 100);
        for(b=1; b<=a; b++)
        {
            str01[str01_count]='C';
            str01_count++;

        };

        nump=(nump - (a*100 ) );
    };


    // Test and process for 90 to 100
    if(nump>=90 && nump<100)
    {
        str01[str01_count]='X';
        str01_count++;
        str01[str01_count]='C';
        str01_count++;

        nump=(nump - 90);
    };

    // Test and process for 50 to 90
    if(nump>=50 && nump<90)
    {
        str01[str01_count]='L';
        str01_count++;

        if(nump>=60)
        {
            a=( (nump/10) - 5);
            for(b=1; b<=a; b++)
            {
                str01[str01_count]='X';
                str01_count++;
            };
        };

        a=(nump / 10);
        nump=(nump - (a*10) );

    };

    // Test and process for 40 to 50

    if(nump>=40 && nump<50)
    {
        str01[str01_count]='X';
        str01_count++;
        str01[str01_count]='L';
        str01_count++;

        nump=(nump-40);
    }

    // Test and process for 10 to 40

    if(nump>=10 && nump<40)
    {
        a=(nump / 10);
        for(b=1; b<=a; b++)
        {
            str01[str01_count]='X';
            str01_count++;

        };

        nump=(nump - (a*10 ) );
    };

    // Test and process for last single digit

    // 9 to 10
    if(nump>=9 && nump<10)
    {
        str01[str01_count]='I';
        str01_count++;
        str01[str01_count]='X';
        str01_count++;

        nump=0;
    };


    // 5 to 9
    if(nump>=5 && nump<9)
    {
        str01[str01_count]='V';
        str01_count++;

        if(nump>=6)
        {
            a=( nump - 5);
            for(b=1; b<=a; b++)
            {
                str01[str01_count]='I';
                str01_count++;
            };
        };

        nump=0;

    };

    // number 4
    if(nump==4)
    {
        str01[str01_count]='I';
        str01_count++;
        str01[str01_count]='V';
        str01_count++;

        nump=0;

    };

    // 1 to 4
    if(nump>=1 && nump<4)
    {
        a=(nump / 1);
        for(b=1; b<=a; b++)
        {
            str01[str01_count]='I';
            str01_count++;

        };

        nump=0;
    };


    // strinf finalization
    str01[str01_count]='\0';

    // printing the result
    // displaying the string content
    printf("%s", str01);

    return 0;

};


// ---------------------------
// main Program entry Point
int main(int argc, char * argv[])
{

    // ************************
    // variable declaration
    int x;
    int y;

    int num;


    // ************************
    // Actual program run


    // argument test
    if(argc>=1)
    {

        // argument content count
        x=argc;

        // actual convertion and display loop from argument
        for(y=1; y<x; y++)
        {
            sscanf(argv[y], "%i", &num);
            ator(num);
            printf("\n");
        };


    }else
    {
        // if the argument are missing
        printf("ERROR: No ARG Input...\n");
    };


    // program end.
    return 0;

};
