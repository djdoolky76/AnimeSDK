#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ActivityAlley
{
	enum class AlleyPackDragStateEnum : ::System::Int32
	{
		Idle = 0,
		Select = 1,
		Drag = 2,
		Settle = 3,
	};
}
