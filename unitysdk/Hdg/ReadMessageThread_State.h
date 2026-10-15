#pragma once
#include "unitysdk/unitysdk.h"

namespace Hdg
{
	enum class ReadMessageThread_State : ::System::Int32
	{
		Reading = 0,
		LostConnection = 1,
		Max = 2,
	};
}
