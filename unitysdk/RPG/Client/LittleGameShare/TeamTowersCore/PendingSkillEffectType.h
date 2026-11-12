#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare::TeamTowersCore
{
	inline static constexpr unsigned int PendingSkillEffectType_TypeDefinitionIndex = 38022;

	enum class PendingSkillEffectType : ::System::Byte
	{
		None = 0,
		SpawnIsland = 1,
		SpawnIvy = 2,
	};
}
