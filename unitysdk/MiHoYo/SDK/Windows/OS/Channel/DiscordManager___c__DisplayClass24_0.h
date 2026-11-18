#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Windows::OS::Channel { class DiscordManager; }
namespace MiHoYo::SDK::Windows::OS::Channel { class DiscordManager_DiscordFetchResultCallback; }

#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4B0EC0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER___C__DISPLAYCLASS24_0__FETCHDISCORDPRESENCETOKEN_B__0_OFFSET UNITYSDK_OFFSET(0x1C4B0ED0)

namespace MiHoYo::SDK::Windows::OS::Channel
{
	inline static constexpr unsigned int DiscordManager___c__DisplayClass24_0_TypeDefinitionIndex = 19638;

	class DiscordManager___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Windows::OS::Channel::DiscordManager_DiscordFetchResultCallback* done; // 0x10
		::MiHoYo::SDK::Windows::OS::Channel::DiscordManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void _FetchDiscordPresenceToken_b__0(::MiHoYo::SDK::NetworkResponseModel* resp)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER___C__DISPLAYCLASS24_0__FETCHDISCORDPRESENCETOKEN_B__0_OFFSET))(this, resp);
		}
	};
}
