#include<stdio.h>
struct Math{
    int a, b;
} me;
void main ()
{
    me.a = 3; 
    me.b = 4;
    printf("%d\n", me.a+me.b);
}
