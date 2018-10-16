//
//  questions.cpp
//  Interviews
//
//  Created by David Talbot on 10/14/18.
//  Copyright © 2018 David Talbot. All rights reserved.
//

#include "questions.hpp"

#include <cstdlib>
#include <iostream>
#include <map>
#include <queue>
#include <vector>
#include <unordered_map>

using namespace std;

/*
 Implement functions
*/


void get_combinations(vector<int> elements, vector<int> combos, int ndx) {
  
  if (ndx == elements.size()) {
    for (auto x:combos) {
      cout << x;
    }
    cout << endl;
  }
  else {
    get_combinations(elements, combos, ndx+1);
    combos.push_back(elements[ndx]);
    get_combinations(elements, combos, ndx+1);
  }
}


int factorial(int n, int result){
  if (n==0) return result;
  return factorial(n-1, result*n);
}



int fiboncci(int n) {
  int dp[n+2];
  dp[0] = 0;
  dp[1] = 1;
  for (int i=2; i <= n; ++i)
    dp[i] = dp[i-1] + dp[i-2];
  return dp[n];
}




//generate permutations with helper function
void permute(vector<int> &num) {
  vector<vector<int>> result;
  
  permuteRecursive(num, 0, result);
  
  //print 2d array
  for (auto row: result) {
    for (auto col: row)
      cout << col << " ";
    cout << endl;
  }
}

void permuteRecursive(vector<int> &num, int begin, vector<vector<int>> &result) {
  
  // permute num[begin..end]
  // invariant: num[0..begin-1] have been fixed/permuted
  if (begin >= num.size()) {
    // one permutation instance
    result.push_back(num);
    return;
  }
  
  for (int i = begin; i < num.size(); i++) {
    swap(num[begin], num[i]);
    permuteRecursive(num, begin + 1, result);
    // reset
    swap(num[begin], num[i]);
  }
}
//end permutations





//rotate a matrix (2d array) in-place
void rotate(vector<vector<int>>& matrix) {
  for(int i=0; i<matrix.size(); i++){
    for(int j=i; j<matrix[0].size(); j++)
      swap(matrix[i][j], matrix[j][i]);
  }
  
  for(int i=0; i<matrix.size(); i++)
    reverse(begin(matrix[i]), end(matrix[i]));
}


