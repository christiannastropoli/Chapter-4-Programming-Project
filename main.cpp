#include <iostream>
#include <cmath>
using namespace std;
double theRate (double weight) {
  if (weight <= 2) 
    return 1.10;
  else if (weight <= 6)
    return 2.20;
  else if (weight <= 10)
    return 3.70;
  else
    return 4.80;
}
int main () {
  double weight;
  int distance;

  cout << "enter weight of the package in kilograms: ";
  cin >> weight;

  while (weight <= 0 || weight > 20) {
    cout << "invalid weight. please enter a weight more than 0 and less than 20: ";
    cin >> weight;
  }

  cout << "enter distance in miles: ";
  cin >> distance;

  int segment = ceil(distance / 500.0);
  double rate = theRate(weight);
  double totalCharge = rate * segment;

  cout << "total shipping charge: $" << totalCharge << endl;
  return 0;
}