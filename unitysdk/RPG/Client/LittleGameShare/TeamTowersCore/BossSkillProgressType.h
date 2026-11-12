#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare::TeamTowersCore
{
	inline static constexpr unsigned int BossSkillProgressType_TypeDefinitionIndex = 38003;

	enum class BossSkillProgressType : ::System::Byte
	{
		Invalid = 0,
		Time = 1,
		Count = 2,
	};
}
