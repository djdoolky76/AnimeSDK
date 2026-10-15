#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class RogueGambleGroupType : ::System::Int32
	{
		None = 0,
		SideGamble = 1,
		SecretRoomGamble = 2,
		CoinRoomGamble = 3,
	};
}
