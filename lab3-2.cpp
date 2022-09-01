#include <iostream>
using namespace std;

int main() {
  double fahrenheit_temp, celsius_temp;
  cout << "Degrees in Fahrenheit: ";
  cin >> fahrenheit_temp;

  celsius_temp = 5 * (fahrenheit_temp - 32) / 9;

  cout << "Degrees in Fahrenheit: " << fahrenheit_temp << "\n";

  cout << "Degrees in Celsius: " << celsius_temp << "\n";

  return 0;
}