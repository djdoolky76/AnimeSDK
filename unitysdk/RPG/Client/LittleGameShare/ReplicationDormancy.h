#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare
{
	enum class ReplicationDormancy : ::System::Byte
	{
		Never = 0,
		Awake = 1,
		DormantAll = 2,
		DormantPartial = 3,
		Initial = 4,
	};
}
