#include <iostream>
#include <string>

using namespace std;

int main() {
  
  string message = "Hello, world!";
  cout << "\n" << endl;
  int numbers[] = {1, 2, 3, 4, 5};

  cout << message << endl;
  for (int i = 0; i < 5; i++) {
    cout << numbers[i] << " ";
  }
  cout << endl;
  cout << "\n";

  return 0;
}
