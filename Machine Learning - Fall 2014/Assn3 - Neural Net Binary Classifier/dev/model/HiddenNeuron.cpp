#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "HiddenNeuron.h"


HiddenNeuron::HiddenNeuron()
{
}

HiddenNeuron::HiddenNeuron(std::string name, unsigned int numIncomingWeights, unsigned int numOutgoingWeights)
{
}

HiddenNeuron::HiddenNeuron(const HiddenNeuron& hn)
{
}

HiddenNeuron& HiddenNeuron::operator =(const HiddenNeuron& hn)
{
	return *this;
}

inline std::ostream& operator<<(std::ostream& os, const HiddenNeuron& hn)
{
	return os;
}
