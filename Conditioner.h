#pragma once
#include <iostream>
#include "Room.h"
class Conditioner
{

private:
    float t;
    bool on;
    int high;
    int line;

public:
    Conditioner(Room& T)
    {
        this->t = T.getT();
        this->on = 0;
        this->high = 0;
        this->line = 0;
    }
    Conditioner(Room& T, int H,int L)
    {
        this->t = T.getT();
        this->on = 0;
        this->high = H;
        this->line = L;
    }
    void setON(bool ON)
    {
        this->on = ON;
    }

    float high_t(float T)
    {
        float s = 0;

        if (this->on != 0)
        {
            if (T != this->t)
            {
                if (T > this->t)
                {
                    s = this->t;
                    while (s != T)
                    {
                        s++;
                    }

                }
                else
                {
                    s = this->t;
                    while (s != T)
                    {
                        s--;
                    }
                }
                this->t = s;

            }
            return this->t;
        }
        else return -200;

    }
    bool getON()
    {
        return this->on;
    }
    float getT()
    {
        return this->t;
    }
};

