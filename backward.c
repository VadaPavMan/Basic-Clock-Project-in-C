#include <stdio.h>
#include <time.h>     // For time functions (not used here, can be removed)
#include <unistd.h>  // For the sleep function
#include <stdlib.h>  // For the system function

int main()
{
    int hours, minutes, seconds;
    hours = 1;  // Start from 01:00:00
    minutes = 60;
    seconds = 60;

    while (1)
    {
        system("clear");  // Clear the console screen

        // Print the current time in hh:mm:ss format
        printf("%02d : %02d : %02d\n", hours, minutes, seconds);

        fflush(stdout);  // Ensure that the output is displayed immediately

        seconds--;  // Decrement seconds

        // Check if seconds have reached 0
        if (seconds == 0)
        {
            minutes--;  // Decrement minutes
            seconds = 60;  // Reset seconds to 60
        }

        // Check if minutes have reached 0
        if (minutes == 0)
        {
            hours--;  // Decrement hours
            minutes = 60;  // Reset minutes to 60
        }

        // Check if hours have reached 0
        if (hours == 0)
        {
            hours = 1;  // Reset hours to 1
            minutes = 60;  // Reset minutes to 60
            seconds = 60;  // Reset seconds to 60
        }
        
        sleep(1);  // Wait for 1 second before updating the time again
    }
    return 0;
}
