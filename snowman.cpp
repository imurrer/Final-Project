//snowman.cpp
//Bella Murrer and Hannah Sarkey

#include <iostream>
#include <math.h>
#include <cmath>
#include "snowman.h"
#include "gfx2.h"
using namespace std;

Snowman::Snowman() {
  //initial position and creation of of snowman
  xc1 = 250, yc1 = 200;
  xc2 = 250, yc2 = 215;
  xc3 = 250, yc3 = 233;
  r1 =7, r2 = 8, r3 = 10;
  rhatx = 238, rhaty = 189;
  sqhatx = 243, sqhaty = 179; 
}

Snowman::~Snowman() 
{}

void Snowman::display() {
  gfx_color(255, 255, 255);
  gfx_fill_circle(xc1, yc1, r1);
  gfx_fill_circle(xc2, yc2, r2);
  gfx_fill_circle(xc3, yc3, r3);
  // make black outline on snowman circles
  gfx_color(0,0,0);
  gfx_circle(xc1, yc1, r1);
  gfx_circle(xc2, yc2, r2);
  gfx_circle(xc3, yc3, r3);
  // make snowman hat
  gfx_color(42, 43, 96);
  gfx_fill_rectangle(rhatx, rhaty, 24, 4);
  gfx_fill_rectangle(sqhatx, sqhaty, 14, 14);
  
  float length = 30;
  float randx, randx, randa;
  for (int i= 0; i <5; i++) {
    randx = 10 + rand%690;
    randy = 275 + rand%690;
    randa = 30 + rand%90;
    maketrees(randx, randy, length, randa);
    i++
  }
}

float Snowman::maketrees(float randx, float randy, float lenght, float randa) {
  if (abs(length) < 1) return;
  gfx_line(randx, randy, randx+cos(angle)*length, randy+(-1)*sin(angle)*length);
  maketrees(randx+(length)*cos(randa), randy-(length)*sin(randa), length*0.65, angle+M_PI/6);
  maketrees(randx+(length)*cos(randa), randy-(length)*sin(randa), length*0.65, angle-M_PI/6);
}  


  
  
