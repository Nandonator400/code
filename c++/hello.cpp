#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!" << "\n" ;

  for (int i = 1; i<10000000; i++){
    if (i%77==0){
        cout << i << "\n";
    }
  }
  return 0;
} 