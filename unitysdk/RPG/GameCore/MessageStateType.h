#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class MessageStateType : ::System::Int32
	{
		Unknown = 0,
		Normal = 1,
		WaitingReply = 2,
		Finished = 3,
		HasMission = 4,
	};
}
