#pragma once
#include "unitysdk/unitysdk.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeStateSelectionBehavior_TypeDefinitionIndex = 31121;

	enum class StateTreeStateSelectionBehavior : ::System::Byte
	{
		None = 0,
		TryEnterState = 1,
		TrySelectChildrenInOrder = 2,
		TryFollowTransitions = 3,
	};
}
