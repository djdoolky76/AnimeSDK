#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client
{
	struct alignas(8) AlleyModule_ActivityRaidAlleyLogExtraInfo
	{
		::System::Boolean IsFinish; // 0x10
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::List_1<::System::Object*>* TargetInfoList; // 0x18
		::System::Int32 ReminderCount; // 0x20
		::System::UInt32 ActionCount; // 0x24
		::System::UInt32 BackCount; // 0x28
		::System::UInt32 ResetCount; // 0x2C
		::System::UInt32 BeginTimeStamp; // 0x30
		::System::UInt32 EndTimeStamp; // 0x34
	};
}
