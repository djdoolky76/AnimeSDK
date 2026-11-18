#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int IODAICMIFHP_TypeDefinitionIndex = 87151;

enum class IODAICMIFHP : ::System::Int32
{
	ExhaustedFinishedByAttack = 1,
	ExhaustedFinishedByTime = 2,
	ExhaustedTriggered = 0,
	ExhaustedFinishedByStun = 3,
};
