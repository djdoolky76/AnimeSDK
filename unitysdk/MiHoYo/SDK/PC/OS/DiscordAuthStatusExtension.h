#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_DISCORDAUTHSTATUSEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D847050)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int DiscordAuthStatusExtension_TypeDefinitionIndex = 19791;

	class DiscordAuthStatusExtension : public ::System::Object
	{
	public:
		::System::String* userId; // 0x10
		::System::String* username; // 0x18
		::System::String* displayName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_DISCORDAUTHSTATUSEXTENSION__CTOR_OFFSET))(this);
		}
	};
}
