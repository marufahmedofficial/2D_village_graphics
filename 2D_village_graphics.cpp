#include<graphics.h>
#include<stdio.h>

int main()
{
        int gd=DETECT,gm;
    initgraph(&gd,&gm,(char*)"");
    line(200,200,300,200);
    line(200,100,200,200);
    line(300,100,300,200);
    line(200,100,300,100);
    line(200,100,250,50);
    line(250,50,300,100);

    line(233,120,233,200);
    line(266,120,266,200);
    line(233,120,266,120);

    rectangle(350,300,450,430);
    rectangle(450,300,620,430);
    rectangle(375,345,425,395);


    line(349,300,405,230);
    line(450,300,405,230);
    line(405,230,565,230);
    line(565,230,620,300);
    rectangle(525,345,565,430);

    getch();
    closegraph();
    return 0;
}

