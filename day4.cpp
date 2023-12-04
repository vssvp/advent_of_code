//
// Created by User on 04/12/2023.
//

#include <iostream>
#include <map>
#include <string>
#include <cstring>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    char input[] = "Card 1: 41 48 83 86 17 | 83 86  6 31 17  9 48 53\n"
                   "Card 2: 13 32 20 16 61 | 61 30 68 82 17 32 24 19\n"
                   "Card 3:  1 21 53 59 44 | 69 82 63 72 16 21 14  1\n"
                   "Card 4: 41 92 73 84 69 | 59 84 76 51 58  5 54 83\n"
                   "Card 5: 87 83 26 28 32 | 88 30 70 12 93 22 82 36\n"
                   "Card 6: 31 18 13 56 72 | 74 77 10 23 35 67 36 11";

    vector<char *> game;
    char *token = strtok(input, "\n:");
    while (token != nullptr){
        if (strncmp(token, "Card", 4 ) != 0) game.emplace_back(token);
        token = strtok(nullptr, "\n:");
    }
    int total[game.size()];
    for (int i = 0; i < game.size(); i++) total[i] = 1;
    for (int i = 0; i < game.size(); i++) {
        char *g = game[i];
        char *each = strtok(g, " |");
        int count = 1;
        vector<int> nums;
        while (each != nullptr) {
            if (find(nums.begin(), nums.end(), stoi(each)) == nums.end()) {
                nums.push_back(stoi(each));
            }
            else {
                for (int j = 0; j < total[i]; j++)
                    total[i + count]++;
                count++;
            }
            each = strtok(nullptr, " |");
        }

    }
    int ans = 0;
    for (int i : total) {
        ans+=i;
    }

    cout << ans << endl;
    return 0;
}