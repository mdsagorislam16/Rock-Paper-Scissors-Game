#include <bits/stdc++.h>
using namespace std;

class Game {
public:
    void play() {
        int user, computer;
        cout << "Enter your choice:\n";
        cout << "1. Rock\n2. Paper\n3. Scissors\n";
        cout << "Your choice: ";
        cin >> user;
         if (user < 1 || user > 3) {
            cout << "\n❌ Invalid Input! Please enter 1, 2 or 3.\n";
            return;
        }

        srand(time(0));
        computer = rand() % 3 + 1;

        cout << "Computer chose: " << computer << endl;

        if (user == computer) {
            cout << "Draw!\n";
        }
        else if ((user == 1 && computer == 3) ||
                 (user == 2 && computer == 1) ||
                 (user == 3 && computer == 2)) {
             cout << "Result: 🎉 You Win!\n";
        }
        else {
            cout << "Result: 💻 Computer Wins!\n";
        }
        cout << "=============================\n";

    }
};

int main() {
    Game g;
    g.play();
    return 0;
}