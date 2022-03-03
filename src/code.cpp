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
    return left>middle?left>right?left:right:middle>right?middle:right;
  }

  // Task 4
  void swap_args(int *left, int *right) {
    if (left != nullptr && right != nullptr) {
      int temp_left = *left;
      *left = *right;
      *right = temp_left;
    }
  }

  // Task 5
  int arr_sum(int *arr, int length) {
    if (arr != nullptr && length > 0) {
      int summ = 0;
      for (int i = 0; i < length; i++) {
        summ += arr[i];
      }
      return summ;
    }
    return 0;
  }

  // Task 6
  int *find_max_elem(int *arr, int length) {
    if (arr != nullptr && length > 0) {
      int *max = &arr[0];
      for (int i = 0; i < length; i++) {
        if (arr[i] > *max) {
          max = &arr[i];
        }
      }
      return max;
    }
    return nullptr;
  }

  // Task 7
  int *allocate_arr(int length, int init_value) {
    if (length > 0) {

    }

    return nullptr;
  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {
    if (arr_in != nullptr && length > 0) {
      int arr_out[length];
      return std::copy(arr_in, arr_in+length, arr_out);
      }
    return nullptr;
  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {

    // Write your code here ...
  }

}  // namespace assignment
