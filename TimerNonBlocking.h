#ifndef _TIMER_NON_BLOCKING_H_
#define _TIMER_NON_BLOCKING_H_

class TimerNonBlocking
{
public:
    TimerNonBlocking(unsigned long interval);
    unsigned long last_ts;
    unsigned long interval_loop;
    void set_interval(unsigned long interval);
    bool loop(unsigned long current_timestamp, bool reset = true);
};

#endif
