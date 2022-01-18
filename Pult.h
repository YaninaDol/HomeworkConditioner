#include <iostream>
#include "Conditioner.h"

class Pult

{
private:
    bool on;

public:
    Pult(bool ON)
    {
        this->on = ON;
    }

    void set_t(Conditioner& exampl,float T, Room& r)
    {
        if ((exampl.high_t(T)) != -200)
        {
            r.setT(exampl.high_t(T));
        }
        else std::cout << " Turn on the conditioner! \n";
    }
 
    void setON(bool ON, Conditioner& exampl)
    {
        this->on = ON;
        exampl.setON(this->on);
    }
};

