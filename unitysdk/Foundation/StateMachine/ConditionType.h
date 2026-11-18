#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::StateMachine
{
	inline static constexpr unsigned int ConditionType_TypeDefinitionIndex = 8822;

	enum class ConditionType : ::System::Byte
	{
		If = 1,
		None = 0,
		NotEqual = 7,
		IfNot = 2,
		LessEquals = 10,
		Max = 11,
		Equals = 6,
		Greater = 3,
		Less = 4,
		GreaterEquals = 9,
	};
}
