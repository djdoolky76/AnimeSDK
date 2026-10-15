#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class RtGamePhase : ::System::Int32
	{
		Init = 0,
		Enter = 1,
		Fighting = 2,
		Finish = 3,
	};
}
