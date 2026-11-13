#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameSandboxStreamingAnchorMode_TypeDefinitionIndex = 19090;

	enum class LittleGameSandboxStreamingAnchorMode : ::System::Int32
	{
		None = 0,
		OwnerEntity = 1,
		TargetProvider = 2,
	};
}
