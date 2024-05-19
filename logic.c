# Program to Add, Multiply, Find Greatest & Smallest Number and To Calculate Average of 3 Numbers

#include <stdio.h>

int main()
{
    int a,b,c,n,sum,mul;
    float avg;
    printf("enter 3 digits to compare\n");
    scanf("%d,%d,%d",&a,&b,&c);

    printf("choose any 1 option\n");
    printf("1. ADD 3 digits\n");
    printf("2. MULTIPLY 3 digits\n");
    printf("3. FIND GREATEST\n");
    printf("4. FIND SMALLEST\n");
    printf("5. CALCULATE AVERAGE\n");
    scanf("%d",&n);
    switch(n)
    {
       case 1:
       sum=a+b+c;
       printf("SUM is %d",sum);
       break;

       case 2:
       mul=a*b*c;
       printf("MUL is %d",mul);
       break;

       case 3:
       if(a>b&&a>c)
        printf("GREATEST NUM IS %d",a);
       else if(b>c)
        printf("GREATEST NUM IS %d",b);
       else if(a==b==c)
        printf("ALL ARE EQUAL");
       else
        printf("GREATEST NUM IS %d",c);
        break;

        case 4:
        if(a<b&&a<c)
         printf("SMALLEST NUM IS %d",a);
        else if(b<c)
         printf("SMALLEST NUM IS %d",b);
        else if(a==b==c)
         printf("ALL ARE EQUAL");
        else
         printf("SMALLEST NUM IS %d",c);
        break;

       case 5:
       avg=(a+b+c)/3;
       printf("AVERAGE IS %d",avg);
       break;
    }

    return 0;
}
