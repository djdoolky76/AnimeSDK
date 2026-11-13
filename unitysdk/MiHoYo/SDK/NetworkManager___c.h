#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MIHOYO_SDK_NETWORKMANAGER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C340110)
#define MIHOYO_SDK_NETWORKMANAGER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C340140)
#define MIHOYO_SDK_NETWORKMANAGER___C__GETQUERYURL_B__53_0_OFFSET UNITYSDK_OFFSET(0x1C340150)
#define MIHOYO_SDK_NETWORKMANAGER___C__GETQUERYURL_B__53_1_OFFSET UNITYSDK_OFFSET(0x1C340160)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int NetworkManager___c_TypeDefinitionIndex = 8185;

	class NetworkManager___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>, ::System::String*>** StaticGet___9__53_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>, ::System::String*>**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0xB4A0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0xB4A8);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>, ::System::String*>** StaticGet___9__53_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>, ::System::String*>**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0xB4B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER___C_CTOR_OFFSET))(this);
		}

		::System::String* _GetQueryUrl_b__53_0(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*> a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER___C__GETQUERYURL_B__53_0_OFFSET))(this, a1);
		}

		::System::String* _GetQueryUrl_b__53_1(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*> a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER___C__GETQUERYURL_B__53_1_OFFSET))(this, a1);
		}

	};
}
