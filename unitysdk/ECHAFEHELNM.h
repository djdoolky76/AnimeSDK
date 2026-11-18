#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int ECHAFEHELNM_TypeDefinitionIndex = 65913;

enum class ECHAFEHELNM : ::System::Int32
{
	WeekReset = 2,
	NoReset = 0,
	DayReset = 1,
	Condition = 4,
	ActivityPeriodReset = 3,
};
