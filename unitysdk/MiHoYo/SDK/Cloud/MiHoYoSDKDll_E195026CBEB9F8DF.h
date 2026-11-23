#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_E195026CBEB9F8DF_F912DA6B00E10F08_OFFSET UNITYSDK_OFFSET(0x3A987D0)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_E195026CBEB9F8DF__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Cloud
{
	inline static constexpr unsigned int MiHoYoSDKDll_E195026CBEB9F8DF_TypeDefinitionIndex = 12044;

	class MiHoYoSDKDll_E195026CBEB9F8DF : public ::System::Object
	{
	public:
		::System::String* A6CAE7339066B0FB; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_E195026CBEB9F8DF__CTOR_OFFSET))(this);
		}

		::System::Void F912DA6B00E10F08()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_E195026CBEB9F8DF_F912DA6B00E10F08_OFFSET))(this);
		}
	};
}
