#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class MockAnimatorRecordFlag : ::System::UInt32
	{
		Parameter = 1,
		LayerState = 2,
		Speed = 4,
		All = 4294967295,
	};
}
