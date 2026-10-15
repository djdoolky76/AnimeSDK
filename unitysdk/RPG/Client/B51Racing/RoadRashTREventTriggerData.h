#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_B51RACING_ROADRASHTREVENTTRIGGERDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xC7D1A90)

namespace RPG::Client::B51Racing
{
	class RoadRashTREventTriggerData : public ::System::Object
	{
	public:
		::System::UInt32 EnemyID; // 0x10
		::System::UInt32 TrID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_ROADRASHTREVENTTRIGGERDATA_CTOR_OFFSET))(this);
		}

	};
}
