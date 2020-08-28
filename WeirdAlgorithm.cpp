#include <iostream>
#include <bits/stdc++.h> 

using namespace std;
void weirdAlgo(long x);

int main() {
  long x;
  cin >> x;
  weirdAlgo(x);
}

void weirdAlgo(long x){
  cout << x << " ";
  while(x != 1){
    if(x % 2 == 0){
      x /= 2;
    } else {
      x = x * 3 + 1;
    }
    cout << x << " ";
  }

}