#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_DISCORDFRIENDEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC6B7B0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int DiscordFriendExtension_TypeDefinitionIndex = 19793;

	class DiscordFriendExtension : public ::System::Object
	{
	public:
		::System::String* username; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_DISCORDFRIENDEXTENSION__CTOR_OFFSET))(this);
		}
	};
}
