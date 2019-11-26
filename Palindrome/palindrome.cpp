#include <bits/stdc++.h>
using namespace std;


bool x = false;

bool is_palindrome(string test, int i, int j)
{
  if(i > j) return false;
  if(test[i] != test[j]) return false;
  x = true;
  x = is_palindrome(test, i + 1, j - 1);
  return true;
}

int main(int argc, char ** argv) {

  string word = "spouse";
  string temp1 = " ";
  string temp2 = " "; 
  int j = word.length() - 1;
  int i = 0; 

  if(is_palindrome(word, i, j)) cout << "Is a palindrome" << endl;
  else cout << "Not a palindrome." << endl;
  return 0;
}
