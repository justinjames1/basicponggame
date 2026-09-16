#include <iostream>
using namespace std;
int main() 
{

processloop:
std::string ballmodel = "  ##\n ####\n  ##";

cout<<ballmodel;




int ball_pong;
int BX=0;
int BY=0;
int directionRL;
int directionUD;
int ball_angle;
directionRL == 1; //move right

if (ball_pong==1){
if(directionRL==1){directionRL=0;}
if(directionRL==0){directionRL=1;}
ball_angle=-ball_angle;
}

if (directionRL==1){BX++;}
if(directionRL==0){BX--;}

if (ball_angle<0){directionUD = 1;}//move down
if (directionUD==1){BY--;}
if (ball_angle>180){directionUD = 0;}//move up
if (directionUD==0){BY++;}

//renderer

//pong






//goto processloop;
}
