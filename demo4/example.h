
#include <iostream>

class Shape {
protected:
  int width,height;
public:
  void setWidth(int w);
  void setHeight(int h);
};

class Rectangle:public Shape{
public:
    void printShape();
    int getArea();
};

