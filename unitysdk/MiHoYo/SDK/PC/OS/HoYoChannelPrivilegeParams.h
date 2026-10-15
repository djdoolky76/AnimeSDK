#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelAsyncParams.h"
namespace MiHoYo::SDK::PC::OS { class XboxPrivilegeParam; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELPRIVILEGEPARAMS_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF30E20)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELPRIVILEGEPARAMS_TOJSON_OFFSET UNITYSDK_OFFSET(0x1BF30E10)

namespace MiHoYo::SDK::PC::OS
{
	class HoYoChannelPrivilegeParams : public ::MiHoYo::SDK::PC::OS::HoYoChannelAsyncParams
	{
	public:
		::MiHoYo::SDK::PC::OS::XboxPrivilegeParam* xbox; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELPRIVILEGEPARAMS_CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELPRIVILEGEPARAMS_TOJSON_OFFSET))(this);
		}

	};
}
