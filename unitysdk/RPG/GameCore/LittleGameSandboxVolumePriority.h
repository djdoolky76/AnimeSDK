#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameSandboxVolumePriority_TypeDefinitionIndex = 19093;

	enum class LittleGameSandboxVolumePriority : ::System::Int32
	{
		Standard = 0,
		Isolated = 1,
	};
}
