#pragma once
#include "unitysdk/unitysdk.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeTransitionPriority_TypeDefinitionIndex = 31123;

	enum class StateTreeTransitionPriority : ::System::Byte
	{
		None = 0,
		Normal = 1,
		Medium = 2,
		High = 3,
		Critical = 4,
	};
}
