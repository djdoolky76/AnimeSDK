#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int InputActionDispatchPriority_TypeDefinitionIndex = 53114;

	enum class InputActionDispatchPriority : ::System::Int32
	{
		High = 1,
		Critical = 2,
		Low = -1,
		Normal = 0,
	};
}
