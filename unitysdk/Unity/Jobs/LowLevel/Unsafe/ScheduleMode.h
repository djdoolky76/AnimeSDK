#pragma once
#include "unitysdk/unitysdk.h"

namespace Unity::Jobs::LowLevel::Unsafe
{
	enum class ScheduleMode : ::System::Int32
	{
		Run = 0,
		Batched = 1,
	};
}
