#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	enum class DoActionSource : ::System::Int32
	{
		Default = 0,
		CustomVisible = 1,
		CustomLoad = 2,
	};
}
