#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	enum class EntityInvisibleReason : ::System::UInt32
	{
		None = 0,
		Default = 1,
		LevelVar = 2,
		PlayerIn = 4,
		PlayerOut = 8,
		PlayerCreation = 16,
		MinionOwnerInvisible = 32,
		ActionOrTask = 64,
		CurveViewLoadModeNone = 128,
		EvilSmileDisappear = 256,
	};
}
