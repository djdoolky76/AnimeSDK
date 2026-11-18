#pragma once
#include "unitysdk/unitysdk.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeTransitionType_TypeDefinitionIndex = 31118;

	enum class StateTreeTransitionType : ::System::Byte
	{
		None = 0,
		Succeeded = 1,
		Failed = 2,
		GotoState = 3,
		NextState = 4,
		NextSelectableState = 5,
	};
}
