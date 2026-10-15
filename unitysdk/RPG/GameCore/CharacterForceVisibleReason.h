#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterForceVisibleReason_TypeDefinitionIndex = 57225;

	enum class CharacterForceVisibleReason : ::System::Byte
	{
		Default = 0,
		ViewMode = 1,
		Task = 2,
	};
}
