#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/DiscordPresenceType.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/DiscordStatusDisplayType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class DiscordPresenceAssets; }
namespace MiHoYo::SDK::PC::OS { class DiscordPresenceButton; }
namespace MiHoYo::SDK::PC::OS { class DiscordPresenceParty; }
namespace MiHoYo::SDK::PC::OS { class DiscordPresenceSecrets; }
namespace MiHoYo::SDK::PC::OS { class DiscordPresenceTimestamps; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_DISCORDPRESENCEEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D13B830)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int DiscordPresenceExtension_TypeDefinitionIndex = 19801;

	class DiscordPresenceExtension : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PC::OS::DiscordPresenceType type; // 0x10
		::MiHoYo::SDK::PC::OS::DiscordStatusDisplayType statusDisplayType; // 0x14
		::System::String* details; // 0x18
		::System::String* state; // 0x20
		::MiHoYo::SDK::PC::OS::DiscordPresenceParty* party; // 0x28
		::MiHoYo::SDK::PC::OS::DiscordPresenceSecrets* secrets; // 0x30
		::MiHoYo::SDK::PC::OS::DiscordPresenceAssets* assets; // 0x38
		::MiHoYo::SDK::PC::OS::DiscordPresenceTimestamps* timestamps; // 0x40
		::Il2CppArray<::MiHoYo::SDK::PC::OS::DiscordPresenceButton*>* buttons; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_DISCORDPRESENCEEXTENSION__CTOR_OFFSET))(this);
		}
	};
}
