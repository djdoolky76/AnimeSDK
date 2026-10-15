#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int LiveStreamStageState_TypeDefinitionIndex = 62403;

	enum class LiveStreamStageState : ::System::Byte
	{
		None = 0,
		Locked = 1,
		AboutToUnlock = 2,
		Unlocked = 3,
		Review = 4,
	};
}
