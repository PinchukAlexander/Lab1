#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x1, x2, F, delta;
    unsigned int N;
    int a, j;

    printf("Write a variant:");
    scanf("%d", &a);


    if (a==1)
    {
        //F(x)=x1+1
         printf("Write start value:\n");
         scanf("%lf", &x1);
         printf("Write finish value:\n");
         scanf("%lf", &x2);
         printf("Amount of points:\n");
         scanf("%d", &N);
         int i=1;
          printf("**********************************\n");
          printf("\t* N * X * F(X) *\n");
          printf("**********************************\n");
         for(i; i<=N; i++)
         {
             F=x1+1;
             printf("\t| %d| %.2lf| %.2lf|\n",i,x1,F);
             printf("**********************************\n");
             x1++;

             if(i/10==j)
             {
                 getchar();
                 j++;
             }
         }

    }

    if (a==2)
    {
         printf("Write start value:\n");
         scanf("%lf", &x1);
         printf("Write finish value:\n");
         scanf("%lf", &x2);
         printf("Write a step:\n");
         scanf("%lf", &delta);
         int i=1;
          printf("**********************************\n");
          printf("* N * X * F(X) *\n");
          printf("**********************************\n");
         for(i; i<=x2; i++)
         {
             F=x1+1;
             printf("| %d| %.2lf| %.2lf|\n",i,x1,F);
             printf("**********************************\n");
             x1=x1+delta;

             if(i/10==j)
             {
                 getchar();
                 j++;
             }
         }

    }
    return 0;
}
