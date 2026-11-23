#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B3F4502DE428DD6D;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_F58424788FC5580C_AD8C2185B069423A_OFFSET UNITYSDK_OFFSET(0x29B3530)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_F58424788FC5580C__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKEOSInterface_F58424788FC5580C_TypeDefinitionIndex = 15612;

	class MiHoYoSDKEOSInterface_F58424788FC5580C : public ::System::Object
	{
	public:
		::System::String* F937AFADF857C1DB; // 0x10
		::System::Action_3<::System::Int32, ::System::String*, ::System::String*>* E04D2BE64FCE9814; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_F58424788FC5580C__CTOR_OFFSET))(this);
		}

		::System::Void AD8C2185B069423A(::B3F4502DE428DD6D* FBECBDA0FE4CB35A)
		{
			return ((::System::Void(*)(::PVOID, ::B3F4502DE428DD6D*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_F58424788FC5580C_AD8C2185B069423A_OFFSET))(this, FBECBDA0FE4CB35A);
		}
	};
}
