#pragma once
#include "unitysdk/unitysdk.h"

namespace StateTreeGameplay
{
	inline static constexpr unsigned int StateTreeConditionCompareOperator_TypeDefinitionIndex = 51401;

	enum class StateTreeConditionCompareOperator : ::System::Byte
	{
		LessOrEqual = 1,
		Equal = 2,
		GreaterOrEqual = 4,
		NotEqual = 3,
		Less = 0,
		Greater = 5,
	};
}
