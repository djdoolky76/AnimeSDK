#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define MIHOYO_SDK_NETUTIL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C336C40)
#define MIHOYO_SDK_NETUTIL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C336C70)
#define MIHOYO_SDK_NETUTIL___C__HTTPGET_B__10_0_OFFSET UNITYSDK_OFFSET(0x1C336C90)
#define MIHOYO_SDK_NETUTIL___C__HTTPGET_B__9_0_OFFSET UNITYSDK_OFFSET(0x1C336C80)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int NetUtil___c_TypeDefinitionIndex = 8196;

	class NetUtil___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::String*, ::UnityEngine::Networking::UnityWebRequest*>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::System::String*, ::UnityEngine::Networking::UnityWebRequest*>**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0xAD70);
		}

		static ::System::Func_2<::System::String*, ::UnityEngine::Networking::UnityWebRequest*>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::System::String*, ::UnityEngine::Networking::UnityWebRequest*>**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0xAD78);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0xAD80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL___C_CTOR_OFFSET))(this);
		}

		::UnityEngine::Networking::UnityWebRequest* _HttpGet_b__9_0(::System::String* a1)
		{
			return ((::UnityEngine::Networking::UnityWebRequest*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL___C__HTTPGET_B__9_0_OFFSET))(this, a1);
		}

		::UnityEngine::Networking::UnityWebRequest* _HttpGet_b__10_0(::System::String* a1)
		{
			return ((::UnityEngine::Networking::UnityWebRequest*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL___C__HTTPGET_B__10_0_OFFSET))(this, a1);
		}

	};
}
