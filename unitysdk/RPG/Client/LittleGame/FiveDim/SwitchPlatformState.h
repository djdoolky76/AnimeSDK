#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	enum class SwitchPlatformState : ::System::Int32
	{
		Inactive = 0,
		Active = 1,
		DelayActive = 2,
	};
}
