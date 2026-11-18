#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_DISCORDAUTHTOKENEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D847060)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int DiscordAuthTokenExtension_TypeDefinitionIndex = 19790;

	class DiscordAuthTokenExtension : public ::System::Object
	{
	public:
		::System::String* accessToken; // 0x10
		::System::String* tokenType; // 0x18
		::System::Int32 expiresIn; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* parentApplicationId; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_DISCORDAUTHTOKENEXTENSION__CTOR_OFFSET))(this);
		}
	};
}
