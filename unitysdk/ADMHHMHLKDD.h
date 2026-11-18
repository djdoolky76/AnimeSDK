#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int ADMHHMHLKDD_TypeDefinitionIndex = 51653;

enum class ADMHHMHLKDD : ::System::Byte
{
	None = 0,
	Ready = 1,
	DuringNetworkSynchronization = 2,
	SynchronizationComplete = 3,
	Done = 4,
};
