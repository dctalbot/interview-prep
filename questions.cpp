//
//  questions.cpp
//  Interviews
//
//  Created by David Talbot on 10/14/18.
//  Copyright © 2018 David Talbot. All rights reserved.
//

#include "questions.hpp"

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



//rotate a matrix (2d array) in-place
void rotate(vector<vector<int>>& matrix) {
  for(int i=0; i<matrix.size(); i++){
    for(int j=i; j<matrix[0].size(); j++)
      swap(matrix[i][j], matrix[j][i]);
  }
  
  for(int i=0; i<matrix.size(); i++)
    reverse(begin(matrix[i]), end(matrix[i]));
}
