#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKEOSInterface_F58424788FC5580C; }
namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_E9915DD9BC04AF53_F48F6A8A28BCDE5D_OFFSET UNITYSDK_OFFSET(0x29B38A0)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_E9915DD9BC04AF53__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKEOSInterface_E9915DD9BC04AF53_TypeDefinitionIndex = 15613;

	class MiHoYoSDKEOSInterface_E9915DD9BC04AF53 : public ::System::Object
	{
	public:
		::System::Int32 FEC8DC0392823C8D; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* AF94CBD00018A704; // 0x18
		::System::String* AD4834887E87082A; // 0x20
		::MiHoYo::SDK::MiHoYoSDKEOSInterface_F58424788FC5580C* A8791C2B0F6F977B; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_E9915DD9BC04AF53__CTOR_OFFSET))(this);
		}

		::System::Void F48F6A8A28BCDE5D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_E9915DD9BC04AF53_F48F6A8A28BCDE5D_OFFSET))(this);
		}
	};
}
