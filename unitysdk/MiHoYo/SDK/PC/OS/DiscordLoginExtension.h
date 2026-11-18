#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_DISCORDLOGINEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF31A90)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int DiscordLoginExtension_TypeDefinitionIndex = 19789;

	class DiscordLoginExtension : public ::System::Object
	{
	public:
		::System::String* userId; // 0x10
		::System::String* username; // 0x18
		::System::String* displayName; // 0x20
		::System::String* globalName; // 0x28
		::System::Int32 status; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_DISCORDLOGINEXTENSION__CTOR_OFFSET))(this);
		}
	};
}
