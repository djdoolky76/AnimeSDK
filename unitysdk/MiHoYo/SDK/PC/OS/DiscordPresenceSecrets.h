#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_DISCORDPRESENCESECRETS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D344850)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int DiscordPresenceSecrets_TypeDefinitionIndex = 19796;

	class DiscordPresenceSecrets : public ::System::Object
	{
	public:
		::System::String* join; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_DISCORDPRESENCESECRETS__CTOR_OFFSET))(this);
		}
	};
}
