#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int EConditionType_TypeDefinitionIndex = 46207;

	enum class EConditionType : ::System::Int32
	{
		Group = 5,
		Entity = 4,
		Not = 6,
		None = 0,
		Time = 1,
		Compare = 2,
		Activity = 8,
		SectionOrScene = 7,
		Default = 3,
	};
}
