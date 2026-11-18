#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelBaseResult.h"

namespace MiHoYo::SDK::PC::OS { class XboxStatisticsExtension; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTATISTICSRESULT_FROMJSON_OFFSET UNITYSDK_OFFSET(0x1D34B1A0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTATISTICSRESULT_TOJSON_OFFSET UNITYSDK_OFFSET(0x1D34B190)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTATISTICSRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D34B1E0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelStatisticsResult_TypeDefinitionIndex = 19922;

	class HoYoChannelStatisticsResult : public ::MiHoYo::SDK::PC::OS::HoYoChannelBaseResult
	{
	public:
		::MiHoYo::SDK::PC::OS::XboxStatisticsExtension* xbox; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTATISTICSRESULT__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTATISTICSRESULT_TOJSON_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelStatisticsResult* FromJson(::System::String* json)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelStatisticsResult*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTATISTICSRESULT_FROMJSON_OFFSET))(json);
		}
	};
}
