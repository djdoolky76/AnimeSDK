#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class LevelGraphState : ::System::Int32
	{
		Unknow = 0,
		Init = 1,
		Ready = 2,
		Executing = 3,
		Finish = 4,
	};
}
