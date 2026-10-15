#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	enum class CNOrderStatus : ::System::Int32
	{
		CheckStatusNone = -1,
		CheckStatusInit = 0,
		CheckStatusSuccess = 1,
	};
}
