
#include<graphics.h>

int Y=20,l=287,w=25,i=405,j=245,v=14;

int X=-13,Z=200,W=250,s=78,O;

int p=18,q=3,a=450,b= -215,k=-30;

float x=29, y=-92;

void sky();

void sun();

void clouds();

void mountain();

void house_1();

void house_2();



void bigTree();



void road();

void car();
void mosque();
void tree();
void school();
//void river();
//void flag();





main()

{

    int graphdriver= DETECT, graphmode= DETECT;

    initgraph(&graphdriver, &graphmode, "c\tc\bgi");



    clouds();

    mountain();

    sky();

    sun();

    setfillstyle(11,GREEN);


    bar(215,151,550,230);

    setfillstyle(11,GREEN);


    bar(0,80+Z,290+W,22+Z);

    setfillstyle(11,GREEN);


    bar(284,380,500,222);

    bar(260,380,210,222);

    bar(0,380,10,222);

    bar(10,380,75,222);

    bar(130,380,102,222);

    setfillstyle(11,GREEN);

    bar(0,325,500,450);

    setfillstyle(11,GREEN);

    bar(0,150,220,210);

    bar(165,150,220,222);

    bar(765,350,420,422);
    bar(865,150,120,422);
    bar(2065,150,110,922);





//    flag();

    school();
    mosque();

    bigTree();

    house_1();

    house_2();


    //river();

//   road();

    car();

    getch();

    closegraph();

}



void clouds()

{

    //clouds 1

    ellipse(40,30,60,240,10,15);

    ellipse(65,20,345,165,20,15);

    ellipse(103,29,340,160,20,15);

    ellipse(109,42,230,50,20,10);

    ellipse(66,46,163,340,31,17);



    //clouds 3

    ellipse(450,30,60,240,10,15);

    ellipse(475,20,345,165,20,15);

    ellipse(512,27,340,160,20,15);

    ellipse(518,42,230,50,20,10);

    ellipse(476,46,163,340,31,15);

}



void mountain()

{

    //m1

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,GREEN);

    line(0,150,100,75);

    line(100,75,200,150);

    //m2

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,GREEN);

    line(175,131,275,75);

    line(275,75,375,150);

    //m3

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,GREEN);

    line(350,131,450,75);

    line(450,75,550,150);

    //m4

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,GREEN);

    line(525,131,600,75);

    line(600,75,750,180);

    //ground

    line(0,150,750,150);

    floodfill(100,136,WHITE);

    floodfill(275,136,WHITE);

    floodfill(450,136,WHITE);

    floodfill(600,136,WHITE);

}





void sky()

{

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,LIGHTBLUE);

    floodfill(50,50,WHITE);

}





void sun()

{

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,RED);

    arc(524,112,0,173,30);

    floodfill(520,105,WHITE);

}


void mosque()
{
    setfillstyle(1,LIGHTGRAY);
    //arc(105,123,-35,220,4);
    //bar(99,125,111,128);
//wall
    setfillstyle (1,LIGHTGRAY);
    bar(16,160,114,208);
    bar(30,160,84,140);
    setfillstyle (1,DARKGRAY);
    bar(10,160,120,156);
    setfillstyle (9,DARKGRAY);
    bar(10,215,120,211);
//door
    setfillstyle(1,5);
    bar(24,208,44,180);
    bar(54,208,78,180);
}





void bigTree()

