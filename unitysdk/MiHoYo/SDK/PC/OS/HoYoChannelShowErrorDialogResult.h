#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelBaseResult.h"
namespace MiHoYo::SDK::PC::OS { class HoYoChannelShowErrorDialogResult; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELSHOWERRORDIALOGRESULT_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF31080)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSHOWERRORDIALOGRESULT_FROMJSON_OFFSET UNITYSDK_OFFSET(0x1BF31040)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSHOWERRORDIALOGRESULT_TOJSON_OFFSET UNITYSDK_OFFSET(0x1BF31030)

namespace MiHoYo::SDK::PC::OS
{
	class HoYoChannelShowErrorDialogResult : public ::MiHoYo::SDK::PC::OS::HoYoChannelBaseResult
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSHOWERRORDIALOGRESULT_CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSHOWERRORDIALOGRESULT_TOJSON_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelShowErrorDialogResult* FromJson(::System::String* a1)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelShowErrorDialogResult*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSHOWERRORDIALOGRESULT_FROMJSON_OFFSET))(a1);
		}

	};
}
