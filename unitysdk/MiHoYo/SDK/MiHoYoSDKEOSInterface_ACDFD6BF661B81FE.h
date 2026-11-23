#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A67713ED1D84A79B;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_ACDFD6BF661B81FE_F2D4B3CA19E877C2_OFFSET UNITYSDK_OFFSET(0x29B38F0)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_ACDFD6BF661B81FE__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKEOSInterface_ACDFD6BF661B81FE_TypeDefinitionIndex = 15614;

	class MiHoYoSDKEOSInterface_ACDFD6BF661B81FE : public ::System::Object
	{
	public:
		::System::Action_2<::System::String*, ::System::String*>* E04D2BE64FCE9814; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_ACDFD6BF661B81FE__CTOR_OFFSET))(this);
		}

		::System::Void F2D4B3CA19E877C2(::A67713ED1D84A79B* E95A75EDE38C7B9F)
		{
			return ((::System::Void(*)(::PVOID, ::A67713ED1D84A79B*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_ACDFD6BF661B81FE_F2D4B3CA19E877C2_OFFSET))(this, E95A75EDE38C7B9F);
		}
	};
}
