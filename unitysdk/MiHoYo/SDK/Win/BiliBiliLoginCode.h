#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::Win
{
	enum class BiliBiliLoginCode : ::System::Int32
	{
		Success = 0,
		Fail = -1,
		Cancel = -2,
		Logined = 1,
		NeedShowCursor = 100,
	};
}
