#include <iostream>
#include <thread>        
#include <chrono> 
using namespace std;
int main() 
{


std::string ballmodel = "O";
//miscdata

//renderer data
int HEIGHT = 40;
int WIDTH = 40;
int obj_y = 0;
int obj_x = 0;
int x = 0;
int y = 0;
//rde

int ball_pong=0;
int BX=20;
int BY=20;
int directionRL=0;
int directionUD=0;
int ball_angle=0;

obj_x = BX;
obj_y = BY;

directionRL = 1; //move right
processloop:
if (ball_pong==1){
if(directionRL==1){directionRL=0;}
if(directionRL==0){directionRL=1;}
ball_angle=-ball_angle;
}

if(directionRL==1){BX++;}
if(directionRL==0){BX--;}

if (ball_angle<0){directionUD = 1;}//move down
if (directionUD==1){BY- 10;}
if (ball_angle>180){directionUD = 0;}//move up
if (directionUD==0){BY+ 10;}
string h = ballmodel;
//renderer


   //ik this code below this comment was ai.
   //making the renderer was a fucking pain in the ass.
   //but i will replace it when i make the renderer this is a place holder.

  // Loop through every row (Y axis)
    for (int y = 0; y < HEIGHT; y++) {
        // Loop through every column (X axis)
        for (int x = 0; x < WIDTH; x++) {
            
            // Correct way to check both X and Y coordinates
            if (x == obj_x && y == obj_y) {
                std::cout <<h;
                
                // Skip the next character space since "hi" takes up 2 spaces
                x += h.length() - 1; 
            } else {
                std::cout << "."; // Using a dot instead of a space makes it easier to see the grid
            }
        }
        // Move to the next line after finishing a row
        std::cout <<"# \n";     
    }       
     //end of ai code.


//clock



goto processloop;

//pong







}
