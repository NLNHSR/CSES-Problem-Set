#include <iostream>
#include <bits/stdc++.h> 

using namespace std;

void combSort(int *array, int size){
   int gap = size;
   bool flag = true;
   while(gap != 1 || flag == true){
      gap = (gap*10)/13; 
      if(gap<1)
         gap = 1;
      flag = false;
      for(int i = 0; i<size-gap; i++){
         if(array[i] > array[i+gap]){
            swap(array[i], array[i+gap]);
            flag = true;
         }
      }
   }
}

int missingNum(int x, int arr[]){
  combSort(arr, x - 1);
  int num = 1;
  for(int i = 0; i < x; i++){
    if (arr[i] != num){
      return num;
    }
    num++;
  }

}

int main() {
  int num;
  cin >> num;
  int nums[num];
  for(int i = 0; i < num - 1; i++){
    cin >> nums[i];
  }
  cout << missingNum(num, nums);
}