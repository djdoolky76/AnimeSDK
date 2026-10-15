#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare
{
	enum class TaskState : ::System::Int32
	{
		Ready = 0,
		Executing = 1,
		Success = 2,
		Fail = 3,
	};
}
