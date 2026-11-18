#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int RandomSelectType_TypeDefinitionIndex = 86933;

	enum class RandomSelectType : ::System::Int32
	{
		RandomIgnoreWeight = 1,
		RandomByWeight = 0,
	};
}
