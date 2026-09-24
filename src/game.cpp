#include "config.h"
int main() 
{
int ball_angle=1;
int x=200;
int y=200;
int i = 255;
int radius = 20;
int vel = 1;
int left;
int right;
int bounce;
Color myCustomColor = {i,i,i,255};
Vector2 startPos = {200,0}; Vector2 endPos = {200,400};


 InitWindow(400, 400, "pong");


    SetTargetFPS(30);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BLACK);
DrawLineEx(startPos,endPos, 15, myCustomColor);
DrawCircle(x,y,radius, GRAY);

left = x-radius;
right = x+radius;

 x+=vel;
 if (right == 400){bounce = 1; vel= +vel;}
 if(bounce == 1){ball_angle=-ball_angle;}
if (ball_angle > 0){x+=ball_angle;y+=ball_angle;}
if (ball_angle < 0){x-=ball_angle;y-=ball_angle;}
void rgb_mode(){
i-=1; 
float frequency = (float)i / 100 * 2.0f * 3.14159265f;
myCustomColor.r = (int)(sin(frequency + 0.0f) * 127.5f + 127.5f);
myCustomColor.g = (int)(sin(frequency + 2.09439f) * 127.5f + 127.5f); 
myCustomColor.b = (int)(sin(frequency + 4.18879f) * 127.5f + 127.5f); 
myCustomColor.a = 255;
}
        EndDrawing(); // Display frame and handle timing
    }

    CloseWindow(); // Clean up window and OpenGL context
    return 0;
}
