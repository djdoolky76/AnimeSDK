#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelAsyncParams.h"
namespace MiHoYo::SDK::PC::OS { class XboxRecentPlayersParamExtension; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELRECENTPLAYERSPARAMS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0B7B70)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELRECENTPLAYERSPARAMS_TOJSON_OFFSET UNITYSDK_OFFSET(0x1D0B7B60)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelRecentPlayersParams_TypeDefinitionIndex = 8648;

	class HoYoChannelRecentPlayersParams : public ::MiHoYo::SDK::PC::OS::HoYoChannelAsyncParams
	{
	public:
		::MiHoYo::SDK::PC::OS::XboxRecentPlayersParamExtension* xbox; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELRECENTPLAYERSPARAMS_CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELRECENTPLAYERSPARAMS_TOJSON_OFFSET))(this);
		}

	};
}
