#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelDataComponent_PerMonster_State_TypeDefinitionIndex = 57597;

	enum class LevelDataComponent_PerMonster_State : ::System::Byte
	{
		Ready = 0,
		Summoned = 1,
		Dead = 2,
		Passed = 2,
	};
}
