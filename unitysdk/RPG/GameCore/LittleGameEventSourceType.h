#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class LittleGameEventSourceType : ::System::Int32
	{
		ContextSelf = 0,
		LevelGraph = 1,
		SpecificEntity = 2,
	};
}
