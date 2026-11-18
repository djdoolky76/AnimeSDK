#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_DISCORDPRESENCEPARTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D506AF0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int DiscordPresenceParty_TypeDefinitionIndex = 19795;

	class DiscordPresenceParty : public ::System::Object
	{
	public:
		::System::String* id; // 0x10
		::System::Int32 currentSize; // 0x18
		::System::Int32 maxSize; // 0x1C
		::System::String* privacy; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_DISCORDPRESENCEPARTY__CTOR_OFFSET))(this);
		}
	};
}
