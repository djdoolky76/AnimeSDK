#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ActionDelayLinkExtraBehaviorMask : ::System::UInt16
	{
		None = 0,
		Bit_AutoForceSync = 1,
	};
}
