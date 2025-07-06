#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    time_t currentTime;
    time(&currentTime);
    srand(currentTime);

    int target = rand() % 100 + 1;
    int input = 0;
    int tries = 0;

    cout << "Number Guess Challenge\n";
    cout << "I'm thinking of a number from 1 to 100\n";
    cout << "For Finding number\n";

   while (true) {
        cout << "\nYour guess ";
        cin >> input;
        tries++;

        if (input < target) {
            cout << "Oops! Too low. Try a bigger number.";
        } else if (input > target) {
            cout << "Too high! Pick a smaller number.";
        } else {
            cout << "\nGreat job! You found it in " << tries << " attempt(s).\n";
            break;
        }
    }

    cout << "\n";
    return 0;
}

