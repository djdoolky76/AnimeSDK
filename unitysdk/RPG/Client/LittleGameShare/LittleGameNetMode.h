#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare
{
	enum class LittleGameNetMode : ::System::Byte
	{
		DedicatedServer = 0,
		Standalone = 1,
	};
}
