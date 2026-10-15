#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTALKCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x111F0)

namespace RPG::Client::ActivityMarble
{
	struct alignas(4) MarbleSealTalkConfig
	{
		::System::UInt32 TalkID; // 0x10
		::System::UInt32 TeamIndex; // 0x14
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTALKCONFIG_CTOR_OFFSET))(this, a1, a2);
		}

	};
}
