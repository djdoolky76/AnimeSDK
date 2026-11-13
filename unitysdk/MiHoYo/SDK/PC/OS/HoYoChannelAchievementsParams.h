#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelAsyncParams.h"
namespace MiHoYo::SDK::PC::OS { class XboxAchievementsParamExtension; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELACHIEVEMENTSPARAMS_CTOR_OFFSET UNITYSDK_OFFSET(0x1B0E4F40)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELACHIEVEMENTSPARAMS_TOJSON_OFFSET UNITYSDK_OFFSET(0x1B0EF8C0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelAchievementsParams_TypeDefinitionIndex = 8637;

	class HoYoChannelAchievementsParams : public ::MiHoYo::SDK::PC::OS::HoYoChannelAsyncParams
	{
	public:
		::System::String* action; // 0x18
		::MiHoYo::SDK::PC::OS::XboxAchievementsParamExtension* xbox; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELACHIEVEMENTSPARAMS_CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELACHIEVEMENTSPARAMS_TOJSON_OFFSET))(this);
		}

	};
}
