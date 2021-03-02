#include <iostream> // cout
#include <algorithm> // copy, fill

#include "tasks.hpp"

// ИСПОЛЬЗОВАНИЕ ЛЮБЫХ ДРУГИХ БИБЛИОТЕК НЕ СОВЕТУЕТСЯ И МОЖЕТ ПОВЛИЯТЬ НА ВАШИ БАЛЛЫ

using std::cout;
using std::fill;
using std::copy;

void swap_args(int *lhs, int *rhs) {
    if (lhs != nullptr && rhs != nullptr) {
        int swap = *lhs;
        *lhs = *rhs;
        *rhs = swap;
    }
    else {
        return;
    }
}

int **allocate_2d_array(int num_rows, int num_cols, int init_value) {
    if (num_rows > 0 && num_cols > 0) {
        int **array_2d = new int *[num_rows];
        for (int i = 0; i < num_rows; i++) {
            array_2d[i] = new int[num_cols];
        }
        for (int i = 0; i < num_rows; i++) {
            for (int j = 0; j < num_cols; j++) {
                array_2d[i][j] = init_value;
            }
        }
        return array_2d;
    }
    else {
        return nullptr;
    }
}

bool copy_2d_array(int **arr_2d_source, int **arr_2d_target, int num_rows, int num_cols) {
    if (arr_2d_source != nullptr && arr_2d_target != nullptr && num_rows > 0 && num_cols > 0) {
        for (int i = 0; i < num_rows; i++) {
            for (int j = 0; j < num_cols; j++) {
                arr_2d_source[i][j] = arr_2d_target[i][j];
            }
        }
        return true;
    }
    return false;
}

void reverse_1d_array(vector<int> &arr) {
    if (!arr.empty()) {
        for (int i = 0; i < arr.size() / 2; i++) {
            int x = arr[i];
            arr[i] = arr[arr.size() - i - 1];
            arr[arr.size() - i - 1] = x;
        }
    }
}

void reverse_1d_array(int *arr_begin, int *arr_end) {
    if (arr_begin != nullptr && arr_end != nullptr) {
        int arrSize = arr_end - arr_begin + 1;
        for (int i = 0; i < arrSize / 2; i++) {
            int temp = arr_begin[i];
            arr_begin[i] = arr_begin[arrSize - i - 1];
            arr_begin[arrSize - i - 1] = temp;

        }
    }
}

int *find_max_element(int *arr, int size) {
    if (arr != nullptr && size > 0) {
        int *max = &arr[0];
        for (int i = 0; i < size; i++) {
            if (arr[i] > *max)
                max = &arr[i];
        }
        return max;
    } else {
        return nullptr;
    }
}

vector<int> find_odd_numbers(vector<int> &arr) {
    vector<int> array;
    if (!arr.empty()) {
        for (int e : arr) {
            if (e % 2 == 1 || e % 2 == -1) {
                array.push_back(e);
            }
        }
        return array;
    }
    else {
        return {};
    }
}

vector<int> find_common_elements(vector<int> &arr_a, vector<int> &arr_b) {
    vector<int> array;
    if (!arr_a.empty() && !arr_b.empty()) {
        for (int e : arr_a) {
            for (int b : arr_b) {
                if (e==b) {
                    array.push_back(e);
                }
            }
        }
        return array;
    }
    else {
        return {};
    }
}
