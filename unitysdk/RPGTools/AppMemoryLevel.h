#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools
{
	enum class AppMemoryLevel : ::System::Int32
	{
		Normal = 0,
		Warning = 1,
		Urgent = 2,
		Critical = 3,
	};
}
