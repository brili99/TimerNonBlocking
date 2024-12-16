#include "TimerNonBlocking.h"

TimerNonBlocking::TimerNonBlocking(unsigned long interval)
{
    interval_loop = interval;
}

void TimerNonBlocking::set_interval(unsigned long interval)
{
    interval_loop = interval;
}

bool TimerNonBlocking::loop(unsigned long &current_timestamp, bool reset)
{
    if (current_timestamp - last_ts >= interval_loop)
    {
        if (reset)
            last_ts = current_timestamp;
        return true;
    }
    return false;
}
