#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::Win
{
	enum class AuthProcess : ::System::Int32
	{
		Waiting = 0,
		Timeout = 1,
		Failed = 2,
	};
}
