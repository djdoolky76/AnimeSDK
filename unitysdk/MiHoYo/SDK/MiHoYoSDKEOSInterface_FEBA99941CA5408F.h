#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKEOSInterface_BFF9CBFA238D5DD1; }
namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_FEBA99941CA5408F_ADB9A1BBD641FFC3_OFFSET UNITYSDK_OFFSET(0x29B34F0)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_FEBA99941CA5408F__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKEOSInterface_FEBA99941CA5408F_TypeDefinitionIndex = 15611;

	class MiHoYoSDKEOSInterface_FEBA99941CA5408F : public ::System::Object
	{
	public:
		::System::Int32 FEC8DC0392823C8D; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* FECAF96EEBC85461; // 0x18
		::MiHoYo::SDK::MiHoYoSDKEOSInterface_BFF9CBFA238D5DD1* A8791C2B0F6F977B; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_FEBA99941CA5408F__CTOR_OFFSET))(this);
		}

		::System::Void ADB9A1BBD641FFC3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_FEBA99941CA5408F_ADB9A1BBD641FFC3_OFFSET))(this);
		}
	};
}
