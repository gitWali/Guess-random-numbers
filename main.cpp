#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(NULL)));

    int secretNumber = rand() % 101;

    int guess;
    int attempts = 0;
    const int maxAttempts = 8;

    cout << "Willkommen beim Ratespiel!\n";
    cout << "Versuche eine Zahl zwischen 0 und 100 zu erraten.\n";

    while (attempts < maxAttempts) {
        cout << "Versuch #" << attempts + 1 << ": ";
        cin >> guess;

        if (guess == secretNumber) {
            cout << "Glückwunsch! Du hast die Zahl richtig geraten.\n";
            cout << "Belobigung: Du hast die Aufgabe erfolgreich gelöst!\n";
            break;
        } else if (guess < secretNumber) {
            cout << "Zu klein! Versuche es erneut.\n";
        } else {
            cout << "Zu groß! Versuche es erneut.\n";
        }

        attempts++;
    }

    if (attempts == maxAttempts) {
        cout << "Leider hast du die Zahl nicht erraten. Die richtige Zahl war: " << secretNumber << "\n";
    }

    return 0;
}

