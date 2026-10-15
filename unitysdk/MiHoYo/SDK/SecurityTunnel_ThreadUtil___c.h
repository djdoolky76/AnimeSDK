#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MIHOYO_SDK_SECURITYTUNNEL_THREADUTIL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB04E3A0)
#define MIHOYO_SDK_SECURITYTUNNEL_THREADUTIL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB04E3E0)
#define MIHOYO_SDK_SECURITYTUNNEL_THREADUTIL___C__RANDOMSTRING_B__8_0_OFFSET UNITYSDK_OFFSET(0xB04E3F0)

namespace MiHoYo::SDK
{
	class SecurityTunnel_ThreadUtil___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x340F0);
		}

		static ::System::Func_2<::System::String*, ::System::Char>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::System::String*, ::System::Char>**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x340F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_THREADUTIL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_THREADUTIL___C_CTOR_OFFSET))(this);
		}

		::System::Char _RandomString_b__8_0(::System::String* a1)
		{
			return ((::System::Char(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_THREADUTIL___C__RANDOMSTRING_B__8_0_OFFSET))(this, a1);
		}

	};
}
