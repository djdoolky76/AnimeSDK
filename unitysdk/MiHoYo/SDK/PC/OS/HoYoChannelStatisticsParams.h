#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelAsyncParams.h"
namespace MiHoYo::SDK::PC::OS { class XboxStatisticsParamExtension; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTATISTICSPARAMS_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF31290)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTATISTICSPARAMS_TOJSON_OFFSET UNITYSDK_OFFSET(0x1BF31280)

namespace MiHoYo::SDK::PC::OS
{
	class HoYoChannelStatisticsParams : public ::MiHoYo::SDK::PC::OS::HoYoChannelAsyncParams
	{
	public:
		::System::String* action; // 0x18
		::MiHoYo::SDK::PC::OS::XboxStatisticsParamExtension* xbox; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTATISTICSPARAMS_CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTATISTICSPARAMS_TOJSON_OFFSET))(this);
		}

	};
}
