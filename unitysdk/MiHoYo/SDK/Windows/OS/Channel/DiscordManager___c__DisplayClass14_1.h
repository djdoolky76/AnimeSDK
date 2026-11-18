#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class DiscordPresenceExtension; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelLogoutResult; }
namespace System { class String; }

#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER___C__DISPLAYCLASS14_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1D51F590)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER___C__DISPLAYCLASS14_1__UPDATERICHPRESENCE_B__1_OFFSET UNITYSDK_OFFSET(0x1D51F5A0)

namespace MiHoYo::SDK::Windows::OS::Channel
{
	inline static constexpr unsigned int DiscordManager___c__DisplayClass14_1_TypeDefinitionIndex = 19634;

	template <typename T>
	class DiscordManager___c__DisplayClass14_1 : public ::System::Object
	{
	public:
		::System::String* accessToken; // 0x10
		::System::Object* CS___8__locals1; // 0x18
		::MiHoYo::SDK::PC::OS::DiscordPresenceExtension* serverPresence; // 0x20
		::System::Int32 expiresIn; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER___C__DISPLAYCLASS14_1__CTOR_OFFSET))(this);
		}

		::System::Void _UpdateRichPresence_b__1(::MiHoYo::SDK::PC::OS::HoYoChannelLogoutResult* logoutResult)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelLogoutResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER___C__DISPLAYCLASS14_1__UPDATERICHPRESENCE_B__1_OFFSET))(this, logoutResult);
		}
	};
}
