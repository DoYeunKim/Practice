#include <iostream>
#include <csignal>

using namespace std;

void signalHandler (int signum)
{
    cout << "Interrupt signal (" << signum << ") received.\n";

    // cleanup and close up stuff here
    // terminate program

    exit(signum);
}

int main ()
{
    // register signal SIGINT and signal handler
    signal(SIGINT, signalHandler);

    while (1)
    {
        cout << "Going to sleep....." << endl;
        // sleep(1); // this is a windows function
        /*
        int raise (signal sig)
        raises flag (sends signal)        
        */
    }

    return 0;
}