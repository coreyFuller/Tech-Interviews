#include <bits/stdc++.h>
using namespace std;





int main() {
  srand(time(0));

  int num = rand() % 100;
  cout << num << endl;
  if(num % 2 == 0)
    cout << "Fizz" << endl;
  if(num % 3 == 0)
    cout << "Buzz" << endl;
  if(num % 5 == 0)
    cout << "Fizz Buzz" << endl;
  return 0;
}
