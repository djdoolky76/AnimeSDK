#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	enum class DoActionHint : ::System::Int32
	{
		None = 0,
		DoOnInit = 1,
		PlayerInteract = 2,
	};
}
