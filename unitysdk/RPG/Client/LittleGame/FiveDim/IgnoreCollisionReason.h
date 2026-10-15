#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	enum class IgnoreCollisionReason : ::System::Int16
	{
		None = 0,
		Default = 1,
		PlayerDash = 2,
	};
}
