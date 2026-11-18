#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelBaseResult.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELPRESENCERESULT_TOJSON_OFFSET UNITYSDK_OFFSET(0x1CC71E80)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELPRESENCERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC71E90)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelPresenceResult_TypeDefinitionIndex = 19934;

	class HoYoChannelPresenceResult : public ::MiHoYo::SDK::PC::OS::HoYoChannelBaseResult
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELPRESENCERESULT__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELPRESENCERESULT_TOJSON_OFFSET))(this);
		}
	};
}
