#pragma once
#include "unitysdk/unitysdk.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeConditionEvaluationMode_TypeDefinitionIndex = 30977;

	enum class StateTreeConditionEvaluationMode : ::System::Byte
	{
		Evaluated = 0,
		ForcedTrue = 1,
		ForcedFalse = 2,
	};
}
