#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	enum class SpikeTrapState : ::System::Int32
	{
		Inactive = 0,
		Active = 1,
		DelayActive = 2,
		DelayInactive = 3,
	};
}
