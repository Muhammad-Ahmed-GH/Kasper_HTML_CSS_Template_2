#include <iostream>
#include <string>
#include <vector>
class Matrix
{
private:
public:
  int rows;
  int cols;
  vector<vector<int>> data;
  Matrix(int rows, int cols)
  {
    this->rows = rows;
    this->cols = cols;
    vector<int> new_row;
    for (int i = 0; i < cols; i++) {
      new_row.push_back(0);
    }
    for(int j = 0; i < rows; j++) {
      data.push_back(new_row);
    }
  }
};