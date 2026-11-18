#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_DISCORDLOGINPARAMSEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C46D6A0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int DiscordLoginParamsExtension_TypeDefinitionIndex = 19788;

	class DiscordLoginParamsExtension : public ::System::Object
	{
	public:
		::System::String* accessToken; // 0x10
		::System::String* tokenType; // 0x18
		::System::Int32 expiresIn; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_DISCORDLOGINPARAMSEXTENSION__CTOR_OFFSET))(this);
		}
	};
}
