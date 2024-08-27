#include "DigiKeyboard.h"

int pass[] = {39, 30, 31, 32, 33, 34, 35, 36, 37, 38};
int pin[] = {10, 20, 30, 40}; // Example PIN
int pinIndex = 0; // Index to track the current digit of the PIN being entered
bool pinEntered = false; // Flag to indicate whether the PIN has been entered correctly
int count = 0; // Count for 30-second delay

void setup() {
    DigiKeyboard.delay(3000); // Delay before starting the iteration (3 seconds)
}

void loop() {
    // Check if PIN is entered
    if (!pinEntered) {
        enterPIN();
        return; // Exit loop until PIN is entered correctly
    }

    // Check if screen is locked
    if (!isScreenLocked()) {
        // Iterating through each possible passcode combination from 0000 to 9999
        for (int i = 0; i <= 9999; i++) {
            int a = i / 1000;
            int b = (i / 100) % 10;
            int c = (i / 10) % 10;
            int d = i % 10;

            // Simulate entering the passcode by sending signals or performing actions
            // Here, we can print the combination for demonstration
            Serial.print(a);
            Serial.print(b);
            Serial.print(c);
            Serial.println(d);
            
            // Perform the action of entering the passcode and sending Enter key

            // Delay after each attempt (adjust as needed)
            delay(3000);

            count++; // Incrementing count to trigger delay

            if (count == 5) {
                // Delay after every five attempts (adjust as needed)
                delay(30000); 
                count = 0; // Reset count for the next five attempts
            }
        }
    }
}

// Function to enter PIN
void enterPIN() {
    // Simulate entering the PIN
    // Here, we're not directly entering the PIN as it's being brute-forced
    // You may need to implement this part based on your specific requirements
}

// Function to check if the screen is locked
bool isScreenLocked() {
    // Implement the logic to check if the screen is locked
    // Return true if locked, false otherwise
    // You need to implement this part based on the specific device/screen lock mechanism
    // For example, you can check if the screen is off or if it's in a locked state
    return false; // Returning false for now as a placeholder
}
