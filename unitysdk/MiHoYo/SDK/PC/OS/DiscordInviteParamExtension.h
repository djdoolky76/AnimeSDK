#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_DISCORDINVITEPARAMEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF31A80)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int DiscordInviteParamExtension_TypeDefinitionIndex = 19802;

	class DiscordInviteParamExtension : public ::System::Object
	{
	public:
		::System::String* userId; // 0x10
		::System::String* message; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_DISCORDINVITEPARAMEXTENSION__CTOR_OFFSET))(this);
		}
	};
}
