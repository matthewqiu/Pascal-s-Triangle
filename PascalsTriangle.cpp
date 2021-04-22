//pascals triangle
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;
vector<int> generateRow(int rowNum,vector<int> prevRow);
int main()
{
	int numRows = 30;
    vector<vector<int>> answer= {};
    vector<int> prevRow = {};
    for(int i = 1; i <= numRows; i++)
    {
        answer.push_back(generateRow(i,prevRow));
        prevRow = answer[i-1];
    }
    for(int i =0; i < answer.size();i++)
    {
    	for(int j = 0; j < answer[i].size();j++)
    	{
    		cout << answer[i][j] << " ";
		}
		cout << endl;
		
	}
	

    return 0;
}

    
vector<int> generateRow(int rowNum,vector<int> prevRow)
    {
        vector<int> row = {};
        if(rowNum == 1)
        {
            row.push_back(1);
        }
        else
        {
            for(int i = 0; i < rowNum; i++)
            {
                if(i == 0)
                {
                    row.push_back(1);
                }
                else if(i == rowNum-1)
                {
                    row.push_back(1);
                }
                else
                {
                    row.push_back(prevRow[i-1]+prevRow[i]);
                }
            }
        }
        return row;
    }
