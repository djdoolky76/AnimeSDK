#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::Marble
{
	enum class MarbleCppEvent : ::System::Int32
	{
		None = 0,
		PlayerEnd = 1,
		GameEnd = 2,
	};
}
