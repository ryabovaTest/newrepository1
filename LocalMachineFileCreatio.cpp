/*this file is created on local machine*/
#include <iostream>
using namespace std;
int min(int x, int y) {
   if (x > y) return y;
   else return x;
}
int min4(int x, int y, int z, int w) {
  return min(min(x, y), min(z, w));
}
int main() {
  // put your code here
  int a,b,c,d;
  cin>> a>> b>> c>> d;
  cout << "This is new line";
  cout<<min4(a,b,c,d);
  return 0;
}
