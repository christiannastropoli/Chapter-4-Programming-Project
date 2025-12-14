#include <iostream>
using namespace std;
const double pi = 3.14159265358979322846;

void showMenu();
double acircle(double radius);
double arectangle(double length, double width);
double atriangle(double base, double height);

int main() {
  int insert;
  double radius, length, width, base, height;
  showMenu();
  cout << "insert option: ";
  cin >> insert;

    if (insert < 1 || insert > 4) {
    cout << "invalid insert. please choose between 1 and 4." << endl;
    return 0;
    }
switch (insert) {
  case 1:
  cout << "enter radius of circle: ";
  cin >> radius;
  if ( radius < 0) {
    cout << "please only use positive values." << endl;
  }
  else {
    cout << "area of the circle: " << acircle(radius) << endl;
  }
break;
  case 2:
  cout << "enter length: " << endl;
  cin >> length;
  cout << "enter width: " << endl;
  cin >> width;
  if (length < 0 || width < 0) {
    cout << "please only use positive values." << endl;
  } else {
    cout << "area of the rectangle: " << arectangle(length, width) << endl;
  }
  break;
  case 3:
  cout << "enter base: " << endl;
  cin >> base;
  cout << "enter height: " << endl;
  cin >> height;
  if ( base < 0 || height < 0) {
    cout << "please only use positive values." << endl;
  } 
  else {
    cout << "area of the triangle: " << atriangle(base, height) << endl;
  }
  break;
  case 4:
  cout << "ending program." << endl;
  break;
  }
  return 0;
}

void showMenu() {
  cout << "calculating geometrical area!" << endl;
  cout << "1. circle" << endl;
  cout << "2. rectangle" << endl;
  cout << "3. triangle" << endl;
  cout << "4. terminate" << endl;
}

double acircle(double radius) {
  return pi * radius * radius;
}

double arectangle(double length, double width) {
  return length * width;
}

double atriangle(double base, double height) {
  return 0.5 * base * height;
}