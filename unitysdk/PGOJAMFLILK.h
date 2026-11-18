#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int PGOJAMFLILK_TypeDefinitionIndex = 40932;

enum class PGOJAMFLILK : ::System::Int32
{
	None = 0,
	Start = 1,
	EnterBlinkHoldMode = 6,
	ExecuteTriggered = 5,
	PerfectBlinkAidTriggered = 4,
	End = 2,
	ExitBlinkHoldMode = 7,
	BlinkTriggered = 3,
};
