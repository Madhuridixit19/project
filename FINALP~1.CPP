#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<process.h>
#include<dos.h>
#include<stdlib.h>
void taj()
{
int h=40;
delay(100);
line (0,440,639,440);
delay(100);
//##################################CONSTRUCTION OF TOWER-1#####################################

int l=-20;
delay(100);
line(28+l,400+h,33+l,333+h);
delay(100);
line(86+l,400+h,80+l,333+h);
delay(100);
//############### 1st STAGE ######################


line(23+l,328+h,32+l,334+h);
delay(100);
line(90+l,328+h,80+l,334+h);
delay(100);
line(83+l,323+h,75+l,334+h);
delay(100);
line(75+l,323+h,70+l,332+h);
delay(100);
line(66+l,323+h,65+l,332+h);
delay(100);
line(57+l,323+h,57+l,332+h);
delay(100);
line(30+l,323+h,39+l,334+h);
delay(100);
line(38+l,323+h,45+l,332+h);
delay(100);
line(48+l,323+h,51+l,332+h);
delay(100);
ellipse(57+l,320+h,350,190,34,5);
delay(100);
ellipse(57+l,327+h,350,190,34,5);
delay(100);
ellipse(57+l,337+h,0,180,24,5);
delay(100);
line(22+l,320+h,22+l,328+h);
delay(100);
line(91+l,320+h,91+l,327+h);
delay(100);
setfillstyle(6,WHITE);
delay(100);
floodfill(60+l,320+h,15);
delay(100);
setfillstyle(1,WHITE);
delay(100);
floodfill(60+l,320+h+15,15);
delay(100);
//######################## 2ND STAGE ##########################


line(35+l,315+h,38+l,242+h);
delay(100);
line(80+l,315+h,75+l,242+h);
delay(100);
int t=-93;
delay(100);
line(23+4+l,328+t+3+h,32+5+l,334+t+h);
delay(100);
line(88+l,328+t+2+h,76+l,334+t+h);
delay(100);
line(78+l,323+t+3+h,71+l,332+t+h);
delay(100);
line(66+l,323+t+2+h,65+l,332+t+h);
delay(100);
line(57+l,323+t+2+h,57+l,332+t-2+h);
delay(100);
line(35+l,323+t+3+h,45-3+l,332+t+h);
delay(100);
line(48+l,323+t+2+h,51+l,332+t-2+h);
delay(100);
ellipse(57+l,320+t+3+h,360,190,30,5);
delay(100);
ellipse(57+l,327+t+3+h,360,190,30,5);
delay(100);
ellipse(57+l,337+t-1+h,0,180,18,5);
delay(100);
line(26+l,320+t+3+h,26+l,328+t+2+h);
delay(100);
line(88+l,320+t+3+h,88+l,327+t+3+h);
delay(100);
setfillstyle(6,WHITE);
delay(100);
floodfill(60+l,320+h+t,15);
delay(100);

setfillstyle(1,WHITE);
delay(100);
floodfill(60+l,320+h-35,15);
delay(100);

//########################### 3rd STAGE ##############################


line(38+l,225+h,41+l,152+h);
delay(100);
line(75+l,225+h,72+l,152+h);
delay(100);

t=-182;

line(32+l,328+t+4+h,32+7+l,334+t+h);
delay(100);
line(80+l,328+t+4+h,73+l,334+t+h);
delay(100);
line(76+l,323+t+5+h,71+l,332+t+h);
delay(100);
line(66+l,323+t+4+h,65+l,332+t+h);
delay(100);
line(57+l,323+t+4+h,57+l,332+t-2+h);
delay(100);
line(39+l,323+t+6+h,45+l,332+t+1+h);
delay(100);
line(48+l,323+t+4+h,51+l,332+t+h);
delay(100);
ellipse(57+l,320+t+5+h,360,190,24,5);
delay(100);
ellipse(57+l,327+t+4+h,360,190,24,5);
delay(100);
ellipse(57+l,337+t-1+h,0,170,16,5);
delay(100);
line(32+l,320+t+6+h,32+l,328+t+3+h);
delay(100);
line(81+l,320+t+6+h,81+l,327+t+3+h);
delay(100);
setfillstyle(6,WHITE);
delay(100);
floodfill(60+l,322+h+t,15);
delay(100);
setfillstyle(1,WHITE);
delay(100);
floodfill(60+l,322+h+t+30,15);
delay(100);
ellipse(51+l,132+h,340,216,4,15);
delay(100);
ellipse(62+l,131+h,327,216,4,15);
delay(100);
ellipse(72+l,132+h,327,216,2,15);
delay(100);
ellipse(42+l,132+h,327,216,2,15);
delay(100);
ellipse(57+l,107+h,0,170,18,5);
delay(100);
line(40+l,107+h,40+l,140+h);
delay(100);
line(75+l,107+h,75+l,140+h);
delay(100);
line(34+l,107+h,40+l,107+h);
delay(100);
line(75+l,107+h,81+l,107+h);
delay(100);
line(34+l,107+h,28+l,102+h);
delay(100);
line(81+l,107+h,87+l,102+h);
delay(100);
line(28+l,102+h,34+l,98+h);
delay(100);
line(87+l,102+h,81+l,98+h);
delay(100);
line(34+l,98+h,58+l,95+h);
delay(100);
line(58+l,95+h,81+l,98+h);
delay(100);

//##########################~~~~TOMB~~~~##################################
ellipse(65+l,92+h,104,190,30,30);
delay(100);
ellipse(50+l,92+h,350,76,30,30);
delay(100);
line(58+l,61+h,58+l,63+h);
delay(100);
circle(58+l,58+h,3);
delay(100);
line(58+l,55+h,58+l,53+h);
delay(100);
circle(58+l,50+h,2);
delay(100);
line(58+l,48+h,58+l,47+h);
delay(100);
circle(58+l,45+h,1);
delay(100);
line(58+l,44+h,58+l,42+h);
delay(100);
setfillstyle(1,WHITE);
delay(100);
floodfill(60+l-2,322+h+t-60,15);
delay(100);
setfillstyle(1,WHITE);
delay(100);
floodfill(60+l-2,322+h+t-30,15);
delay(100);
//##########################~~~~TOWER COMPLETED~~~~#################################

l=547;

//###########################~~~~CONSTRUCTION OF SECOND TOWER~~~~###################

line(28+l,400+h,33+l,333+h);
delay(100);
line(86+l,400+h,80+l,333+h);
delay(100);
line(23+l,328+h,32+l,334+h);
delay(100);
//########################## 1st STAGE ###########################

delay(100);
line(90+l,328+h,80+l,334+h);
delay(100);
line(83+l,323+h,75+l,334+h);
delay(100);
line(75+l,323+h,70+l,332+h);
delay(100);
line(66+l,323+h,65+l,332+h);
delay(100);
line(57+l,323+h,57+l,332+h);
delay(100);
line(30+l,323+h,39+l,334+h);
delay(100);
line(38+l,323+h,45+l,332+h);
delay(100);
line(48+l,323+h,51+l,332+h);
delay(100);
ellipse(57+l,320+h,350,190,34,5);
delay(100);
ellipse(57+l,327+h,350,190,34,5);
delay(100);
ellipse(57+l,337+h,0,180,24,5);
delay(100);
line(22+l,320+h,22+l,328+h);
delay(100);
line(91+l,320+h,91+l,327+h);
delay(100);
setfillstyle(6,WHITE);
delay(100);
floodfill(60+l,320+h,15);
delay(100);
setfillstyle(1,WHITE);
delay(100);
floodfill(60+l,320+h+15,15);
delay(100);
//################################### 2nd STAGE ###############################


line(35+l,315+h,38+l,242+h);
delay(100);
line(80+l,315+h,75+l,242+h);
delay(100);
t=-93;
line(23+4+l,328+t+3+h,32+5+l,334+t+h);
delay(100);
line(88+l,328+t+2+h,76+l,334+t+h);
delay(100);
line(78+l,323+t+3+h,71+l,332+t+h);
delay(100);
line(66+l,323+t+2+h,65+l,332+t+h);
delay(100);
line(57+l,323+t+2+h,57+l,332+t-2+h);
delay(100);
line(35+l,323+t+3+h,45-3+l,332+t+h);
delay(100);
line(48+l,323+t+2+h,51+l,332+t-2+h);
delay(100);
ellipse(57+l,320+t+3+h,360,190,30,5);
delay(100);
ellipse(57+l,327+t+3+h,360,190,30,5);
delay(100);
ellipse(57+l,337+t-1+h,0,180,18,5);
delay(100);
line(26+l,320+t+3+h,26+l,328+t+2+h);
delay(100);
line(88+l,320+t+3+h,88+l,327+t+3+h);
delay(100);
setfillstyle(6,WHITE);
delay(100);
floodfill(60+l,320+h+t,15);
delay(100);
setfillstyle(1,WHITE);
delay(100);
floodfill(60+l,320+h-35,15);
delay(100);

//######################################### 3rd STAGE ###################################

line(38+l,225+h,41+l,152+h);
delay(100);
line(75+l,225+h,72+l,152+h);
delay(100);
t=-182;


line(32+l,328+t+4+h,32+7+l,334+t+h);
delay(100);
line(80+l,328+t+4+h,73+l,334+t+h);
delay(100);
line(76+l,323+t+5+h,71+l,332+t+h);
delay(100);
line(66+l,323+t+4+h,65+l,332+t+h);
delay(100);
line(57+l,323+t+4+h,57+l,332+t-2+h);
delay(100);
line(39+l,323+t+6+h,45+l,332+t+1+h);
delay(100);
line(48+l,323+t+4+h,51+l,332+t+h);
delay(100);
ellipse(57+l,320+t+5+h,360,190,24,5);
delay(100);
ellipse(57+l,327+t+4+h,360,190,24,5);
delay(100);
ellipse(57+l,337+t-1+h,0,170,16,5);
delay(100);
line(32+l,320+t+6+h,32+l,328+t+3+h);
delay(100);
line(81+l,320+t+6+h,81+l,327+t+3+h);
delay(100);
setfillstyle(6,WHITE);
delay(100);
floodfill(60+l,322+h+t,15);
delay(100);
setfillstyle(1,WHITE);
delay(100);
floodfill(60+l,322+h+t+30,15);
delay(100);
ellipse(51+l,132+h,340,216,4,15);
delay(100);
ellipse(62+l,131+h,327,216,4,15);
delay(100);
ellipse(72+l,132+h,327,216,2,15);
delay(100);
ellipse(42+l,132+h,327,216,2,15);
delay(100);
ellipse(57+l,107+h,0,170,18,5);
delay(100);
line(40+l,107+h,40+l,140+h);
delay(100);
line(75+l,107+h,75+l,140+h);
delay(100);
line(34+l,107+h,40+l,107+h);
delay(100);
line(75+l,107+h,81+l,107+h);
delay(100);
line(34+l,107+h,28+l,102+h);
delay(100);
line(81+l,107+h,87+l,102+h);
delay(100);
line(28+l,102+h,34+l,98+h);
delay(100);
line(87+l,102+h,81+l,98+h);
delay(100);
line(34+l,98+h,58+l,95+h);
delay(100);
line(58+l,95+h,81+l,98+h);
delay(100);
//##########################~~~~TOMB~~~~########################


ellipse(65+l,92+h,104,190,30,30);
delay(100);
ellipse(50+l,92+h,350,76,30,30);
delay(100);
line(58+l,61+h,58+l,63+h);
delay(100);
circle(58+l,58+h,3);
delay(100);
line(58+l,55+h,58+l,53+h);
delay(100);
circle(58+l,50+h,2);
delay(100);
line(58+l,48+h,58+l,47+h);
delay(100);
circle(58+l,45+h,1);
delay(100);
line(58+l,44+h,58+l,42+h);
delay(100);
setfillstyle(1,WHITE);
delay(100);
floodfill(60+l-2,322+h+t-60,15);
delay(100);
setfillstyle(1,WHITE);
delay(100);
floodfill(60+l-2,322+h+t-30,15);

//##########################~~~~2ND TOWER COMPLETE~~~~########################


//############### TAJ MAHAL #################

rectangle(275,290,365,440);
delay(100);
rectangle(268,283,372,440);
delay(100);
setfillstyle(6,WHITE);
delay(100);
floodfill(274,294,15);
delay(100);
line(280,440,280,350);
delay(100);
ellipse(315,349,130,180,35,40);
delay(100);
ellipse(275,280,290,326,53,40);
delay(100);
line(360,440,360,350);
delay(100);
ellipse(325,349,360,50,35,40);
delay(100);
ellipse(361,280,216,255,53,40);
delay(100);
setfillstyle(9,WHITE);
delay(100);
floodfill(277,386,15);
delay(100);
line(280,360,359,360);
delay(100);
line(280,364,359,364);
delay(100);
setfillstyle(1,WHITE);
delay(100);
floodfill(281,362,15);
delay(100);
rectangle(295+4,370,345-4,440);
delay(100);
rectangle(292+4,367,348-4,440);
delay(100);
setfillstyle(1,WHITE);
delay(100);
floodfill(294+4,369,15);
delay(100);
line(302,405,302,440);
delay(100);
line(338,405,338,440);
delay(100);
ellipse(327,405,108,180,25,20);
delay(100);
ellipse(313,405,360,74,25,20);
delay(100);
line(329,390,329,440);
delay(100);
line(310,391,310,440);
delay(100);
line(311,402,329,402);
delay(100);
line(311,422,329,422);
delay(100);
line(302,412,310,412);
delay(100);
line(329,412,338,412);
delay(100);
line(302,428,310,428);
delay(100);
line(329,428,338,428);
delay(100);
int p=-60;

line(302,405+p,302,440+p-20);
delay(100);
line(338,405+p,338,440+p-20);
delay(100);
ellipse(327,405+p,108,180,25,20);
delay(100);
ellipse(313,405+p,360,74,25,20);
delay(100);
setfillstyle(7,WHITE);
delay(100);
floodfill(311,406,15);
delay(100);
line(329,390+p,329,440+p-20);
delay(100);
line(310,391+p,310,440+p-20);
delay(100);
line(311,402+p,329,402+p);
delay(100);
line(311,422+p-7,329,422+p-7);
delay(100);
line(302,412+p,310,412+p);
delay(100);
line(329,412+p,338,412+p);
delay(100);
//SECOND PORTION

rectangle(240,260,400,440);
delay(100);
rectangle(230,250,410,440);
delay(100);
rectangle(230,425,275,440);
delay(100);
setfillstyle(1,WHITE);
delay(100);
floodfill(231,426,15);
delay(100);
floodfill(249,426,15);
delay(100);
rectangle(230+135,425,275+135,440);
delay(100);
setfillstyle(1,WHITE);
delay(100);
floodfill(231+160,426,15);
delay(100);
floodfill(249+159,426,15);
delay(100);
line(420,245,420,440);
delay(100);
line(415,240,415,205);
delay(100);
line(420,240,420,205);
delay(100);
line(220,245,220,440);
delay(100);
line(220,240,220,205);
delay(100);
line(225,240,225,205);
delay(100);
line(215,240,425,240);
delay(100);
line(215,245,425,245);
delay(100);
ellipse(215,242.5,90,270,2.5,2.5);
delay(100);
ellipse(425,242.5,270,90,2.5,2.5);
delay(100);
rectangle(226,230,414,239);
delay(100);
ellipse(222,206,0,180,9,1);
delay(100);
ellipse(222,204,0,180,9,1);
delay(100);
ellipse(222,203,0,180,7,7);
delay(100);
ellipse(417,206,0,180,9,1);
delay(100);
ellipse(417,204,0,180,9,1);
delay(100);
ellipse(417,203,0,180,7,7);
delay(100);
line(222,195,222,192);
delay(100);
line(417,195,417,192);
delay(100);
int r=190;

ellipse(310,170,130,210,105,100);
delay(100);
ellipse(330,170,330,40,105,100);
delay(100);
ellipse(290,167,105,130,75,95);
delay(100);
ellipse(353,167,40,75,75,95);
delay(100);
ellipse(323,80,350,190,60,8);
delay(100);
ellipse(323,77,350,190,60,8);
delay(100);
ellipse(240,24,321,358,78,71);
delay(100);
ellipse(192,40,342,7,128,100);
delay(100);
ellipse(448,30,180,203,128,100);
delay(100);
ellipse(443,5,194,220,128,100);
delay(100);
ellipse(438,-9,203,234,128,100);
delay(100);
ellipse(198,-6,310,340,128,100);
delay(100);
ellipse(319,30,0,360,7,2);
delay(100);
floodfill(320,29,15);
delay(100);
circle(319,24,3);
delay(100);
line(319,20,319,18);
delay(100);
circle(319,14,4);
delay(300);
line(319,9,319,4);
delay(100);
ellipse(315,258,44,130,140,50);
ellipse(315,255,44,130,140,50);
ellipse(325,241,53,133,140,50);
ellipse(325,238,53,133,140,50);
delay(100);
setfillstyle(1,WHITE);
delay(100);
floodfill(322,160,15);
delay(100);
setfillstyle(6,15);
delay(100);
floodfill(322,193,15);
delay(100);
rectangle(150,283,220,294);
delay(100);
line(150,298,220,298);
delay(100);
line(150,240,150,440);
delay(100);
line(146,240,146,440);
delay(100);
r=-80;
int n=34;
ellipse(227+r,206+n,0,180,9,1);
delay(100);
ellipse(227+r,204+n,0,180,9,1);
delay(100);
ellipse(227+r,203+n,0,180,6,7);
delay(100);
line(227+r,195+n,227+r,192+n);
delay(100);
l=128;
h=150;

ellipse(51+l,132+h-7,340,216,4,15);
delay(100);
ellipse(62+l,131+h-7,327,216,4,15);
delay(100);
ellipse(72+l,132+h-7,327,216,2,15);
delay(100);
ellipse(42+l,132+h-7,327,216,2,15);
delay(100);
ellipse(57+l,107+h,0,170,18,5);
delay(100);
line(40+l,107+h,40+l,140+h-7);
delay(100);
line(75+l,107+h,75+l,140+h-7);
delay(100);
line(34+l,107+h,40+l,107+h);
delay(100);
line(75+l,107+h,81+l,107+h);
delay(100);
line(34+l,107+h,28+l,102+h);
delay(100);
line(81+l,107+h,87+l,102+h);
delay(100);
line(28+l,102+h,34+l,98+h);
delay(100);
line(87+l,102+h,81+l,98+h);
delay(100);
line(34+l,98+h,58+l,95+h);
delay(100);
line(58+l,95+h,81+l,98+h);
delay(100);
ellipse(65+l,92+h,104,190,30,30);
delay(100);
ellipse(50+l,92+h,350,76,30,30);
delay(100);
line(58+l,61+h,58+l,63+h);
delay(100);
circle(58+l,58+h,3);
delay(100);
line(58+l,55+h,58+l,53+h);
delay(100);
circle(58+l,50+h,2);
delay(100);
line(58+l,48+h,58+l,47+h);
delay(100);
circle(58+l,45+h,1);
delay(100);
line(58+l,44+h,58+l,41+h);
delay(100);
line(100-5,240+15,100-5,440);
delay(100);
line(96-5,240+15,96-5,440);
delay(100);
r=-134;
n=49;
ellipse(227+r,206+n,0,180,9,1);
delay(100);
ellipse(227+r,204+n,0,180,9,1);
delay(100);
ellipse(227+r,203+n,0,180,6,7);
delay(100);
line(227+r,195+n,227+r,192+n);
delay(100);
line(146,294,95,302);
delay(100);
line(146,298,95,306);
delay(100);
line(146,283,95,291);
delay(100);
///////////////inner ////////////////////////

rectangle(155,302,220,364);
delay(100);
rectangle(155,302+70,220,364+75);
delay(100);
int q=-123;
int d=-2;
line(292+q-5,405+d,292+q-5,440+d);
delay(100);
line(328+q+5,405+d,328+q+5,440+d);
delay(100);
ellipse(310+q,410+d,9,180,23,25);
delay(100);
d=-77;
line(292+q-5,405+d,292+q-5,440+d);
delay(100);
line(328+q+5,405+d,328+q+5,440+d);
delay(100);
ellipse(310+q,410+d,9,180,23,25);
delay(100);
setfillstyle(1,15);
delay(100);
floodfill(163,330,15);
delay(100);
floodfill(160,380,15);
delay(100);
line(141,305,141,360);
delay(100);
line(101,310,101,365);
delay(100);
line(141,305,101,310);
delay(100);
line(141,360,101,365);
delay(100);
int x=70;
line(141,370+x,141,375);
delay(100);
line(101,370+x,101,380);
delay(100);
line(141,305+x,101,310+x);
delay(100);
q=-200;
line(302+q+4,405+d,302+q+4,440+d);
delay(100);
line(338+q-1,405+d,338+q-1,440+d-2);
delay(100);
ellipse(327+q,405+d,105,180,20,15);
delay(100);
ellipse(313+q+4,405+d,360,80,20,15);
delay(100);
d=1;
line(302+q+4,405+d,302+q+4,440+d-2);
delay(100);
line(338+q-1,405+d,338+q-1,440+d-2);
delay(100);
ellipse(327+q,405+d,105,180,20,15);
delay(100);
ellipse(313+q+4,405+d,360,80,20,15);
delay(100);
setfillstyle(1,WHITE);
delay(100);
rectangle(178,364,198,340);
delay(100);
setfillstyle(7,WHITE);
delay(100);
floodfill(179,416-75+1,15);
delay(100);
line(130-3,417,130-3,440);
delay(100);
line(113+3,420,113+3,440);
delay(100);
line(113+3,420,130-3,417);
delay(100);
setfillstyle(7,WHITE);
delay(100);
floodfill(114+3,423,15);
delay(100);
int a=-76;

line(130-3,417+a,130-3,440+a-3);
delay(100);
line(113+3,420+a,113+3,440+a-1);
delay(100);
line(113+3,420+a,130-3,417+a);
delay(100);
floodfill(114+3,423+a,15);
delay(100);
line(10,500+h,615,400+h);
delay(100);
//###############################RIGHT######################################
int e=270;

rectangle(150+e,283,226+e,294);
delay(100);
line(146+e+4,298,225+e,298);
delay(100);
line(150+e+80,240,150+e+80,440);
delay(100);
line(146+e+80,240,146+e+80,440);
delay(100);
line(225+e+5,299,282+e,305);
delay(100);
line(227+e+3,295,282+e,302);
delay(100);
line(227+e+3,285,282+e,292);
delay(100);
l=400;
h=149;
ellipse(51+l,132+h-7,340,216,4,15);
delay(100);
ellipse(62+l,131+h-7,327,216,4,15);
delay(100);
ellipse(72+l,132+h-7,327,216,2,15);
delay(100);
ellipse(42+l,132+h-7,327,216,2,15);
delay(100);
ellipse(57+l,107+h,0,170,18,5);
delay(100);
line(40+l,107+h,40+l,140+h-7);
delay(100);
line(75+l,107+h,75+l,140+h-7);
delay(100);
line(34+l,107+h,40+l,107+h);
delay(100);
line(75+l,107+h,81+l,107+h);
delay(100);
line(34+l,107+h,28+l,102+h);
delay(100);
line(81+l,107+h,87+l,102+h);
delay(100);
line(28+l,102+h,34+l,98+h);
delay(100);
line(87+l,102+h,81+l,98+h);
delay(100);
line(34+l,98+h,58+l,95+h);
delay(100);
line(58+l,95+h,81+l,98+h);
delay(100);
ellipse(65+l,92+h,104,190,30,30);
delay(100);
ellipse(50+l,92+h,350,76,30,30);
delay(100);
line(58+l,61+h,58+l,63+h);
delay(100);
circle(58+l,58+h,3);
delay(100);
line(58+l,55+h,58+l,53+h);
delay(100);
circle(58+l,50+h,2);
delay(100);
line(58+l,48+h,58+l,47+h);
delay(100);
circle(58+l,45+h,1);
delay(100);
line(58+l,44+h,58+l,41+h);
delay(100);
r=270;
n=n-15;

ellipse(227+r,206+n,0,180,9,1);
delay(100);
ellipse(227+r,204+n,0,180,9,1);
delay(100);
ellipse(227+r,203+n,0,180,6,7);
delay(100);
line(227+r,195+n,227+r,192+n);
delay(100);
///////////////inner ////////////////////////

rectangle(490,302,430,364);
delay(100);
rectangle(490,302+70,430,364+75);
delay(100);
q=147;
d=-2;
line(296+q-5,405+d,296+q-5,440+d);
delay(100);
line(330+q+5,405+d,330+q+5,440+d);
delay(100);
ellipse(313+q,410+d,9,180,23,25);
delay(100);
d=-77;
line(296+q-5,405+d,296+q-5,440+d);
delay(100);
line(330+q+5,405+d,330+q+5,440+d);
delay(100);
ellipse(313+q,410+d,9,180,23,25);
delay(100);
setfillstyle(1,15);
delay(100);
floodfill(105,355,15);
delay(100);
floodfill(435,355,15);
delay(100);
e=e-15;
line(141+e+150,305+5,141+e+150,365);
delay(100);
line(101+e+150,310-5,101+e+150,365-5);
delay(100);
line(101+e+150,305,141+e+150,310);
delay(100);
line(101+e+150,360,141+e+150,365);
delay(100);
q=204;

line(302+q+4,405+d,302+q+4,440+d-2);
delay(100);
line(338+q-1,405+d,338+q-1,440+d+2);
delay(100);
ellipse(327+q,405+d,105,180,20,15);
delay(100);
ellipse(313+q+4,405+d,360,80,20,15);
delay(100);
setfillstyle(1,WHITE);
delay(100);
floodfill(140+e+147,359,15);
delay(100);
rectangle(178,415,197,439);
delay(100);
setfillstyle(7,WHITE);
delay(100);
floodfill(179,416,15);
delay(100);
e=255;


int v=75;

line(141+e+150,305+5+v-5,141+e+150,440);
delay(100);
line(101+e+150,310-5+v-5,101+e+150,440);
delay(100);
line(101+e+150,305+v-5,141+e+150,310+v-5);
delay(100);
d=0;
n=40;
line(302+q+4,405+d,302+q+4,440+d-1);
delay(100);
line(338+q-1,405+d,338+q-1,440+d);
delay(100);
ellipse(327+q,405+d,105,180,20,15);
delay(100);
ellipse(313+q+4,405+d,360,80,20,15);
delay(100);
setfillstyle(1,WHITE);
delay(100);
floodfill(200+e+53,435,15);
delay(100);
e=e+18;

rectangle(178+e,415,197+e,439);
delay(100);
setfillstyle(7,WHITE);
delay(100);
floodfill(179+e,416,15);
delay(100);
int f=-75;

rectangle(178+e,415+f,197+e,439+f);
delay(100);
setfillstyle(7,WHITE);
delay(100);
floodfill(179+e,416+f,15);
delay(100);
e+=130;

line(130-3+e,440+a-2,130-3+e,417+a+2);
delay(100);
line(113+3+e,440+a-2,113+3+e,420+a-2);
delay(100);
line(113+3+e,417+a,130-3+e,420+a);
delay(100);
floodfill(114+3+e,425+a,15);
delay(100);
a=1;

line(130-3+e,440+a-2,130-3+e,417+a+2);
delay(100);
line(113+3+e,440+a-2,113+3+e,420+a-2);
delay(100);
line(113+3+e,417+a,130-3+e,420+a);
delay(100);
line(113+3+e,440,130-3+e,440);
delay(100);
floodfill(114+3+e,423+a,15);
delay(100);
line(344+q+4,440,344+q+4,250);
delay(100);
line(348+q+4,440,348+q+4,250);
delay(100);
r=327;
n=44;
ellipse(227+r,206+n,0,180,9,1);
delay(100);
ellipse(227+r,204+n,0,180,9,1);
delay(100);
ellipse(227+r,203+n,0,180,6,7);
delay(100);
line(227+r,195+n,227+r,192+n);
delay(100);
setfillstyle(9,WHITE);
delay(100);
floodfill(110,294,15);
delay(100);
floodfill(210,290,15);
delay(100);
floodfill(430,290,15);
delay(100);
floodfill(520,290,15);
delay(100);
setfillstyle(1,WHITE);
delay(100);
floodfill(93,394,15);
delay(100);
floodfill(148,394,15);
delay(100);
floodfill(135,390,15);
delay(100);
floodfill(435,390,15);
delay(100);
floodfill(498,394,15);
delay(100);
floodfill(553,394,15);
delay(100);
setfillstyle(1,WHITE);
delay(100);
floodfill(185,224,15);
delay(100);
floodfill(465,224,15);
delay(100);
settextstyle(7,0,1);
outtextxy(245,450,"BY: MADHURI DIXIT");

}
void main()
{
int gdriver=DETECT,gmode,errorcode;
initgraph(&gdriver,&gmode,"..//bgi");
taj();
getch();
}