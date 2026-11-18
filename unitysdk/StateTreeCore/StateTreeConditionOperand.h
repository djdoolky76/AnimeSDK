#pragma once
#include "unitysdk/unitysdk.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeConditionOperand_TypeDefinitionIndex = 31119;

	enum class StateTreeConditionOperand : ::System::Byte
	{
		Copy = 0,
		And = 1,
		Or = 2,
	};
}
