#include<bits/stdc++.h>
using namespace std;

void blockedMaze(int grid[][4], int row, int col, string res, bool visited[][4]){
    if(row == 3 && col == 3){
        cout<<res<<"\n";
        return;
    }
    if(row<0 || col<0 || row>3 || col>3 || visited[row][col] == true || grid[row][col] == 1){
        return;
    }
    visited[row][col] = true;

    blockedMaze(grid, row-1, col, res + "T", visited);
    blockedMaze(grid, row+1, col, res + "D", visited);
    blockedMaze(grid, row, col-1, res + "L", visited);
    blockedMaze(grid, row, col+1, res + "R", visited);

    visited[row][col] = false;
}

int main(){
    int grid[][4] = {{0, 1, 0, 0}, {0, 0, 0, 0}, {0, 1, 0, 0}, {0, 1, 1, 0}};
    int rows = sizeof(grid)/sizeof(grid[0]);
    int cols = sizeof(grid[0])/sizeof(int);

    bool visited[4][4];
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            visited[i][j] = false;
        }
    }

    blockedMaze(grid, 0, 0, "", visited);

    return 0;
}

