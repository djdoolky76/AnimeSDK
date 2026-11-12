#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FinalityBattleDifficultyLevel_TypeDefinitionIndex = 11659;

	enum class FinalityBattleDifficultyLevel : ::System::Int32
	{
		None = 0,
		Easy = 1,
		Hard = 2,
	};
}
