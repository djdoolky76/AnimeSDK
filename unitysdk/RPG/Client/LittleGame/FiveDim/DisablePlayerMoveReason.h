#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	enum class DisablePlayerMoveReason : ::System::Int32
	{
		None = 0,
		Level = 1,
		SurfaceWillBeDestroyed = 2,
	};
}
