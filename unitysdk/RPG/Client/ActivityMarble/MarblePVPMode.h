#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ActivityMarble
{
	enum class MarblePVPMode : ::System::Int32
	{
		FreeMatch = 0,
		Invitation = 1,
		MultiplayFreeMatch = 2,
		MultiplayInvitation = 3,
		CoopBoss = 4,
	};
}
