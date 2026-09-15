#include <iostream>
using namespace std;
int main() 
{
processloop:
int ball_pong;
int BX=0;
int BY=0;
int directionRL;
int directionUD;
int ball_angle;
directionRL == 1; //move right
if (directionRL==1){BX++;}
if(directionRL==0){BX--;}
if (ball_angle<0){directionUD = 1;}//move down
if (directionUD==1){BY--;}
if (ball_angle>180){directionUD = 0;}//move up
if (directionUD==0){BY++;}

if (ball_pong==1){}

goto processloop;
}
