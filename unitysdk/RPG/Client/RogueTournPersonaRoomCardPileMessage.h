#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class RogueTournPersonaRoomCardPileMessage : ::System::Int32
	{
		None = 0,
		OnSelectedPileChanged = 1,
		OnSelectedCardChanged = 2,
	};
}
