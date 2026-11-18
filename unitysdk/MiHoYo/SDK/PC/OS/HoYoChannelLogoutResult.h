#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelBaseResult.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELLOGOUTRESULT_TOJSON_OFFSET UNITYSDK_OFFSET(0x1CE385E0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELLOGOUTRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE385F0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelLogoutResult_TypeDefinitionIndex = 19932;

	class HoYoChannelLogoutResult : public ::MiHoYo::SDK::PC::OS::HoYoChannelBaseResult
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELLOGOUTRESULT__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELLOGOUTRESULT_TOJSON_OFFSET))(this);
		}
	};
}
