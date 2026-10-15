#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::Marble
{
	enum class MarbleEventType : ::System::Int32
	{
		None = 0,
		SpecialKill = 1,
		NormalKill = 2,
		MassDamage = 3,
	};
}
