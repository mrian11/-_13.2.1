#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

#define z 1
#define KVAD(x) ((x)*(x))
#define MAX(y, z) (((y)>(z))?(y):(z))
#define MIN(y, z) (((y)<(z))?(y):(z))
#define MOD(x) (((x)<0)?-(x):(x))

#define PRINTI(w) puts("control output"); \
        printf(#w"=%d\n",w) 
#define PRINTR(w) puts("result:"); \
        printf(#w"=%f\n",(float)w)

int main()
{
    char ch;
    puts("Lab 13.2. Using macros and preprocessing directive");
    int x, y, result;
    puts("Input 2 integer numbers");
    scanf_s("%d", &x);
    PRINTI(x);
    scanf_s("%d", &y);
    PRINTI(y);
    /*
    scanf_s("%d", &z);
    PRINTI(z);
    */
    do
    {
#if z == 1 
        result = MAX(KVAD(x - y), MOD(y - x));
#else
        result = MIN(x + (KVAD(y)), z + (KVAD(x)));
#endif
        PRINTR(result);

        puts("Repeat? y /n "); ch = _getch();
    } while (ch == 'y');
}
