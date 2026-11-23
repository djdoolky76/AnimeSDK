#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_E3C17EB71AC23386_F912DA6B00E10F08_OFFSET UNITYSDK_OFFSET(0x3A11CE0)
#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_E3C17EB71AC23386__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::MiHoYoCloud
{
	inline static constexpr unsigned int MiHoYoSDKDll_E3C17EB71AC23386_TypeDefinitionIndex = 12748;

	class MiHoYoSDKDll_E3C17EB71AC23386 : public ::System::Object
	{
	public:
		::System::String* A6CAE7339066B0FB; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_E3C17EB71AC23386__CTOR_OFFSET))(this);
		}

		::System::Void F912DA6B00E10F08()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_E3C17EB71AC23386_F912DA6B00E10F08_OFFSET))(this);
		}
	};
}
