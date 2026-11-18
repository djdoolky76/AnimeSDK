#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int ConditionList_ConditionsCheckMode_TypeDefinitionIndex = 29504;

	enum class ConditionList_ConditionsCheckMode : ::System::Int32
	{
		AllTrueRequired = 0,
		AnyTrueSuffice = 1,
	};
}
