#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class DiscordPresenceExtension; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelLoginResult; }
namespace MiHoYo::SDK::Windows::OS::Channel { class DiscordManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER___C__DISPLAYCLASS15_0__CONNECTANDPUBLISH_B__0_OFFSET UNITYSDK_OFFSET(0x1D51F680)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D51F670)

namespace MiHoYo::SDK::Windows::OS::Channel
{
	inline static constexpr unsigned int DiscordManager___c__DisplayClass15_0_TypeDefinitionIndex = 19635;

	class DiscordManager___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::System::String* roleId; // 0x10
		::MiHoYo::SDK::Windows::OS::Channel::DiscordManager* __4__this; // 0x18
		::MiHoYo::SDK::PC::OS::DiscordPresenceExtension* serverPresence; // 0x20
		::System::Action_1<::System::String*>* callback; // 0x28
		::System::String* region; // 0x30
		::System::String* aid; // 0x38
		::System::Int32 generation; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _ConnectAndPublish_b__0(::MiHoYo::SDK::PC::OS::HoYoChannelLoginResult* r)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelLoginResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER___C__DISPLAYCLASS15_0__CONNECTANDPUBLISH_B__0_OFFSET))(this, r);
		}
	};
}
