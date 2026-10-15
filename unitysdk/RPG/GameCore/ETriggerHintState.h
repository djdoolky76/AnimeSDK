#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ETriggerHintState : ::System::Byte
	{
		None = 0,
		HintEnabled = 1,
		TriggerEnabled = 2,
		HintTriggered = 4,
		EnabledAndTriggered = 7,
	};
}
