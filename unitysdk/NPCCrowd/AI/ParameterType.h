#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int ParameterType_TypeDefinitionIndex = 80589;

	enum class ParameterType : ::System::Byte
	{
		Bool = 3,
		Int = 2,
		Float = 1,
	};
}
