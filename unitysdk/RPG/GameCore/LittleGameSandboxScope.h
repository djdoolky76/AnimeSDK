#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameSandboxScope_TypeDefinitionIndex = 19089;

	enum class LittleGameSandboxScope : ::System::Int32
	{
		Disabled = 0,
		Container = 1,
		Instance = 2,
		Active = 3,
		Manual = 4,
		OuterCustom = 5,
	};
}
