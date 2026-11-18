#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int CompareConditionType_TypeDefinitionIndex = 39506;

	enum class CompareConditionType : ::System::Byte
	{
		NotEqual = 7,
		Equals = 6,
		If = 1,
		IfNot = 2,
		Greater = 3,
		Less = 4,
		GreaterEquals = 9,
		LessEquals = 10,
	};
}
