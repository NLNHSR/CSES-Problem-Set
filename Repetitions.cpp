#include <iostream>
#include <string>
#include <bits/stdc++.h> 

using namespace std;
int main() {
  long ac, cc, gc, tc, n; string input; 
  ac = cc = gc = tc = 0;
  cin >> input;
  n = input.length(); 
  char chars[n + 1]; char current;
  strcpy(chars, input.c_str()); 

  int max, local;
  max = local = 0;
  current = chars[0];
  for (int i = 0; i < n;){
    local = 0;
    while (chars[i] == current){
      local++;
      i++;
    }
    if(local > max){max = local;}
    current = chars[i];
  }
  cout << max;
}