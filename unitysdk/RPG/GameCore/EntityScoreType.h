#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class EntityScoreType : ::System::Int32
	{
		Player = 0,
		Npc = 1,
		NpcMonster = 2,
		AssemblyNpc = 3,
	};
}
