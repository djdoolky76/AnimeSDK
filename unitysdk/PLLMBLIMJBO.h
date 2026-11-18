#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int PLLMBLIMJBO_TypeDefinitionIndex = 43021;

enum class PLLMBLIMJBO : ::System::Int32
{
	InDelay = 1,
	Normal = 3,
	FadeOut = 4,
	Inactive = 6,
	Finish = 5,
	None = 0,
	FadeIn = 2,
	SimulatorStateCount = 7,
};