{

    setcolor(4);

    setfillstyle(SOLID_FILL,4);

    rectangle(46,330, 64,420);

    floodfill(47,331,4);

    setcolor(4);

    setfillstyle(SOLID_FILL,4);

    rectangle(52,307, 59,330);

    floodfill(53,308,4);

    setfillstyle(SOLID_FILL,4);

    bar(39,405,70,411);

    bar(41,400,69,406);

    bar(42,395,68,401);

    bar(43,390,67,396);

    bar(44,383,66,390);

    bar(45,378,65,383);

    bar(37,410,72,420);

    bar(35,417,74,423);

    bar(37,307,45,312);

    bar(38,312,46,316);

    bar(39,316,48,319);

    bar(40,319,48,321);

    bar(41,321,49,326);

    bar(42,326,49,331);

    bar(43,331,68,335);

    bar(44,335,67,339);

    bar(45,339,66,344);

    bar(67,307,74,312);

    bar(66,312,73,316);

    bar(65,316,72,320);

    bar(64,320,71,324);

    bar(63,324,70,328);

    bar(62,328,69,332);

    // leaf no 1

    setcolor(GREEN);

    circle(25, 320, 15);

    setfillstyle(SOLID_FILL,GREEN);

    floodfill(25,320, GREEN);

    //leaf no 2

    setcolor(GREEN);

    setfillstyle(SOLID_FILL,GREEN);

    circle(20, 299, 20);

    floodfill(20,299, GREEN);

    //leaf no 3

    setcolor(GREEN);

    setfillstyle(SOLID_FILL,GREEN);

    circle(28, 271, 20);

    floodfill(28,271, GREEN);

    //leaf no 4

    setcolor(GREEN);

    setfillstyle(SOLID_FILL,GREEN);

    circle(41, 247, 18);

    floodfill(41,247, GREEN);

    //leaf no 8

    setcolor(GREEN);

    circle(88, 320, 15);  //pata number 1

    setfillstyle(SOLID_FILL,GREEN);

    floodfill(88,320, GREEN);

    //leaf no 7

    setcolor(GREEN);

    setfillstyle(SOLID_FILL,GREEN);

    circle(97,305,16);

    floodfill(97,305, GREEN);

    //leaf no 6

    setcolor(GREEN);

    setfillstyle(SOLID_FILL,GREEN);

    circle(100, 280, 22);

    floodfill(100,280, GREEN);

    //leaf no 5

    setcolor(GREEN);

    setfillstyle(SOLID_FILL,GREEN);

    circle(95, 252, 17);

    floodfill(95,253, GREEN);

    //leaf no 4

    setcolor(GREEN);

    setfillstyle(SOLID_FILL,GREEN);

    circle(70, 241, 19);

    floodfill(70,241, GREEN);

    //leaf middle

    setcolor(GREEN);

    setfillstyle(SOLID_FILL,GREEN);

    circle(60, 270, 35);

    bar(20,310,90,290);

    floodfill(60,270, GREEN);

}



void house_1()

{

    //triangle-tin

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,8);

    line(88+q,400-p,163+q,400-p);

    line(100+q,370-p,88+q,400-p);

    line(100+q,370-p,112+q,400-p);

    line(100+q,370-p,150+q,370-p);

    line(150+q,370-p,163+q,400-p);

    floodfill(100+q,375-p,WHITE);

    //main-tin

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,LIGHTGRAY);

    line(88+q,400-p,163+q,400-p);

    line(100+q,370-p,112+q,400-p);

    line(100+q,370-p,150+q,370-p);

    line(150+q,370-p,163+q,400-p);

    floodfill(105+q,375-p,WHITE);

    //Side-wall

    setcolor(WHITE);

  setfillstyle(SOLID_FILL,9);

    line(112+q,400-p,112+q,440-p);

    line(88+q,440-p,112+q,440-p);

    line(88+q,400-p,88+q,440-p);

    line(112+q,440-p,163+q,440-p);

    floodfill(90+q,402-p,WHITE);

    //main-wall

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,9);

    line(163+q,400-p,163+q,440-p);

    line(112+q,440-p,163+q,440-p);

    line(112+q,400-p,112+q,440-p);

    line(88+q,400-p,163+q,400-p);

    floodfill(115+q,405-p,WHITE);

    //window 1

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,8);
    line(120+q,415-p,130+q,415-p);

    line(120+q,415-p,120+q,427-p);

    line(120+q,427-p,130+q,427-p);

    line(130+q,415-p,130+q,427-p);

    floodfill(125+q,420-p,WHITE);

    //window 2

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,8);

    line(120+w+q,415-p,130+w+q,415-p);

    line(120+w+q,415-p,120+w+q,427-p);

    line(120+w+q,427-p,130+w+q,427-p);

    line(130+w+q,415-p,130+w+q,427-p);

    floodfill(125+w+q,421-p,WHITE);

    //door

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,8);

    line(94+q,440-p,94+q,420-p);

    line(106+q,440-p,106+q,420-p);

    line(94+q,420-p,106+q,420-p);

    floodfill(97+q,435-p,WHITE);

}



void house_2()

{

    //triangle-tin

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,LIGHTGRAY);

    line(88+a,400+b,163+a,400+b);

    line(100+a,370+b,88+a,400+b);

    line(100+a,370+b,112+a,400+b);

    line(100+a,370+b,150+a,370+b);

    line(150+a,370+b,163+a,400+b);

    floodfill(100+a,375+b,WHITE);

    //main-tin

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,8);

    line(88+a,400+b,163+a,400+b);

    line(100+a,370+b,112+a,400+b);

    line(100+a,370+b,150+a,370+b);

    line(150+a,370+b,163+a,400+b);

    floodfill(105+a,375+b,WHITE);

    //side-Wall

    setcolor(WHITE);

   setfillstyle(SOLID_FILL,3);


    line(112+a,400+b,112+a,440+b);

    line(88+a,440+b,112+a,440+b);

    line(88+a,400+b,88+a,440+b);

    line(112+a,440+b,163+a,440+b);

    floodfill(90+a,402+b,WHITE);

    //main-wall

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,3);

    line(163+a,400+b,163+a,440+b);

    line(112+a,440+b,163+a,440+b);

    line(112+a,400+b,112+a,440+b);

    line(88+a,400+b,163+a,400+b);

    floodfill(115+a,405+b,WHITE);

    //window 1

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,LIGHTBLUE);

    line(120+a,415+b,130+a,415+b);

    line(120+a,415+b,120+a,427+b);

    line(120+a,427+b,130+a,427+b);

    line(130+a,415+b,130+a,427+b);

    floodfill(125+a,421+b,WHITE);

    //window 2

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,LIGHTBLUE);

    line(120+w+a,415+b,130+w+a,415+b);

    line(120+w+a,415+b,120+w+a,427+b);

    line(120+w+a,427+b,130+w+a,427+b);

    line(130+w+a,415+b,130+w+a,427+b);

    floodfill(125+w+a,421+b,WHITE);

    //door

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,LIGHTBLUE);

    line(94+a,440+b,94+a,420+b);

    line(106+a,440+b,106+a,420+b);

    line(94+a,420+b,106+a,420+b);

    floodfill(97+a,435+b,WHITE);

}













