#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class UIBubbleItemState : ::System::Int32
	{
		Unknown = 0,
		CountDown = 1,
		Finished = 2,
		Destroy = 3,
	};
}
