#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	enum class RIStateSetReason : ::System::Int32
	{
		Default = 0,
		SwitchPlatform = 2,
		DestructibleProp = 4,
		Action = 8,
		Money = 16,
		Conveyor = 32,
	};
}
