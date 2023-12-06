#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(nullptr)));

    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;

    // Display the random number
    cout << "Random Number: " << randomNumber << endl;

    // Example loop using the random number
    cout << "Counting up to the random number:" << endl;
    for (int i = 1; i <= randomNumber; ++i) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
