#include <bits/stdc++.h>
using namespace std;

/*

problem description :

Sean invented a 2n x 2n game involving a  matrix where each cell of the matrix contains an integer.
He can reverse any of its rows or columns any number of times.
The goal of the game is to maximize the sum of the elements in
the n x n submatrix located in the upper-left quadrant of the matrix.
Given the initial configurations for q matrices,
help Sean reverse the rows and columns of each matrix in the best possible way
so that the sum of the elements in the matrix's upper-left quadrant is maximal.

my solution ---->

i used the mirror technique with the matrix to get the top values */

int flippingMatrix(vector<vector<int>> matrix)
{
    int s = 0;
    int size = matrix.size();

    for (int i = 0; i < size / 2; i++)
    {
        for (int j = 0; j < size / 2; j++)
        {
            //here the mirror thing :
            s += max(max(matrix[i][j], matrix[i][size - j - 1]), max(matrix[size - i - 1][j], matrix[size - i - 1][size - j - 1]));
        }
    }
    return s;
}
