#pragma once
class Room
{

private:
    float t=0;
   
public:
	Room(float T)
	{
		this->t = T;
	}

	float getT()
	{
		return this->t;
	}
	void setT(float T)
	{
		this->t = T;
	}
};

