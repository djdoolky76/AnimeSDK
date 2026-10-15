#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectManager_HideFieldEffectReason_TypeDefinitionIndex = 69851;

	enum class MonoEffectManager_HideFieldEffectReason : ::System::Byte
	{
		Default = 0,
		UltraSkill = 1,
		DarkTimelineSkill = 2,
		Camera = 3,
		Task = 4,
		Performance = 5,
		HideLevelStage = 6,
		Count = 7,
	};
}
