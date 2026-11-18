#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelAsyncParams.h"

namespace MiHoYo::SDK::PC::OS { class XboxCheckPermissionParam; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELCHECKPERMISSIONPARAMS_TOJSON_OFFSET UNITYSDK_OFFSET(0x1E061DB0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELCHECKPERMISSIONPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E061DC0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelCheckPermissionParams_TypeDefinitionIndex = 19898;

	class HoYoChannelCheckPermissionParams : public ::MiHoYo::SDK::PC::OS::HoYoChannelAsyncParams
	{
	public:
		::MiHoYo::SDK::PC::OS::XboxCheckPermissionParam* xbox; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELCHECKPERMISSIONPARAMS__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELCHECKPERMISSIONPARAMS_TOJSON_OFFSET))(this);
		}
	};
}
