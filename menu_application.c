#include <stdio.h>
void hamCon1()
{
    int i, j;
    printf("Input number to check: ");
    scanf("%d", &i);

    if (i < 1)
    {
        printf("invalid");
    }
    for (j = 1; j <= i; j++)
    {

        if (i % j == 0)
        {
            printf("invalid");
        }
        else
        {
            printf("valid");
        }
    }
}
void hamCon2()
{
    int h, m;
    printf("Input time (hh mm) to check: ");
    scanf("%d ", &h, &m);
    if (h >= 0 && h < 23 && m >= 0 && m < 60)
    {
        printf("valid!");
    }
    else
    {
        printf("invalid!");
    }
}
void hamCon3()
{
    int s, r, f;

    printf("Triangle: Input n: ");
    scanf("%d", &s);

    for (r = 1; r <= s; r++)
    {

        for (f = 1; f <= s - r; f++)
        {
            printf("   ");
        }

        for (f = 1; f <= 2 * r - r; f++)
        {
            printf("   *  ");
        }

        printf("\n");
    }
}
void hamCon4()
{
    int e, z, a;

    printf("Square: Input n: ");
    scanf("%d", &e);

    for (z = 1; z <= e; z++)
    {
        for (a = 1; a <= e; a++)
        {
            printf("  *     ");
        }
        printf("\n\n");
    }
}
void hamCon5()
{
    int g, m;
    int A[g];
    printf("Input number of elements: ");
    scanf("%d", &g);

    for (m = 0; m < g; m++)
    {
        printf("Input A[%d] = ", m);
        scanf("%d", &A[m]);
    }

    for (m = 0; m < g; m++)
    {
        printf("A[%d] is %d\n", m, A[m]);
    }
}
void hamCon6()
{
    int o, b, c, d;
    int A[o];
    printf("Input number or element: ");
    scanf("%d", &o);
    printf("Input array: ", b);
    for (b = 0; b < o; b++)
    {
        
        scanf("%d", &A[b]);
    }
   for (b = 2; b <= o; b++)
    {
        c = 0;
        for (d = 2; d * d <= b; ++d)
        {
            if (b % d == 0)
            {
                c++;
                break;
            }
        }

        if (c == 0)
        {
            printf("%d ", b);
        }
    }
  

}
void hamCon7()
{
    printf("goodbye");
}
int main()
{
    printf("1. Check Prime Number:\n");
    printf("2. Check Time:\n");
    printf("3. Print Triangle:\n");
    printf("4. print square:\n");
    printf("5. Input and Output an Array:\n");
    printf("6. Print Prime number in an Array:\n");
    printf("7. Quit\n");
    int chon;

    printf("hay chon: ");
    scanf("%d", &chon);

    switch (chon)
    {
    case 1:
    {
        hamCon1();
        break;
    }
    case 2:
    {
        hamCon2();
        break;
    }
    case 3:
    {
        hamCon3();
        break;
    }
    case 4:
    {
        hamCon4();
        break;
    }
    case 5:
    {
        hamCon5();
        break;
    }
    case 6:
    {
        hamCon6();
        break;
    }
    case 7:
    {
        hamCon7();
        break;
    }
        // default:
    }
}
