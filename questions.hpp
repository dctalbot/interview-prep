//
//  questions.hpp
//  Interviews
//
//  Created by David Talbot on 10/14/18.
//  Copyright © 2018 David Talbot. All rights reserved.
//

#include <iostream>
#include <map>
#include <queue>
#include <vector>
#include <unordered_map>

using namespace std;

#ifndef questions_hpp
#define questions_hpp

/*
 Declare functions with default args
*/

void get_combinations(vector<int>, vector<int> = vector<int>(), int=0);

int factorial(int n, int result = 1);

int fiboncci(int n);


//rotate a matrix (2d array) in-place
void rotate(vector<vector<int>>& matrix);


//permutations with helper function
void permute(vector<int> &num);
void permuteRecursive(vector<int> &num, int begin, vector<vector<int>> &result);



#endif /* questions_hpp */
