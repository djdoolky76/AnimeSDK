#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelAsyncParams.h"

namespace MiHoYo::SDK::PC::OS { class DiscordLoginParamsExtension; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELLOGINPARAMS_TOJSON_OFFSET UNITYSDK_OFFSET(0x1DA33170)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELLOGINPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA33180)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelLoginParams_TypeDefinitionIndex = 19879;

	class HoYoChannelLoginParams : public ::MiHoYo::SDK::PC::OS::HoYoChannelAsyncParams
	{
	public:
		::MiHoYo::SDK::PC::OS::DiscordLoginParamsExtension* discord; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELLOGINPARAMS__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELLOGINPARAMS_TOJSON_OFFSET))(this);
		}
	};
}
