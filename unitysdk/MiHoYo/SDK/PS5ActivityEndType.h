#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	enum class PS5ActivityEndType : ::System::Int32
	{
		Completed = 1,
		Failed = 2,
		Abandoned = 3,
	};
}
