#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	enum class MHYSDKC_Console_ProgressState : ::System::Int32
	{
		Unknown = 0,
		Achieved = 1,
		NotStarted = 2,
		InProgress = 3,
	};
}
