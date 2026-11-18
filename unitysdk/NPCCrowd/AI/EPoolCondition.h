#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int EPoolCondition_TypeDefinitionIndex = 42475;

	enum class EPoolCondition : ::System::Int32
	{
		None = 0,
		Time = 1,
	};
}
