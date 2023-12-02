
#include <iostream>
#include <cstring>
#include <string>
#include <vector>

using namespace std;

int main() {


    char input[] = "two1nine\n"
                   "eightwothree\n"
                   "abcone2threexyz\n"
                   "xtwone3four\n"
                   "4nineeightseven2\n"
                   "zoneight234\n"
                   "7pqrstsixteen";



    char *token = strtok(input, "\n");

    int running_sum = 0;

    const char *strings[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    while (token != nullptr)
    {
        vector<string> digits;
        for (int i = 0; i < strlen(token); i++) {
            string s;

            if (isdigit(token[i])) {
                digits.push_back(s + token[i]);
            } else {
                int count = 1;
                for (auto str:strings) {
                    if (strncmp(token+ i, str, strlen(str))  == 0) {
                        digits.push_back(to_string(count));

                    }
                    count++;
                }
            }
        }

        if (digits.size() == 1) running_sum += stoi(digits[0] + digits[0]);
        if (digits.size() > 1) running_sum += stoi(digits[0] + digits[digits.size() - 1]);

        token = strtok(nullptr, "\n");
    }


    cout << running_sum << endl;
    return 0;

}
