#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare::TeamTowersCore
{
	inline static constexpr unsigned int BossSkillViewType_TypeDefinitionIndex = 37076;

	enum class BossSkillViewType : ::System::Byte
	{
		Default = 0,
		Wind = 1,
		Ice = 2,
	};
}