void car()

{



    setfillstyle(SOLID_FILL, BLACK);

    bar(32+i,j-16,86+i,j);

    bar(40+i,j-10,90+i,j);

    setcolor(LIGHTBLUE);

    setfillstyle(SOLID_FILL, RED);

    //body

    line(i,j + 23, i, j);

    line(i, j, 40 + i, j - 20);

    line(40 + i,j - 20, 80 + i, j- 20);

    line(80 + i, j - 20, 100 + i, j);

    line(100 + i, j, 120 + i, j);

    line(120 + i, j, 120 + i, j + 23);

    line(0 + i, j + 23, 18 + i, j + 23);

    arc(30 + i, j+ 23, 0, 180, 12);

    line(42 + i, j + 23, 78 + i, j + 23);

    arc(90 + i, j+ 23, 0, 180, 12);

    line(102 + i, j + 23, 120 + i, j + 23);

    line(28 + i, j, 43 + i, j- 15);

    line(43 + i, j - 15, 57 + i, j - 15);

    line(57 + i, j - 15, 57 + i, j);

    line(57 + i, j, 28 + i, j);

    line(62 + i, j - 15, 77 + i, j - 15);

    line(77 + i, j - 15, 92 + i, j);

    line(92 + i, j, 62 + i, j);

    line(62 + i, j, 62 + i, j - 15);

    floodfill(2 + i, j + 20, LIGHTBLUE);

    setcolor(LIGHTGRAY);

   setfillstyle(SOLID_FILL, 3);

    //Wheels



    circle(30 + i,j + 25, 9);

    circle(90 + i, j + 25, 9);
    setfillstyle(SOLID_FILL, LIGHTGRAY);

    //floodfill(30 + i, j + 25, LIGHTGREEN);

    //floodfill(90 + i, j + 25, LIGHTGREEN);



}







void school()

{

    //terrace

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,8);

    line(480+k,104+l,490+k,85+l);

    line(490+k,85+l,595+k,85+l);

    line(585+k,104+l,595+k,85+l);

    line(480+k,104+l,585+k,104+l);

    floodfill(592+k,87+l,WHITE);

    //side Wall

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,67);

    line(585+k,106+l,595+k,86+l);

    line(585+k,145+l,595+k,126+l);

    line(586+k,106+l,586+k,145+l);

    line(595+k,127+l,595+k,86+l);

    floodfill(589+k,128+l,WHITE);

    //wall

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,33);

    rectangle(480+k,105+l,585+k,145+l);

    floodfill(482+k,107+l,WHITE);

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,53);

    line(560+k,105+l,560+k,145+l);

    floodfill(562+k,107+l,WHITE);

    //door 1

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,5);

    rectangle(526+k+40,125+l,538+40+k,145+l);

    floodfill(530+k+40,130+l,WHITE);

    circle(536+k+40,138+l,1);

    //door 2

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,5);

    rectangle(526+k,125+l,538+k,145+l);

    floodfill(530+k,130+l,WHITE);

    circle(536+k,138+l,1);

    //window 2

    setcolor(WHITE);

    setfillstyle(1,LIGHTBLUE);

    rectangle(543+k,118+l,556+k,131+l);

    floodfill(545+k,122+l,WHITE);

    //door 2

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,5);

    rectangle(526-35+k,125+l,538-35+k,145+l);

    floodfill(530-35+k,130+l,WHITE);

    circle(536-35+k,138+l,1);

    //window 2

    setcolor(WHITE);

    setfillstyle(1,LIGHTBLUE);

    rectangle(543-35+k,118+l,556-35+k,131+l);

    floodfill(545-35+k,122+l,WHITE);

    setcolor(5);

    // outtextxy(480+k,75+l,"MRF School");

}










