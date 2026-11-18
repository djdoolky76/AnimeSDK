#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelPresenceResult; }
namespace MiHoYo::SDK::Windows::OS::Channel { class DiscordManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4B0DD0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER___C__DISPLAYCLASS22_0__INVOKEDISCORDSETPRESENCE_B__0_OFFSET UNITYSDK_OFFSET(0x1C4B0DE0)

namespace MiHoYo::SDK::Windows::OS::Channel
{
	inline static constexpr unsigned int DiscordManager___c__DisplayClass22_0_TypeDefinitionIndex = 19637;

	class DiscordManager___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10
		::MiHoYo::SDK::Windows::OS::Channel::DiscordManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Void _InvokeDiscordSetPresence_b__0(::MiHoYo::SDK::PC::OS::HoYoChannelPresenceResult* r)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelPresenceResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER___C__DISPLAYCLASS22_0__INVOKEDISCORDSETPRESENCE_B__0_OFFSET))(this, r);
		}
	};
}
