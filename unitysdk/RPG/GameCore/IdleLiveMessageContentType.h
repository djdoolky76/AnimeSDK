#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class IdleLiveMessageContentType : ::System::Int32
	{
		DisplayText = 1,
		DisplayImg = 2,
		Reply = 3,
	};
}
