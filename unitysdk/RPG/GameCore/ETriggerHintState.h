#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ETriggerHintState_TypeDefinitionIndex = 57386;

	enum class ETriggerHintState : ::System::Byte
	{
		None = 0,
		HintEnabled = 1,
		TriggerEnabled = 2,
		HintTriggered = 4,
		EnabledAndTriggered = 7,
	};
}
