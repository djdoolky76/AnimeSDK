#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelAsyncParams.h"

namespace MiHoYo::SDK::PC::OS { class DiscordPresenceExtension; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELPRESENCEPARAMS_TOJSON_OFFSET UNITYSDK_OFFSET(0x1E061DF0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELPRESENCEPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E061E00)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelPresenceParams_TypeDefinitionIndex = 19933;

	class HoYoChannelPresenceParams : public ::MiHoYo::SDK::PC::OS::HoYoChannelAsyncParams
	{
	public:
		::System::String* action; // 0x20
		::MiHoYo::SDK::PC::OS::DiscordPresenceExtension* discord; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELPRESENCEPARAMS__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELPRESENCEPARAMS_TOJSON_OFFSET))(this);
		}
	};
}
