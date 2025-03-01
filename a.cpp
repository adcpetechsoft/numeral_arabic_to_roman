#define STR_MAX 20

#include <stdio.h>

int main(int argc, char * argv[])
{

    int a;
    int b;

    int num;
    int nump;

    char str01[STR_MAX];
    int str01_count;


    if(argc==2)
    {

        str01_count=0;

        sscanf(argv[1], "%i", &num);

        nump=num;

        if(nump>=1000 && nump<4000 )
        {
            a=(num/1000);

            for(b=1; b<=a; b++)
            {
                str01[str01_count]='M';
                str01_count++;
            };

            nump=(nump-(a*1000));

        };

        if(nump>=900 && nump<1000)
        {
            str01[str01_count]='C';
            str01_count++;
            str01[str01_count]='M';
            str01_count++;

            nump=(nump-900);

        };

        if(nump>=400 && nump<500)
        {
            str01[str01_count]='C';
            str01_count++;
            str01[str01_count]='D';
            str01_count++;

            nump=(nump-400);
        }

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

        if(nump>=90 && nump<100)
        {
            str01[str01_count]='X';
            str01_count++;
            str01[str01_count]='C';
            str01_count++;

            a=(nump - 90);
        };

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

        if(nump>=40 && nump<50)
        {
            str01[str01_count]='X';
            str01_count++;
            str01[str01_count]='L';
            str01_count++;

            nump=(nump-40);
        }

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

        if(nump>=9 && nump<10)
        {
            str01[str01_count]='I';
            str01_count++;
            str01[str01_count]='X';
            str01_count++;

            nump=0;
        };


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

        if(nump==4)
        {
            str01[str01_count]='I';
            str01_count++;
            str01[str01_count]='V';
            str01_count++;

            nump=0;

        };

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


        




        str01[str01_count]='\0';

        printf("Num: %s\n", str01);



    }else
    {
        printf("ERROR: No ARG Input...\n\n");
    };


    return 0;

}