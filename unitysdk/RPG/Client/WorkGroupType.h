#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class WorkGroupType : ::System::Int32
	{
		Parallel = 0,
		Sequence = 1,
	};
}
