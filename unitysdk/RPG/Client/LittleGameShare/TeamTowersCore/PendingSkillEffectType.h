#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare::TeamTowersCore
{
	enum class PendingSkillEffectType : ::System::Byte
	{
		None = 0,
		SpawnIsland = 1,
		SpawnIvy = 2,
	};
}
