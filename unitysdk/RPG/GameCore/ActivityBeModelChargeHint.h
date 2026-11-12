#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityBeModelChargeHint_TypeDefinitionIndex = 57232;

	enum class ActivityBeModelChargeHint : ::System::Int32
	{
		None = 0,
		Speed = 1,
		MaxSP = 2,
		EnergyBar = 3,
	};
}
