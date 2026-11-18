#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int AGBPCLBCELD_TypeDefinitionIndex = 82717;

enum class AGBPCLBCELD : ::System::Int32
{
	Trap = 1,
	StableTrap = 2,
	StickyTrap = 4,
	None = 0,
	Wool = 3,
};
