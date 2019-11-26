#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int>Coord;
typedef unordered_set<int>Hash;
typedef set<pair<int, int> >Check;

bool two_sum(int target, int x, Hash &h);
void generate(vector<int> &v, Hash &h);
void printVec(vector<int> v);

int main(int argc, char * argv[]) {
  
  srand(time(0));
  vector<Coord>c;
  vector<int>v(0);
  Hash h;
  int target = rand() % 100;
  
  cout << "Target: " << target << endl << endl << endl;

  generate(v, h);
  printVec(v);
  
  cout << "Pair of numbers that who's sum is the target: " << endl << endl;
  for(unsigned int i = 0; i < v.size(); i++) {
      if(two_sum(target, v[i], h)){break;}
  }
  return 0;
}

bool two_sum(int target, int x, Hash &h) {
  
  Coord points;
  Check check;
    
  unordered_set<int>::iterator it = h.find(target - x);
  if(it != h.end() && *it != x){
     points.first = x; points.second = *it;
     check.insert(points);
        cout << "{" << x << "," << *it << "}" << endl;
        return true;
  }
  return false;
}

void generate(vector<int> &v, Hash &h){
    int num;
    for(int i = 0; i < rand() % 100 + 10; i++) {
    num = rand() % 100;
    while(h.find(num) != h.end()){
      num = rand() % 100;
    }   
    h.insert(num);
    v.push_back(num);
  }
}

void printVec(vector<int> v) {
    cout << "List: { ";
   for(unsigned int i = 0; i < v.size(); i++) {
     cout << v[i] << " ";
    }
   cout << "}" << endl << endl;
}