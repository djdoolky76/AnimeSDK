#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	enum class WriteMessageThread_State : ::System::Int32
	{
		Idle = 0,
		Writing = 1,
		LostConnection = 2,
		Max = 3,
	};
}
