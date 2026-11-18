#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_DISCORDPRESENCEASSETS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0609F0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int DiscordPresenceAssets_TypeDefinitionIndex = 19797;

	class DiscordPresenceAssets : public ::System::Object
	{
	public:
		::System::String* largeImage; // 0x10
		::System::String* largeText; // 0x18
		::System::String* largeUrl; // 0x20
		::System::String* smallImage; // 0x28
		::System::String* smallText; // 0x30
		::System::String* smallUrl; // 0x38
		::System::String* inviteCoverImage; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_DISCORDPRESENCEASSETS__CTOR_OFFSET))(this);
		}
	};
}
