#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class GroupLocalTargetType : ::System::Int32
	{
		NPC = 0,
		Monster = 1,
		Prop = 2,
		LittleGame = 3,
		District = 4,
	};
}
