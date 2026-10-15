#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class DemonKingCardGuideType : ::System::Int32
	{
		Success = 0,
		FailAndSeen = 1,
		FailAndUnseen = 2,
	};
}
