#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PETMARBLESPECIALTALKNOTIFY_CTOR_OFFSET UNITYSDK_OFFSET(0xDAEC610)

namespace RPG::Client
{
	class PetMarbleSpecialTalkNotify : public ::System::Object
	{
	public:
		::System::UInt32 TalkId; // 0x10
		::System::UInt32 EntityId; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLESPECIALTALKNOTIFY_CTOR_OFFSET))(this);
		}

	};
}
