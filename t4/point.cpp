#include <iostream>
#include <cmath>
#include <cstdlib>

class Point {
private:
   double x;
   double y;
public:
   Point() {
      x = y = 0.0;
   }
   Point(double x1, double y1) {
      x = x1;
      y = y1;
      std::cout<<"Ponto: ("<<x<<", "<<y<<")"<<	std::endl;
   }
   void move(double dx, double dy){
      x = x + dx;
      y = y + dy;
   }
   double distanceTo(Point* p1, Point* p2){
   	std::cout<<"Distancia entre p1 e p2 eh: ";
	return std::sqrt(((p1->x - p2->x)*(p1->x - p2->x))+((p1->y - p2->y))*(p1->y - p2->y));
   }
};

int main(){

	Point p = Point(0,0);
	Point *p1[5];
	int i;
	for (i=0; i<5; i++){
	  p1[i] = new Point(std::rand()%20, std::rand()%20);
	}
	for (i=0; i<5; i++){
	  std::cout<< p.distanceTo(&p, p1[i]) << std::endl;
	}
	for (i=4; i>=0; i--){
	  free(p1[i]);
	}
}
