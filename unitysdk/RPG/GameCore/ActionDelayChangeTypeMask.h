#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionDelayChangeTypeMask_TypeDefinitionIndex = 24738;

	enum class ActionDelayChangeTypeMask : ::System::UInt16
	{
		None = 0,
		Bit_Increase = 1,
		Bit_Decrease = 2,
		All = 65535,
	};
}
