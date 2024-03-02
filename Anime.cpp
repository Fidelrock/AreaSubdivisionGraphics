#include<iostream>
#include <unistd.h> // for sleep function

using namespace std;

int main() {
    // Define the width and height of the animation area
    const int width = 50;
    const int height = 10;

    // Define the initial position of the object
    int posX = 0;

    // Define the animation loop
    while (true) {
        // Clear the screen
        cout << "\033[2J\033[1;1H"; // ANSI escape code to clear the screen

        // Draw the object at its current position
        for (int i = 0; i < height; ++i) {
            for (int j = 0; j < width; ++j) {
                if (j == posX && i == height / 2) {
                    cout << "*"; // Draw the object
                } else {
                    cout << " "; // Draw empty space
                }
            }
            cout << endl;
        }

        // Update the position of the object for the next frame
        posX = (posX + 1) % width;

        // Pause for a short time to control the speed of the animation
        usleep(100000); // Sleep for 100 milliseconds
    }

    return 0;
}