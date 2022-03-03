#include "assignment/code.hpp"

#include <iostream>   // cout, printf
#include <algorithm>  // fill, copy

namespace assignment {

  // Task 1
  int squared_diff(int left, int right) {
    return ((left - right)*(left - right));
  }

  // Task 2
  bool check_bit(int mask, int bit_pos) {
    if(mask & (1 << bit_pos) && mask >= 0 && bit_pos >= 0)
      return true;
    return false;
  }

  // Task 3
  int max3(int left, int middle, int right) {
    int max_ = left;
    if (middle > max_ ) {max_ = middle;}
    if (right > max_ ) {max_ = middle;}
    return max_;
  }

  // Task 4
  void swap_args(int *left, int *right) {
    int temp_left = *left;
    *left = *right;
    *right = temp_left;
  }

  // Task 5
  int arr_sum(int *arr, int length) {
    int Summa = 0;
    for(int i = 0; i < length; i++) {
      Summa += arr[i];
    }
    return Summa;
  }

  // Task 6
  int *find_max_elem(int *arr, int length) {
    int Max = arr[0];
    for (int i = 0; i < length; i++) {
      if (Max < arr[i]) {
        Max = arr[i];
      }
    }

    return nullptr;
  }

  // Task 7
  int *allocate_arr(int length, int init_value) {


    return nullptr;
  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {
    int *arr_out = new int[length];
    for(int i = 0; i < length; i++){
      arr_out[i] = arr_in[i];
    }

    return nullptr;
  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {

    // Write your code here ...
  }

}  // namespace assignment
