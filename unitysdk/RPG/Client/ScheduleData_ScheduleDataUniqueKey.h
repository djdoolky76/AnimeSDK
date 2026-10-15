#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	struct alignas(4) ScheduleData_ScheduleDataUniqueKey
	{
		::System::UInt32 BeginTimeStamp; // 0x10
		::System::UInt32 EndTimeStamp; // 0x14
		::System::UInt32 ModuleID; // 0x18
		::System::UInt32 ActivityID; // 0x1C
	};
}
