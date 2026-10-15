#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class BookletStepState : ::System::Int32
	{
		Ready = 0,
		Running = 1,
		Completed = 2,
		Destroyed = 3,
	};
}
