#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class TurnBasedModifierCallbackType : ::System::Byte
	{
		None = 0,
		Event = 1,
		Property = 2,
		DynamicValue = 3,
	};
}
