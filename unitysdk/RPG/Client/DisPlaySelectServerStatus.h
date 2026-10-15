#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class DisPlaySelectServerStatus : ::System::Int32
	{
		Normal = 0,
		WaitForPing = 1,
		Fail = 2,
	};
}
