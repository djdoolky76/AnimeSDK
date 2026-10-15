#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::Win
{
	enum class BiliBiliPayCode : ::System::Int32
	{
		Success = 0,
		Fail = -1,
		Cancel = -2,
		ReOrder = 1,
		AntiAddication = 2,
		AntiFail = 3,
		Paying = 4,
		Close = 5,
	};
}
