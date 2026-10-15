#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class RogueAeonEffectType : ::System::Int32
	{
		None = 0,
		AddMazeBuff = 1,
		ModifyBuffProbability = 2,
	};
}
