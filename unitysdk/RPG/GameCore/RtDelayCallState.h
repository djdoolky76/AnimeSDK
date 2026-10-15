#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class RtDelayCallState : ::System::Int32
	{
		Waiting = 0,
		Finish = 1,
		Cancel = 2,
	};
}
