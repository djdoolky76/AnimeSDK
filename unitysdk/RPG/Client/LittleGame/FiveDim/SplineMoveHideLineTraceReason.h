#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	enum class SplineMoveHideLineTraceReason : ::System::Int32
	{
		None = 0,
		Default = 1,
		EntityVisible = 2,
	};
}
