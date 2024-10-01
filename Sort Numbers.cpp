#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
#include <ctime>


using namespace std;

void swapper(int a, int b);
void sortNums(int nums[], int size);

int main() {
  int nums[] = {2, 6, 1, 9, 3};
  int size = 5;
  sortNums(nums[], size);

  return 0;
}

void swapper(int a, int b) {
  int temp = a;
  a = b;
  b = temp;
}
void sortNums(int nums[], int size) {
  int x;
  int y;

  for (x = 0; x < size-1; x++)
  for (y = 0; y < size-x-1; y++) {
    if (nums[x] > nums[x+1]) {
      swapper(int &nums[x], int &nums[x+1]);
    }
  }
}
