#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::Win
{
	enum class BiliBiliInitCode : ::System::Int32
	{
		Success = 0,
		Fail = -1,
		Reject = -2,
		Inited = 1,
		NeedShowCursor = 100,
	};
}
