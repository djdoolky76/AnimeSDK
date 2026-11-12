#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelAsyncParams.h"
namespace MiHoYo::SDK::PC::OS { class XboxPrivilegeParam; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELPRIVILEGEPARAMS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0B79C0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELPRIVILEGEPARAMS_TOJSON_OFFSET UNITYSDK_OFFSET(0x1D0B79B0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelPrivilegeParams_TypeDefinitionIndex = 8615;

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
