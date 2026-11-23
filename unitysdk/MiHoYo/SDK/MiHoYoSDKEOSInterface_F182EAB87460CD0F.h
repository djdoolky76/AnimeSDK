#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F8B11FF5D1DF1B0F;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_F182EAB87460CD0F_EACCFF97B6A7E630_OFFSET UNITYSDK_OFFSET(0x29B2680)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_F182EAB87460CD0F__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKEOSInterface_F182EAB87460CD0F_TypeDefinitionIndex = 15608;

	class MiHoYoSDKEOSInterface_F182EAB87460CD0F : public ::System::Object
	{
	public:
		::F8B11FF5D1DF1B0F* B304504237E804FD; // 0x10
		::System::String* B818DC27A4B3B150; // 0x18
		::System::Action_1<::F8B11FF5D1DF1B0F*>* E04D2BE64FCE9814; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_F182EAB87460CD0F__CTOR_OFFSET))(this);
		}

		::System::Void EACCFF97B6A7E630(::System::Boolean E82293C0814051A5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_F182EAB87460CD0F_EACCFF97B6A7E630_OFFSET))(this, E82293C0814051A5);
		}
	};
}
