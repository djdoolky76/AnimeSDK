#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare
{
	enum class LittleGameClientNetMode : ::System::Byte
	{
		Unknown = 0,
		PVE = 1,
		PVP = 2,
		Replay = 3,
	};
}
