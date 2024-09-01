#include <stdio.h>
#include <time.h>
#include <unistd.h>  // For the sleep function
#include <stdlib.h>  // For the system function

int main()
{
    int hours, minutes, seconds;
    hours = minutes = seconds = 0;  // Initialize time to 00:00:00

    while (1)
    {
        system("clear");  // Clear the console screen

        // Print the current time in hh:mm:ss format
        printf("%02d : %02d : %02d\n", hours, minutes, seconds);

        fflush(stdout);  // Ensure that the output is displayed immediately

        seconds++;  // Increment seconds

        // Check if seconds have reached 60
        if (seconds == 60)
        {
            minutes++;  // Increment minutes
            seconds = 0;  // Reset seconds to 0
        }

        // Check if minutes have reached 60
        if (minutes == 60)
        {
            hours++;  // Increment hours
            minutes = 0;  // Reset minutes to 0
        }

        // Check if hours have reached 24
        if (hours == 24)
        {
            hours = 0;  // Reset hours to 0
            minutes = 0;  // Reset minutes to 0
            seconds = 0;  // Reset seconds to 0
        }
        
        sleep(1);  // Wait for 1 second before updating the time again
    }
    return 0;
}
