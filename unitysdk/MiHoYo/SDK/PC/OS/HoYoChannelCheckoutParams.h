#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelAsyncParams.h"

namespace MiHoYo::SDK::PC::OS { class GoogleCheckoutParam; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELCHECKOUTPARAMS_TOJSON_OFFSET UNITYSDK_OFFSET(0x1D1476E0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELCHECKOUTPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1476F0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelCheckoutParams_TypeDefinitionIndex = 19881;

	class HoYoChannelCheckoutParams : public ::MiHoYo::SDK::PC::OS::HoYoChannelAsyncParams
	{
	public:
		::System::String* offerId; // 0x20
		::MiHoYo::SDK::PC::OS::GoogleCheckoutParam* google; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELCHECKOUTPARAMS__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELCHECKOUTPARAMS_TOJSON_OFFSET))(this);
		}
	};
}
