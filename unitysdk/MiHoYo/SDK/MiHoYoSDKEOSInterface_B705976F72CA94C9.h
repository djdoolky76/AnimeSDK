#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FEF0BAEDAF91DFCA;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_B705976F72CA94C9_A0027C137B6FE255_OFFSET UNITYSDK_OFFSET(0x29B2740)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_B705976F72CA94C9__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKEOSInterface_B705976F72CA94C9_TypeDefinitionIndex = 15609;

	class MiHoYoSDKEOSInterface_B705976F72CA94C9 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* E04D2BE64FCE9814; // 0x10
		::System::String* B818DC27A4B3B150; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_B705976F72CA94C9__CTOR_OFFSET))(this);
		}

		::System::Void A0027C137B6FE255(::FEF0BAEDAF91DFCA* A6A88FEC942EF2FA)
		{
			return ((::System::Void(*)(::PVOID, ::FEF0BAEDAF91DFCA*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_B705976F72CA94C9_A0027C137B6FE255_OFFSET))(this, A6A88FEC942EF2FA);
		}
	};
}
