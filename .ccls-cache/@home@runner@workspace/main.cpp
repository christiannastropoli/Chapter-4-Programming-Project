#include <iostream>

using namespace std;

bool LeapYear(int year) {
  if (year % 100 == 0) {
    return year % 400 == 0;
  }
  else {
    return year % 4 == 0;
  }
}
int DaysMonth(int month, int year) {
  if ( month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    return 31;
  if ( month == 4 || month == 6 || month == 9 || month == 11)
    return 30;
  if (month == 2) {
    if (LeapYear(year))
      return 29;
    else
      return 28;
  }
  return 0;
}
int main() {
  int month, year;

  cout << "enter month please:";
  cin >> month;

  while (month < 1 || month > 12) {
    cout << "invalid month. try again:";
    cin >> month;
  }
  cout << "enter year please:";
  cin >> year;

  int days = DaysMonth(month, year);

  cout << days << " days" << endl;
  return 0;
}