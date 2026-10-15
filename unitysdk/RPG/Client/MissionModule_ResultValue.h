#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	struct alignas(4) MissionModule_ResultValue
	{
		::System::UInt32 MissionResultValue; // 0x10
	};
}
