#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>

using namespace std;

/*DATA STRUCTURES */

struct Process {
    int burstTime;
    int priority;
    int arrivalTime;
    int waitingTime;
    bool finished;
    Process* next;
};
