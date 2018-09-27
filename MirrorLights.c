#include <pigpio.h>
#include <stdio.h>
#include <stdint.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
        gpioInitialise();

        if(argv[1][0] == '1') {
                //on
                gpioServo(23, 2500);
                usleep(1000 * 1000);
                gpioServo(23, 1500);
                usleep(1000 * 1000);
        }
        else if(argv[1][0] == '0') {
                // off
                gpioServo(23, 750);
                usleep(1000 * 1000);
                gpioServo(23, 1500);
                usleep(1000 * 1000);
        }

        return 0;
}
