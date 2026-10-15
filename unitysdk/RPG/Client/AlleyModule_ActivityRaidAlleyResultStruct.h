#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	struct alignas(4) AlleyModule_ActivityRaidAlleyResultStruct
	{
		::System::UInt32 ID; // 0x10
		::System::Boolean IsSpecial; // 0x14
	};
}
