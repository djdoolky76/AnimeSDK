#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameSandboxFixedDeltaTimeMode_TypeDefinitionIndex = 19092;

	enum class LittleGameSandboxFixedDeltaTimeMode : ::System::Int32
	{
		Unchanged = 0,
		FixedValue = 1,
		MatchTargetFrameRate = 2,
	};
}
