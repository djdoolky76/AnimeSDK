#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	enum class ReadMessageThread_State : ::System::Int32
	{
		Reading = 0,
		LostConnection = 1,
		Max = 2,
	};
}
