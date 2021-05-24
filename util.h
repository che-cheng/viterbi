// util.h

// Copyright 2016-2016 University of Electronic Science and Technology of China
//                     (author : Xiaoming Qin)
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file expect in compliance with the License.

#ifndef UTIL_H
#define UTIL_H

#include <fstream>
#include <sstream>

using namespace std;

int* create_int_array(const int col);
int** create_int_array(const int row, const int col);
float* create_array(const int col);
float** create_array(const int row, const int col);

void read_file_into_2d_array(const string file_name, const int row, const int col, float** data);
void read_file_into_1d_array(const string file_name, int col, float* data);
void read_file_into_1d_array(const string file_name, int col, int* data);


/**
 * @brief calculate the probility of maximum path to state i at time T
 * @param[in] delta[j-1]        the local probability of last state at time j
 * @param[in] trans_prob[i]     the transition probability of each state to
 * state i
 * @param[in] emiss_prob[j][i]  the emission probaility of state i observe j
 * @param[in] K                 the hidden states number
 * @param[out] delta[j][i]      the local probability of state i at time j
 * @param[out] psi[j][i]        the argmax of large probability from last states
 * i at time j
 * @return void
 */
void find_max_value_index(float *p, float *q, float d, const int K, float &delta_val, int &psi_idx);

int  find_max_index(float *p, const int K);
#endif // UTIL_H
