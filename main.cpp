// #include <stdio.h>

// struct A
// {
//     int a;
//     char b;
//     double z;
//     float f;

// };
// int main()
// {
//     struct A A1;
//     A1.a=10;
//     A1.b = 'A';
//     A1.z = 12.985185;
//     A1.f = 5.2f;

//     printf("%p\n",A1.a);
//     printf("%p\n",A1.b);
//     printf("%p\n",A1.z);
//     printf("%p\n",A1.f);

//     printf("%d\n",&A1.a);
//     printf("%d\n",&A1.b);
//     printf("%d\n",&A1.z);
//     printf("%d\n",&A1.f);

//     int *p = & A1.a;
//     printf("%p\n",p);
//     printf("%d\n",*p);
//     printf("%c\n",*p+1);
//     printf("%lf\n",*p+3);
//     printf("%f\n",*p+4);

//     return 0;

// }

#include <stdio.h>

struct A
{
    float a;
    float b;
    float z;
   float f;

};
int main()
{
    struct A A1;
    A1.a=10;
    A1.b = 5;
    A1.z = 12;
    A1.f = 5;

    printf("%p\n",A1.a);
    printf("%p\n",A1.b);
    printf("%p\n",A1.z);
    printf("%p\n",A1.f);

    printf("%d\n",&A1.a);
    printf("%d\n",&A1.b);
    printf("%d\n",&A1.z);
    printf("%d\n",&A1.f);

    float *p = & A1.a;

    printf("%f\n",*(p));
    printf("%f\n",*(p+1));
    printf("%f\n",*(p+2));
    printf("%f\n",*(p+3));

    return 0;

}
