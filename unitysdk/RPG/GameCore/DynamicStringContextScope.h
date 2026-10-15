#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class DynamicStringContextScope : ::System::Int32
	{
		Context = 0,
		ContextTaskTemplate = 1,
		ContextAbility = 2,
		ContextModifier = 3,
		ContextOwner = 4,
	};
}
