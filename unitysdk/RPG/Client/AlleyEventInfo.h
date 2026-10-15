#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJOCCOAIFIF.h"
namespace RPG::GameCore { class AlleyEventRow; }

#define RPG_CLIENT_ALLEYEVENTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xE11E0)

namespace RPG::Client
{
	struct alignas(8) AlleyEventInfo
	{
		::RPG::GameCore::AlleyEventRow* EventInfo; // 0x10
		::AJOCCOAIFIF EventState; // 0x18
		::System::UInt32 AcceptCount; // 0x1C
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYEVENTINFO_CTOR_OFFSET))(this, a1);
		}

	};
}
