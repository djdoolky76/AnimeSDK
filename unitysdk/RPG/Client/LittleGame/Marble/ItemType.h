#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::Marble
{
	enum class ItemType : ::System::Int32
	{
		Static = 0,
		Dynamic = 1,
		Trigger = 2,
	};
}
