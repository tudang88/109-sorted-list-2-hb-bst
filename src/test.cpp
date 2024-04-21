#include <iostream>
#include <string>
#include <sstream>
#include <functional>
#include "BinaryTree.h"

using namespace std;

/**
 * helper for printout
*/
static void printOutput(vector<int>& vec) {
    cout<<"[";
    for (int i = 0; i < vec.size(); i++) {
      cout << vec.at(i);
      if (i < vec.size() -1) cout<<", ";
    }
    cout<<"]\n";
}

/**
 * compare 2-d vectors
*/
static bool compareVectorOfVector(vector<vector<int>>& vector1, vector<vector<int>>& vector2) {
    if (vector1.size() != vector2.size()) return false;
    for (int layer = 0; layer < vector1.size(); layer++) {
        for (int nodeIdx; nodeIdx < vector1.at(layer).size(); nodeIdx++) {
            if (vector1.at(layer).at(nodeIdx) != vector2.at(layer).at(nodeIdx)) return false;
        }
    }
    return true;
}

/**
 * comapre two one dimension vector
*/
static bool compareVector(vector<int> vec1, vector<int> vec2){
  if (vec1.size() != vec2.size()) return false;

  for (int i=0; i< vec1.size(); i++) {
    if (vec1.at(i) != vec2.at(i)) return false;
  }
  return true;
}
/**
 * test depth first search 2
*/
static void test_dfs_2() {
  /**
   * test case 1
  */
}
/**
 * main function
*/
int main(int argc, const char** argv) {
  cout<< "===============BREATH FIRST SEARCH TEST==============="<<endl;
  return 0;
}


