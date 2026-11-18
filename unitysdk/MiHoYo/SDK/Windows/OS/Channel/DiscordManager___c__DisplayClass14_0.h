#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class DiscordPresenceExtension; }
namespace MiHoYo::SDK::Windows::OS::Channel { class DiscordManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D51F260)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER___C__DISPLAYCLASS14_0__UPDATERICHPRESENCE_B__0_OFFSET UNITYSDK_OFFSET(0x1D51F270)

namespace MiHoYo::SDK::Windows::OS::Channel
{
	inline static constexpr unsigned int DiscordManager___c__DisplayClass14_0_TypeDefinitionIndex = 19633;

	class DiscordManager___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::System::String* currentAid; // 0x10
		::System::String* roleId; // 0x18
		::System::Action_1<::System::String*>* callback; // 0x20
		::System::String* region; // 0x28
		::MiHoYo::SDK::Windows::OS::Channel::DiscordManager* __4__this; // 0x30
		::System::Int32 generation; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void _UpdateRichPresence_b__0(::System::Boolean ok, ::System::String* accessToken, ::System::Int32 expiresIn, ::System::Int64 expireAt, ::MiHoYo::SDK::PC::OS::DiscordPresenceExtension* serverPresence, ::System::String* errMsg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::Int32, ::System::Int64, ::MiHoYo::SDK::PC::OS::DiscordPresenceExtension*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER___C__DISPLAYCLASS14_0__UPDATERICHPRESENCE_B__0_OFFSET))(this, ok, accessToken, expiresIn, expireAt, serverPresence, errMsg);
		}
	};
}
