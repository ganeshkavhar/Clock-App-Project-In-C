Code :<br />
#include<stdio.h><br />
#include<conio.h><br />
#include<stdlib.h><br />
#include<graphics.h><br />
#include<dos.h><br />
#include<math.h><br />
void main()<br />
{<br />
 struct  time t;<br />
 void drawclock(void);<br />
 void intro(void);<br />
 void sound(void);<br />
 int gdriver=DETECT,gmode;<br />
 initgraph(&gdriver,&gmode,”D:\tc\bgi”);<br />
 int i,j,k,s,m,h;<br />
 intro();<br />
 settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);<br />
 drawclock();<br />
 gettime(&t);</p>
<p> if(t.ti_sec>15)<br />
   s=360-((t.ti_sec-15)*6);<br />
 else<br />
   s=90-(t.ti_sec*6);</p>
<p> if(t.ti_min>15)<br />
   m=360-((t.ti_min-15)*6);<br />
 else<br />
   m=90-(t.ti_min*6);</p>
<p> if( (t.ti_hour==0)||(t.ti_hour==1)||(t.ti_hour==2)||(t.ti_hour==3))<br />
    h=90-(t.ti_hour*30)-((t.ti_min/12)*6);<br />
 else if((t.ti_hour>=4)&&(t.ti_hour<=12))<br />
   h=360-((t.ti_hour-3)*30)-((t.ti_min/12)*6);<br />
 else if((t.ti_hour>=13)&&(t.ti_hour<=23))<br />
   h=360-((t.ti_hour-15)*30)-((t.ti_min/12)*6);<br />
 else// if(t.ti_hour==12)<br />
   h=90-((t.ti_hour-12)*30)-((t.ti_min/12)*6);</p>
<p> for(k=0;k<=12;k++)<br />
 {<br />
  if(h==0)<br />
   h=360;<br />
   delay(1000);<br />
   drawclock();<br />
   for(j=0;j<=60;j++)<br />
   {<br />
     if(m==0)<br />
       m=360;<br />
     setcolor(4);<br />
     sector(320,150,m,m+1,75,75);<br />
     m=m-6;<br />
     delay(1000);<br />
     drawclock();<br />
     for(i=0;i<=60;i++)<br />
     {<br />
     setcolor(4);<br />
     sector(320,150,h,h+3,60,60);<br />
       setcolor(4);<br />
       sector(320,150,m,m+1,75,75);<br />
	if(s==0)<br />
	  s=360;<br />
	  setcolor(1);<br />
	  sector(320,150,s,s+1,80,80);<br />
	sound();<br />
	s=s-6;<br />
	delay(1000);<br />
	drawclock();<br />
      if(kbhit())<br />
	exit(0);<br />
     }<br />
      setcolor(6);<br />
      sector(320,150,h,h+3,60,60);<br />
   }<br />
 }<br />
 getch();<br />
}<br />
void drawclock()<br />
{<br />
 cleardevice();<br />
 setbkcolor(15);<br />
 setcolor(1);<br />
 circle(320,150,80);<br />
 setcolor(5);<br />
 circle(320,150,95);<br />
 circle(320,150,1);<br />
 outtextxy(314,58,”12″);<br />
 outtextxy(268,70,”11″);<br />
 outtextxy(235,105,”10″);<br />
 outtextxy(233,147,”9″);<br />
 outtextxy(241,190,”8″);<br />
 outtextxy(273,225,”7″);<br />
 outtextxy(318,238,”6″);<br />
 outtextxy(362,225,”5″);<br />
 outtextxy(392,190,”4″);<br />
 outtextxy(403,147,”3″);<br />
 outtextxy(393,105,”2″);<br />
 outtextxy(361,70,”1″);<br />
 outtextxy(302,200,”TILAK”);<br />
}<br />
void intro()<br />
{<br />
 int i;<br />
 int u=installuserfont(“TSCR.CHR”);<br />
 settextstyle(u,0,7);<br />
 outtextxy(175,100,”TILAK’s”);<br />
 outtextxy(250,200,”CLOCK”);<br />
 settextstyle(TRIPLEX_FONT, HORIZ_DIR, 1);<br />
 outtextxy(380,400,”Loading..”);</p>
<p> for(i=0;i<510;i++)<br />
 {<br />
   setcolor(15);<br />
   rectangle(50,100,50+i,110);<br />
   delay(5);<br />
 }<br />
 settextstyle(TRIPLEX_FONT, HORIZ_DIR, 1);<br />
 outtextxy(380,400,”Loading….”);</p>
<p> for( i=0;i<510;i++)<br />
 {<br />
   setcolor(4);<br />
   rectangle(50,100,50+i,110);<br />
   delay(5);<br />
 }</p>
<p> settextstyle(TRIPLEX_FONT, HORIZ_DIR, 1);<br />
 outtextxy(380,400,”Loading……”);</p>
<p> for(i=0;i<510;i++)<br />
 {<br />
   setcolor(15);<br />
   rectangle(50,200,50+i,210);<br />
   delay(5);<br />
 }<br />
 settextstyle(TRIPLEX_FONT, HORIZ_DIR, 1);<br />
 outtextxy(380,400,”Loading……..”);</p>
<p> setfillstyle(SOLID_FILL,1);<br />
 fillellipse(320,205,6,6);<br />
 settextstyle(TRIPLEX_FONT, HORIZ_DIR, 1);<br />
 outtextxy(380,400,”Loading……….”);</p>
<p> for(i=0;i<510;i++)<br />
 {<br />
   setcolor(15);<br />
   rectangle(50,300,50+i,310);<br />
   delay(5);<br />
 }<br />
 settextstyle(TRIPLEX_FONT, HORIZ_DIR, 1);<br />
 outtextxy(380,400,”Loading…………”);</p>
<p> for( i=0;i<510;i++)<br />
 {<br />
   setcolor(2);<br />
   rectangle(50,300,50+i,310);<br />
   delay(5);<br />
 }<br />
 settextstyle(TRIPLEX_FONT, HORIZ_DIR, 1);<br />
 outtextxy(380,400,”Loading…………..”);<br />
 delay(1000);<br />
}<br />
void sound()<br />
{<br />
 sound(2000);<br />
 delay(100);<br />
 nosound();<br />
}</p>
<p>
