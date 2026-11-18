#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelBaseResult.h"

namespace MiHoYo::SDK::PC::OS { class XboxActivitiesExtension; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELACTIVITYRESULT_FROMJSON_OFFSET UNITYSDK_OFFSET(0x1D3467E0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELACTIVITYRESULT_TOJSON_OFFSET UNITYSDK_OFFSET(0x1D3467D0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELACTIVITYRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D346820)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelActivityResult_TypeDefinitionIndex = 19926;

	class HoYoChannelActivityResult : public ::MiHoYo::SDK::PC::OS::HoYoChannelBaseResult
	{
	public:
		::MiHoYo::SDK::PC::OS::XboxActivitiesExtension* xbox; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELACTIVITYRESULT__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELACTIVITYRESULT_TOJSON_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelActivityResult* FromJson(::System::String* json)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelActivityResult*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELACTIVITYRESULT_FROMJSON_OFFSET))(json);
		}
	};
}
