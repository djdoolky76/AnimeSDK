#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_WOLFSLIVERHACKEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0xE47F7C0)

namespace RPG::Client
{
	class WolfSliverHackEvent : public ::System::Object
	{
	public:
		::System::UInt32 CurHP; // 0x10
		::System::UInt32 HPMax; // 0x14
		::System::UInt32 HPMin; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFSLIVERHACKEVENT_CTOR_OFFSET))(this);
		}

	};
}
