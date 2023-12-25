#include<iostream>

#include<conio.h>

#include<dos.h>

#include<stdlib.h>

#include<graphics.h>

void flood(int,int,int,int);
int main()

{

 int gd=DETECT,gm;
 initgraph(&gd,&gm,"c:\\tc\\bgi");

 rectangle(1,450,638,470);
 flood(6,456,10,0);
 line(10,450,12,380);
 line(40,450,38,380);
 line(9,380,41,380);
 line(9,375,41,375);
 ellipse(10,377,90,270,3,3);//to tiny
 flood(15,382,3,0);
//now
 ellipse(41,378,270,90,3,3);//too tiny
//flood(46,403,3,0);
 line(12,375,14,320);
 line(38,375,36,320);
   // ellipse(25,331,0,360,12,2.5);//too tiny
 line(11,320,39,320);
 line(11,315,39,315);
 ellipse(11,318,90,270,3,2);
 ellipse(39,318,270,90,3,2); //too tiny
 line(14,315,16,250);
 line(36,315,34,250);
      // ellipse(25,268,0,360,10,4);//too tiny not present
 ellipse(25,244,20,200,11,6);//tiny
 ellipse(25,245,200,10,11,6);//tiny
 line(17,239,17,227);
 line(33,239,33,227);
 line(14,227,37,227);
  // ellipse(14,224,90,270,3,3);//tiny

 ellipse(36,224,270,90,3,3);//tiny

 ellipse(25,220,0,180,10,13);

 line(25,207,25,197);

 //right

///start of right pool
 line(580,450,582,380);
 line(610,450,608,380);
 line(578,380,612,380);
 line(578,375,612,375);
 ellipse(579,377,90,270,3,3);
 flood(584,382,3,0);
 ellipse(612,378,270,90,3,3);
 //flood(617,383,3,0);
 line(582,375,584,320);
 line(608,375,606,320);
 line(581,320,611,320);
 line(581,315,611,315);
 ellipse(581,318,90,270,3,2);
 flood(586,323,3,0);
 ellipse(611,318,270,90,3,2);
  //flood(616,323,3,0);
 line(584,315,586,245);
 line(606,315,604,245);
 ellipse(25,268,0,360,10,4);
        //flood(30,273,3,0);
 ellipse(595,245,20,200,11,6);
 // flood(600,250,3,0);
 ellipse(595,246,200,10,11,6);
 flood(600,251,3,0);
 line(585,240,585,225);
 line(603,242,603,225);
 line(583,227,605,227);
 ellipse(583,224,90,270,3,3);
        //flood(588,229,3,0);
 ellipse(605,224,270,90,3,3);
  //flood(610,229,3,0);
 ellipse(594,220,0,180,10,13);
  //flood(599,225,3,0);
       line(593,207,593,197);
///end of right pool
       rectangle(245,340,345,450);
       flood(250,350,6,0);
       rectangle(235,330,355,450);
       line(263,390,263,450);
       flood(263,330,12,0);
       line(330,390,330,450);
       ellipse(297, 390,0,180,34,34);
       flood(303,395,12.9,0);
       rectangle(235,325,355,330);
       flood(240,335,2,0);
       line(235,317,235,325);
       line(354,317,354,325);//too much error line
       //ellipse(295,316,0,360,60,9); ////check me
        //flood(290,321,12,0);
//now
       ellipse(295,270, 320,220 ,75,75);
       flood(300,275,12,0);
       line(258,203,290,180);
       line(328,203,290,180);
       circle(290,178,3);
       flood(290,178,7,0);
       ellipse(290,168,0,360,2,6);
       ellipse(290,158,0,360,1,4);
       line(290,148,290,155);
///////////////////////check here
       rectangle(355,345,420,450);
       flood(360,350,3,0);
       line(460,363,460,450);
       line(416,345,460,363);
       line(397,397,370,397);
       line(370,397,370,366);
       line(397,397,397,366);
        //flood(370,397,2,0);
       ellipse(383,374,30,150,15,15);
       line(370,424,370,450);
       line(397,424,397,450);
       ellipse(383,432,30,150,15,15);
       line(430,397,450,397);
       line(450,397,450,376);
       line(430,397,430,376);
       ellipse(440,385,30,150,11,15);
       flood(445,390,3,0);
       line(450,424,450,450);
       line(430,424,430,450);
      ellipse(440,432,30,150,11,15);
         //flood(445,437,2,0);
       line(401,318,401,344);
       ellipse(378,327,40,135,34,12);
       flood(383,332,4,0);
       ////////flood(358,310,2,0); we tried it
       line(357,309,406,309);
 line(406,309,403,320);
 ellipse(383,334,30,89,24,50);
 flood(386,339,2,0);
 ellipse(381,338,85,120,26,55);
 line(383,274,382,282);
 line(383,274,385,284);
       //left
       rectangle(235,345,165,450);
       flood(240,350,2,0);
       line(125,363,125,450);
       line(165,345,125,363);
       line(185,397,211,397);
       line(185,397,185,366);
       line(213,397,211,366);
       ellipse(198,374,30,150,15,15);
       line(185,424,185,450);
       line(212,424,211,450);
///down
 ellipse(198,432,30,150,15,15);
 flood(203,437,3,0);
 line(135,397,155,397);
 line(135,397,135,376);
 line(155,397,155,376);
 ellipse(145,385,30,150,11,15);
 flood(150,390,3,0);
 line(135,424,135,450);
 line(155,424,155,450);
 ellipse(145,432,30,150,11,15);
 flood(150,437,3,0);
 line(189,318,189,344);
 ellipse(212,327,45,130,34,12);
 flood(217,332,4,0);
 line(187,309,230,309);
 line(187,309,190,318);

///go down

 ellipse(217,310,100,180,26,32);
 flood(222,315,2,0);
 ellipse(210,319,70,85,26,40);/////emotional
   //flood(215,324,3,0);
 line(212,270,209,280);
 line(212,270,215,280);
       //pool left
 line(112,450,110,415);
 line(84,450,86,415);
 line(83,415,113,415);
 line(83,410,113,410);
 ellipse(82,412,90,270,3,2); /////emotional
 flood(87,417,3,0);
 ellipse(113,412,270,90,3,2);/////emotional
  //flood(118,417,3,0);
 line(86,410,88,370);
 line(110,410,108,370);
 ellipse(25,331,0,360,12,2.5);
 flood(30,336,3,0);
 line(86,370,110,370);
 line(86,365,110,365);
 ellipse(86,368,90,270,3,2);
 flood(91,373,3,0);
/////now
 ellipse(110,368,270,90,3,2);
    //flood(115,373,3,0);
 line(88,365,90,335);
 line(108,365,106,330);
 ellipse(25,268,0,360,10,4);
 flood(30,273,3,0);
 ellipse(98,330,17,209,11,6);
    // flood(103,335,2,0);
 ellipse(98,330,200,10,11,6);
 flood(103,335,3,0);
 line(90,327,90,314);
 line(106,327,106,314);
 line(87,314,109,314);
 ellipse(87,311,90,270,3,3);
 flood(92,316,3,0);
 ellipse(109,311,270,95,3,3);
    // flood(114,316,14,0);
 ellipse(98,307,0,180,10,13);/////emotional
  //flood(103,312,3,0);
 line(98,295,98,284);

       // right

 line(474,450,475,420);
 line(500,450,498,420);
 line(472,415,500,415);
 line(472,420,500,420);
 ellipse(472,418,90,270,3,2);/////emotional
 flood(477,423,3,0);
 ellipse(500,418,270,90,3,2);/////emotional
 // flood(505,423,GREEN,0);
 line(475,415,477,375);
 line(498,415,496,375);
 ellipse(25,331,0,360,12,2.5);/////emotional
    // flood(33,336,3,0);
 line(474,374,499,374);
 line(474,370,499,370);
 ellipse(473,372,90,270,3,2);/////emotional
 flood(478,377,3,0);
 ellipse(499,372,270,90,3,2);/////emotional
   //flood(504,377,3,0);
 line(495,369,493,335);
 line(476,369,478,335);
 ellipse(25,268,0,360,10,4);/////emotional
   //flood(30,273,3,0);
 ellipse(485,334,10,200,11,6);/////emotional
  //flood(490,339,3,0);
 ellipse(485,334,200,10,11,6);/////emotional
 flood(490,339,3,0);
 line(478,329,478,314);
 line(492,329,492,314);
 //flood(490,327,3,0);
 line(496,314,474,314);
 ellipse(473,312,90,270,3,3);/////emotional
         //flood(478,317,3,0);
 ellipse(495,312,270,95,5,3);/////emotional
  // flood(500,317,3,0);///////check this at last
 ellipse(484,309,0,180,10,13);/////emotional
   //flood(489,314,3,0);
       line(484,295,484,284);
       settextstyle(4,0,7);
       outtextxy(90,70,"TAJ MAHAL");



 getch();

 closegraph();

 return(0);

}
void flood(int x, int y, int fillColor, int defaultColor){
          if(getpixel(x,y)==defaultColor)
          {
              //delay(50);
              putpixel(x,y,fillColor);
              flood(x+1,y,fillColor,defaultColor);
              flood(x-1,y,fillColor,defaultColor);
              flood(x,y+1,fillColor,defaultColor);
              flood(x,y-1,fillColor,defaultColor);
          }
}
