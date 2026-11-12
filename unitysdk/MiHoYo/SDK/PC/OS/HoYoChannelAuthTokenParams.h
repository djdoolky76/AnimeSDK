#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelAsyncParams.h"
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELAUTHTOKENPARAMS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D092450)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELAUTHTOKENPARAMS_TOJSON_OFFSET UNITYSDK_OFFSET(0x1D0A8B60)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelAuthTokenParams_TypeDefinitionIndex = 8605;

	class HoYoChannelAuthTokenParams : public ::MiHoYo::SDK::PC::OS::HoYoChannelAsyncParams
	{
	public:
		::System::String* identity; // 0x18
		::System::Boolean forceRefresh; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELAUTHTOKENPARAMS_CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELAUTHTOKENPARAMS_TOJSON_OFFSET))(this);
		}

	};
}
