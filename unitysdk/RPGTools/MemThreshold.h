#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools
{
	enum class MemThreshold : ::System::Int32
	{
		Normal = 600,
		Warning = 800,
		Urgent = 1000,
		Critical = 1200,
	};
}
