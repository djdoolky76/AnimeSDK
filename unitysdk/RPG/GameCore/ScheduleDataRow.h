#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ScheduleDataRow; }
namespace System { class String; }

#define RPG_GAMECORE_SCHEDULEDATAROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA896A0)
#define RPG_GAMECORE_SCHEDULEDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA89550)

namespace RPG::GameCore
{
	class ScheduleDataRow : public ::System::Object
	{
	public:
		::System::String* EndTime; // 0x10
		::System::String* BeginTime; // 0x18
		::System::UInt32 ID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCHEDULEDATAROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ScheduleDataRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ScheduleDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCHEDULEDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
