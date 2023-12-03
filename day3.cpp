//
// Created by User on 03/12/2023.
//

#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <tuple>
#include <set>


using namespace std;
int main() {


    char input[] = "467..114..\n"
                   "...*......\n"
                   "..35..633.\n"
                   "......#...\n"
                   "617*......\n"
                   ".....+.58.\n"
                   "..592.....\n"
                   "......755.\n"
                   "...$.*....\n"
                   ".664.598..";
    vector<string> grid;
    int t = 0;
    char *token = strtok(input, "\n");
    while (token != nullptr) {
        grid.emplace_back(token);
        token = strtok(nullptr, "\n");
    }
//    set<tuple<int, int> > coords;
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
//            if (isdigit(grid[i][j]) || grid[i][j] == '.') continue;
            set<tuple<int, int> > coords;
            if (grid[i][j] != '*') continue;
            for (int r = i - 1 ; r <= i + 1; r++ ) {
                for (int c = j - 1; c <= j + 1; c++) {
                    int tempc = c;
                    if (c < 0 || c >= grid[i].size() || r < 0 || r >= grid.size() || !isdigit(grid[r][c])) continue;
                    while (tempc > 0 && isdigit(grid[r][tempc - 1])) tempc -= 1;
                    coords.insert(tuple<int, int>(r, tempc));
                }
            }

            if (coords.size() < 2) continue;
            int pro = 1;
            for (auto c : coords) {
                tuple<int, int> tuple = c;
                int row =  get<0>(tuple);
                int col =  get<1>(tuple) ;
                string num;
                while (isdigit(grid[row][col]) && (col <= grid[row].size())) {
                    num+=grid[row][col];
                    col += 1;
                }
                pro *= stoi(num);
                num  =  "";

            }
            t += pro;
        }
    }




    cout << t << endl;

    return 0;
}