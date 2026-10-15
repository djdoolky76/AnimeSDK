#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { class KeyValuePair; }

#define MIHOYO_SDK_NETWORKMANAGER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BEB1A30)
#define MIHOYO_SDK_NETWORKMANAGER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BEB1A60)
#define MIHOYO_SDK_NETWORKMANAGER___C__GETQUERYURL_B__53_0_OFFSET UNITYSDK_OFFSET(0x1BEB1A70)
#define MIHOYO_SDK_NETWORKMANAGER___C__GETQUERYURL_B__53_1_OFFSET UNITYSDK_OFFSET(0x1BEB1A80)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int NetworkManager___c_TypeDefinitionIndex = 8176;

	class NetworkManager___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::String*>** StaticGet___9__53_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::String*>**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x118D0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x118D8);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::String*>** StaticGet___9__53_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::String*>**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x118E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER___C_CTOR_OFFSET))(this);
		}

		::System::String* _GetQueryUrl_b__53_0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER___C__GETQUERYURL_B__53_0_OFFSET))(this, a1);
		}

		::System::String* _GetQueryUrl_b__53_1(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER___C__GETQUERYURL_B__53_1_OFFSET))(this, a1);
		}

	};
}
