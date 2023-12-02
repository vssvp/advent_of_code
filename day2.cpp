//
// Created by User on 02/12/2023.
//

#include <cstring>
#include <iostream>


using namespace std;


int main() {
    int red = 12;
    int green = 13;
    int blue = 14;
    int id_sum = 0;

    char input[] =  "Game 1: 1 red, 3 blue, 11 green; 1 blue, 5 red; 3 blue, 5 green, 13 red; 6 red, 1 blue, 4 green; 16 red, 12 green\n"
                    "Game 2: 3 red, 13 blue, 5 green; 14 green, 14 blue; 9 blue, 10 green, 3 red; 2 green, 5 blue; 11 green, 3 blue, 3 red; 16 blue, 2 red, 9 green\n"
                    "Game 3: 17 blue, 5 red; 3 red, 11 green, 17 blue; 1 red, 6 blue, 9 green; 3 blue, 11 green, 1 red; 3 green, 10 red, 11 blue; 12 red, 3 green, 15 blue\n"
                    "Game 4: 14 green, 14 red, 1 blue; 15 red, 13 green, 1 blue; 6 green, 15 red; 7 green\n"
                    "Game 5: 3 green, 1 blue, 3 red; 6 red, 2 green, 2 blue; 12 red, 3 green, 1 blue; 2 green, 9 red; 1 blue; 2 blue, 10 red\n"
                    "Game 6: 5 blue, 5 green; 4 blue, 1 red, 10 green; 16 green, 1 red, 6 blue; 1 red, 1 blue, 13 green; 1 red, 5 blue, 7 green; 14 green, 17 blue\n"
                    "Game 7: 1 green, 8 blue, 4 red; 1 green, 4 blue, 4 red; 6 blue, 4 red, 4 green; 1 red, 8 green\n"
                    "Game 8: 2 red, 5 blue, 1 green; 1 blue, 4 red, 8 green; 6 blue, 12 green, 6 red; 3 blue, 5 red; 8 red, 2 blue, 13 green; 5 green, 4 red, 3 blue\n"
                    "Game 9: 11 red; 1 green, 2 red, 2 blue; 1 blue, 2 green, 9 red; 4 red, 2 green, 2 blue; 1 blue, 2 green; 1 blue, 9 red, 2 green\n"
                    "Game 10: 9 red, 4 green; 1 blue, 3 red, 7 green; 3 green, 1 red, 1 blue; 7 green, 4 red, 1 blue; 1 blue, 5 green, 10 red; 1 red, 5 green\n"
                    "Game 11: 2 blue, 4 red, 3 green; 1 blue, 7 red; 4 green, 7 red, 1 blue; 3 blue, 6 green, 4 red; 3 red, 1 green, 3 blue\n"
                    "Game 12: 1 green, 6 red, 5 blue; 3 green, 2 red, 4 blue; 3 green, 1 red, 3 blue\n"
                    "Game 13: 6 green, 1 red, 9 blue; 11 red, 4 blue, 12 green; 6 green, 9 red, 19 blue; 2 green, 6 blue; 10 green, 1 red, 16 blue; 4 green, 14 blue\n"
                    "Game 14: 7 blue, 2 red; 1 green, 2 red, 19 blue; 12 blue, 6 green, 11 red\n"
                    "Game 15: 4 red, 4 green, 7 blue; 15 blue, 1 green, 8 red; 2 red, 10 green, 11 blue; 5 red, 4 blue, 6 green; 9 red, 8 blue, 3 green; 9 blue, 9 red\n"
                    "Game 16: 7 red, 2 blue, 19 green; 6 blue, 9 green; 8 green, 6 red, 19 blue; 11 green, 7 red, 1 blue; 9 blue, 3 red, 17 green\n"
                    "Game 17: 3 blue, 4 green, 5 red; 2 red, 4 green, 11 blue; 6 blue, 13 green; 3 blue, 12 green, 7 red\n"
                    "Game 18: 9 red, 6 blue, 7 green; 3 green, 3 blue, 5 red; 18 red, 6 blue, 4 green; 3 green, 10 red, 8 blue\n"
                    "Game 19: 3 red, 6 green; 1 red, 5 green, 4 blue; 3 red, 14 blue\n"
                    "Game 20: 2 green, 2 blue, 4 red; 14 red, 6 blue, 5 green; 1 blue, 5 red, 3 green; 10 red, 6 green, 6 blue\n"
                    "Game 21: 10 blue, 12 green, 3 red; 1 green, 14 red; 5 blue, 7 green; 12 blue, 1 red, 13 green; 7 red, 4 green\n"
                    "Game 22: 2 red, 1 blue; 1 red, 2 blue; 1 red, 1 green, 3 blue; 3 blue; 1 red; 1 green, 2 red\n"
                    "Game 23: 4 blue, 4 green, 1 red; 3 blue, 1 red, 6 green; 1 red, 1 blue\n"
                    "Game 24: 5 blue, 15 green, 13 red; 20 green, 13 blue, 6 red; 5 blue, 11 red, 16 green; 6 red, 5 blue, 13 green; 12 blue, 13 green, 3 red\n"
                    "Game 25: 10 blue, 17 red; 12 red, 16 blue, 3 green; 4 green, 12 blue, 10 red; 8 blue, 3 green, 10 red; 5 green, 2 red, 12 blue\n"
                    "Game 26: 11 red, 9 blue; 3 blue, 3 red, 3 green; 10 blue, 3 green, 4 red; 1 green, 4 blue, 9 red; 5 green, 1 red, 7 blue; 1 red, 3 blue, 3 green\n"
                    "Game 27: 1 green, 12 red, 4 blue; 5 red, 2 green, 1 blue; 3 green, 6 blue, 10 red; 1 green, 4 red, 3 blue\n"
                    "Game 28: 6 blue; 2 green; 2 green, 8 blue, 1 red; 2 green, 2 blue; 6 blue, 8 green; 9 green, 5 blue\n"
                    "Game 29: 1 green, 9 blue, 9 red; 13 green, 4 red, 9 blue; 3 green, 8 blue, 15 red; 15 green, 18 blue, 3 red; 16 green, 10 red; 16 green, 12 blue, 16 red\n"
                    "Game 30: 14 blue, 4 green, 1 red; 7 red, 14 blue; 2 blue, 4 red, 1 green\n"
                    "Game 31: 2 red, 14 green, 3 blue; 3 blue, 3 green, 4 red; 8 blue, 4 red, 1 green; 8 green, 3 blue; 10 blue, 1 red, 11 green; 13 green, 2 red, 3 blue\n"
                    "Game 32: 8 blue, 16 red; 2 green, 8 blue, 16 red; 16 blue, 4 green, 17 red; 2 red, 5 green, 4 blue\n"
                    "Game 33: 2 red, 2 green, 1 blue; 5 red, 1 blue; 8 green, 14 red\n"
                    "Game 34: 4 red, 4 green; 9 green; 1 blue, 16 green; 1 blue, 5 red, 9 green; 2 red, 15 green, 1 blue\n"
                    "Game 35: 1 green, 5 red; 1 green, 15 red, 13 blue; 2 red, 13 blue, 17 green; 9 blue, 3 red, 11 green; 7 green, 8 blue, 14 red\n"
                    "Game 36: 19 green; 3 green, 1 blue, 1 red; 1 green, 8 blue; 13 green, 5 red, 5 blue\n"
                    "Game 37: 12 red, 7 green, 3 blue; 12 blue, 10 red, 9 green; 17 green, 8 red, 13 blue; 9 blue, 9 green, 8 red; 4 red, 13 green, 13 blue; 15 green, 12 red, 14 blue\n"
                    "Game 38: 5 blue, 1 green, 20 red; 1 green, 13 red, 18 blue; 17 blue, 9 red, 10 green; 4 blue, 4 red, 12 green; 12 blue, 12 red, 6 green; 12 green, 13 red, 2 blue\n"
                    "Game 39: 7 blue, 6 red, 2 green; 6 blue, 1 red; 7 blue, 1 red\n"
                    "Game 40: 1 blue, 3 red; 15 blue, 1 green; 1 green, 16 red, 2 blue\n"
                    "Game 41: 2 blue, 4 green; 8 green, 3 red; 2 blue, 9 red, 4 green; 4 red, 3 blue, 10 green; 5 green, 3 blue, 2 red\n"
                    "Game 42: 7 green, 2 blue, 1 red; 8 green, 4 red; 5 blue, 1 red, 3 green\n"
                    "Game 43: 3 red, 1 blue; 1 blue, 2 green, 2 red; 1 red, 2 blue; 3 blue\n"
                    "Game 44: 3 green, 14 blue, 1 red; 16 blue, 5 red, 11 green; 12 green, 1 blue; 13 blue, 1 red; 5 blue, 2 red, 6 green; 3 blue, 5 red, 11 green\n"
                    "Game 45: 7 blue, 1 red; 1 red, 3 blue; 3 green, 14 blue, 1 red; 4 blue, 3 green, 1 red; 15 blue, 1 red, 3 green\n"
                    "Game 46: 15 red, 4 blue; 15 red, 11 blue, 3 green; 14 red, 2 green, 2 blue; 14 red, 8 blue, 3 green; 4 red, 1 blue\n"
                    "Game 47: 4 green, 2 blue, 3 red; 8 red, 2 green, 18 blue; 1 green, 17 blue, 1 red\n"
                    "Game 48: 2 green, 4 red, 2 blue; 15 blue, 16 red, 5 green; 14 blue, 2 green, 10 red; 3 green, 13 red, 6 blue; 8 green, 4 red, 12 blue; 15 red, 3 green, 9 blue\n"
                    "Game 49: 1 green, 6 red, 7 blue; 1 blue, 9 green, 9 red; 4 green, 8 red; 9 blue, 1 red, 14 green; 2 blue, 9 red\n"
                    "Game 50: 3 red, 10 blue, 14 green; 2 red, 9 blue, 7 green; 4 blue, 12 green; 1 red, 4 green, 5 blue\n"
                    "Game 51: 2 green, 6 blue; 1 green, 10 blue, 1 red; 3 blue, 2 green\n"
                    "Game 52: 1 green, 4 red, 1 blue; 3 red, 5 green, 4 blue; 1 blue, 3 red, 5 green; 1 red, 1 green, 1 blue; 12 green, 2 red, 4 blue; 10 blue, 7 green, 1 red\n"
                    "Game 53: 12 red, 1 blue; 8 red, 11 blue, 11 green; 8 red, 6 blue, 13 green; 11 blue, 11 red, 16 green; 6 red, 9 green, 4 blue\n"
                    "Game 54: 2 red, 8 blue, 15 green; 4 green, 3 blue, 6 red; 12 green, 13 blue, 4 red\n"
                    "Game 55: 1 green, 16 blue, 4 red; 3 red, 1 blue, 1 green; 12 red, 16 blue; 3 red\n"
                    "Game 56: 4 green; 1 red, 4 green; 2 red, 3 blue, 7 green; 2 red, 3 blue, 15 green\n"
                    "Game 57: 17 green; 1 green, 9 blue; 1 red, 1 green, 9 blue\n"
                    "Game 58: 3 green, 8 red, 7 blue; 4 green, 9 blue, 2 red; 1 red, 2 green, 11 blue; 8 blue, 4 green\n"
                    "Game 59: 6 green, 1 red; 4 blue, 6 green; 4 green, 5 blue\n"
                    "Game 60: 3 green, 5 blue, 1 red; 7 green, 5 blue, 16 red; 14 red, 1 green, 1 blue; 7 green, 2 blue; 13 red, 5 green, 5 blue\n"
                    "Game 61: 1 green, 2 blue, 2 red; 2 green; 6 red, 1 blue, 1 green\n"
                    "Game 62: 5 red, 8 blue, 1 green; 1 red, 1 blue; 2 green, 8 blue\n"
                    "Game 63: 2 red, 2 blue, 2 green; 9 blue, 7 green; 1 green, 4 blue; 18 green, 3 blue\n"
                    "Game 64: 13 green, 1 blue, 6 red; 13 green, 15 red, 8 blue; 5 green, 14 red, 4 blue; 2 green, 8 blue, 12 red; 1 blue, 5 red, 13 green; 7 blue, 8 green, 2 red\n"
                    "Game 65: 7 blue, 12 red, 6 green; 11 red, 8 green, 8 blue; 9 red, 7 green, 7 blue; 14 red, 2 blue, 17 green\n"
                    "Game 66: 2 green, 5 red; 7 red, 14 blue; 19 blue, 2 green; 7 blue, 4 green, 6 red\n"
                    "Game 67: 4 green, 17 red, 7 blue; 4 blue, 6 green; 7 green, 7 red, 12 blue; 2 red, 14 blue\n"
                    "Game 68: 1 red, 11 green, 4 blue; 17 blue, 1 red, 10 green; 3 red, 7 green, 1 blue; 7 green, 3 red, 6 blue; 2 red, 3 green; 2 green, 2 red, 4 blue\n"
                    "Game 69: 5 blue, 4 red; 3 red, 11 green, 1 blue; 6 green, 2 blue; 10 green, 4 red, 5 blue; 2 red, 11 green\n"
                    "Game 70: 16 red, 7 blue, 1 green; 14 red, 1 blue, 4 green; 4 red, 4 green; 7 blue, 5 red, 2 green\n"
                    "Game 71: 14 red, 2 blue, 13 green; 7 green, 5 red, 2 blue; 3 blue, 9 green, 11 red; 10 red, 4 blue, 1 green\n"
                    "Game 72: 1 green, 2 red, 6 blue; 4 green, 4 red, 9 blue; 6 green, 8 blue, 1 red; 5 red, 4 green, 9 blue; 15 blue, 2 green, 7 red; 10 blue, 2 green, 10 red\n"
                    "Game 73: 7 green, 6 red, 7 blue; 6 blue, 5 red, 8 green; 5 blue, 5 red\n"
                    "Game 74: 11 red, 1 blue; 2 green, 4 blue, 1 red; 1 green, 2 blue, 11 red; 9 red, 5 blue; 15 red, 10 blue; 9 red, 3 blue\n"
                    "Game 75: 1 blue, 6 red, 9 green; 5 red, 1 blue, 8 green; 2 green, 2 red, 1 blue; 7 red, 1 green; 3 green, 6 red, 2 blue; 1 green, 1 red\n"
                    "Game 76: 16 red, 3 blue, 9 green; 4 blue, 4 green; 5 blue, 1 green, 10 red; 6 blue, 13 red; 1 blue, 2 green, 8 red\n"
                    "Game 77: 4 red, 4 blue; 5 blue, 5 red; 6 red, 3 green\n"
                    "Game 78: 11 green, 1 red; 1 blue, 18 green, 1 red; 6 green, 5 red, 2 blue; 6 red, 1 blue, 15 green; 5 green, 5 red\n"
                    "Game 79: 2 red, 3 green, 13 blue; 7 blue, 5 green; 4 blue, 2 red, 6 green; 6 green, 15 blue\n"
                    "Game 80: 9 green, 2 blue, 1 red; 8 green, 1 red; 1 blue, 7 green; 2 green, 1 blue; 3 green; 5 green, 1 red, 2 blue\n"
                    "Game 81: 2 blue, 8 green, 1 red; 3 green, 1 blue; 6 blue, 1 green; 3 blue, 3 green, 1 red; 2 green, 8 blue; 1 red, 8 blue, 2 green\n"
                    "Game 82: 5 blue, 4 red, 1 green; 9 red, 12 green, 8 blue; 9 red, 6 green, 15 blue; 8 blue, 10 red, 6 green\n"
                    "Game 83: 2 green, 7 blue, 4 red; 2 blue, 11 red, 9 green; 7 red, 7 green, 6 blue; 12 blue, 4 red, 11 green; 11 green, 7 blue; 7 green, 5 red, 2 blue\n"
                    "Game 84: 9 red, 1 blue, 7 green; 5 red, 5 green; 4 green, 4 blue; 4 green, 5 red\n"
                    "Game 85: 5 green, 13 red, 11 blue; 5 blue, 19 green, 15 red; 17 red, 3 green, 8 blue; 13 green, 10 red; 3 green, 17 red, 11 blue\n"
                    "Game 86: 1 green, 11 blue; 11 blue, 1 green, 8 red; 6 blue, 4 red; 4 blue, 17 red; 1 green, 15 red\n"
                    "Game 87: 3 green, 8 red, 6 blue; 6 red, 13 green, 1 blue; 4 blue, 8 red, 8 green\n"
                    "Game 88: 5 green, 5 blue; 3 green, 10 blue, 2 red; 6 blue, 7 red, 1 green; 5 green, 3 red, 11 blue; 8 red, 4 green, 6 blue\n"
                    "Game 89: 5 green, 10 blue, 12 red; 1 green, 13 red, 8 blue; 4 red, 11 green, 12 blue\n"
                    "Game 90: 4 green, 3 red, 11 blue; 1 green, 12 red, 12 blue; 9 blue, 5 red, 1 green; 2 green, 12 blue, 12 red\n"
                    "Game 91: 5 red, 8 blue, 1 green; 5 green, 3 blue; 9 blue, 7 green, 5 red; 1 green, 3 blue, 6 red; 9 blue, 11 green, 4 red; 2 green, 4 red, 10 blue\n"
                    "Game 92: 11 blue, 1 red, 6 green; 10 blue, 2 red; 4 red, 6 green, 19 blue\n"
                    "Game 93: 1 green, 3 blue, 3 red; 3 red; 5 blue, 3 red; 1 green, 4 red\n"
                    "Game 94: 9 red, 4 blue, 4 green; 1 blue, 6 red, 15 green; 10 red, 5 blue, 1 green; 2 blue, 4 green, 8 red\n"
                    "Game 95: 13 blue, 4 green, 3 red; 15 green, 3 red, 2 blue; 16 green, 8 blue, 2 red\n"
                    "Game 96: 15 blue, 7 green, 3 red; 5 red, 7 green, 17 blue; 6 red, 12 blue; 5 green, 10 blue, 4 red\n"
                    "Game 97: 5 red, 2 green; 8 red; 1 blue, 7 green, 2 red; 7 red, 15 green\n"
                    "Game 98: 6 green, 1 blue, 1 red; 3 green, 3 red; 1 blue, 13 green, 4 red\n"
                    "Game 99: 16 red, 5 blue, 9 green; 2 green, 7 blue, 2 red; 10 blue, 3 green; 9 red, 8 blue, 13 green; 16 green, 13 red, 10 blue\n"
                    "Game 100: 16 blue, 12 red, 3 green; 2 green, 7 blue; 5 blue, 4 green; 10 blue, 6 red, 6 green; 5 red, 12 blue, 2 green; 9 red, 12 blue, 11 green";

    int green_min = 0;
    int blue_min = 0;
    int red_min = 0;

    char *token = strtok(input, "\n:;,");
    int id = 0;
    int sum = 0;
    bool cando = true;
    while (token != nullptr) {
        string s;
        if (strncmp(token, "Game", 4) == 0) {
            if (cando) {
                id_sum += id;
            }
            id = stoi(s + (token + 5));
            sum += green_min * red_min * blue_min;
            red_min = 0;
            green_min =0;
            blue_min = 0;
            cando = true;
        } else {
            int index = 0;
            for (int i = 0; i < strlen(token + 1); i++) {
                if (token[i] == ' ') index = i;
            }
            char *colour = (token + index + 1);
            token[index] = '\0';
            int count = stoi(token);
            if (strncmp(colour, "blue", 4) == 0 && count > blue_min) {
                blue_min = count;
            }
            else if ( strncmp(colour, "green", 5) == 0 && count > green_min) {
                green_min = count;
            }
            else if ( strncmp(colour, "red", 3) == 0 && count > red_min) {
                red_min = count;
            }

            if (strncmp(colour, "blue", 4) == 0 && count <= blue) {
                cando &= true;
            }
            else if ( strncmp(colour, "green", 5) == 0 && count  <= green) {
                cando &= true;
            }
            else if ( strncmp(colour, "red", 3) == 0 && count <= red) {
                cando &= true;
            } else {
                cando = false;
            }
        }

        token = strtok(nullptr, "\n:;,");
    }

    if (cando) {
        id_sum += id;
    }
    sum += red_min * green_min * blue_min;

    cout << id_sum << endl;
    cout << sum << endl;

    return 0;
}