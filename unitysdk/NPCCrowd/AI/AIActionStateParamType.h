#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AIActionStateParamType_TypeDefinitionIndex = 49126;

	enum class AIActionStateParamType : ::System::Int32
	{
		Bool = 0,
		Float = 2,
		Int = 1,
	};
}
