#include<graphics.h>
#include<stdio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");
    line(200,200,300,200);
    line(200,100,200,200);
    line(300,100,300,200);
    line(200,100,300,100);
    line(200,100,250,50);
    line(250,50,300,100);
    

    getch();
    closegraph();
    return 0;
}

