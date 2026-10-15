#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class RogueCompositionTypeDisableOperation : ::System::Int32
	{
		None = 0,
		Level = 1,
		Attribute = 2,
		Remove = 3,
		Clone = 4,
	};
}
