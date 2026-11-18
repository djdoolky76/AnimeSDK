#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelAsyncParams.h"

namespace MiHoYo::SDK::PC::OS { class XboxLeaderboardParamExtension; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELLEADERBOARDPARAMS_TOJSON_OFFSET UNITYSDK_OFFSET(0x1E061DD0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELLEADERBOARDPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E061DE0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelLeaderboardParams_TypeDefinitionIndex = 19923;

	class HoYoChannelLeaderboardParams : public ::MiHoYo::SDK::PC::OS::HoYoChannelAsyncParams
	{
	public:
		::MiHoYo::SDK::PC::OS::XboxLeaderboardParamExtension* xbox; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELLEADERBOARDPARAMS__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELLEADERBOARDPARAMS_TOJSON_OFFSET))(this);
		}
	};
}
