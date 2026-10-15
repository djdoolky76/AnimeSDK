#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnBasedModifierCallbackType_TypeDefinitionIndex = 54669;

	enum class TurnBasedModifierCallbackType : ::System::Byte
	{
		None = 0,
		Event = 1,
		Property = 2,
		DynamicValue = 3,
	};
}
