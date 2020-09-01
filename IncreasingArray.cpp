#include <iostream>

using namespace std;
int main() {
  long n, count = 0;
  cin >> n;
  long nums[n];

  for(int i = 0; i < n; i++){
    cin >> nums[i];
  }

  for(int i = 1; i < n; i++){
    while(nums[i] < nums[i - 1]){
      nums[i]++, count++;
    }

  }
  
  cout << count;


}