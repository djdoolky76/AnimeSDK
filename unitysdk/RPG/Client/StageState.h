#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class StageState : ::System::Int32
	{
		None = 0,
		Lock = 1,
		Todo = 2,
		Doing = 3,
		Done = 4,
	};
}
