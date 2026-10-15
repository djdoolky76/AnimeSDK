#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	struct alignas(4) AlleyModule_ActivityRaidAlleyLogTargetInfo
	{
		::System::UInt32 TargetID; // 0x10
		::System::Boolean IsFinish; // 0x14
		::System::Byte _padding0[0x3];
		::System::UInt32 TargetCount; // 0x18
		::System::UInt32 FinishCount; // 0x1C
	};
}
