#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::CakeRace
{
	enum class CakeRaceReplayRecord_MessageType : ::System::Int32
	{
		SyncNotify = 0,
		Response = 1,
	};
}
