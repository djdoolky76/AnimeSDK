#pragma once
#include "unitysdk/unitysdk.h"

namespace Unity::IL2CPP::RuntimeServices
{
	enum class BeohmGCActionType : ::System::Int32
	{
		BAT_Invalid = 0,
		BAT_Expand = 1,
		BAT_Collect = 2,
	};
}
