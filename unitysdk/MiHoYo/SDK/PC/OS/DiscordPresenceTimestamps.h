#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_PC_OS_DISCORDPRESENCETIMESTAMPS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC6B7D0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int DiscordPresenceTimestamps_TypeDefinitionIndex = 19798;

	class DiscordPresenceTimestamps : public ::System::Object
	{
	public:
		::System::Int64 start; // 0x10
		::System::Int64 end; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_DISCORDPRESENCETIMESTAMPS__CTOR_OFFSET))(this);
		}
	};
}
