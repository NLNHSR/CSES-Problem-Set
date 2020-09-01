#include <iostream>
#include <string>

using namespace std;

void even(int n, string& output){
  for(int i = 2; i <= n; i += 2){
    output += to_string(i) + " ";
  }
}
void odd(int n, string& output){
  for(int i = 1; i <=  n; i += 2){
    output += to_string(i) + " ";
  }
}
int main() {
  long n;
  cin >> n;
  string output = "";

  if(n % 2 == 0){
    even(n, output);
    odd(n, output);
  } else{
    odd(n, output);
    even(n, output);
  }
  
  cout << ((n > 3 || n == 1) ? output : "NO SOLUTION");
}