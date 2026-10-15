#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class MissionWayPointType : ::System::Int32
	{
		None = 0,
		Anchor = 1,
		NPC = 2,
		Monster = 3,
		Prop = 4,
		District = 5,
		LittleGame = 6,
	};
}
