#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { class KeyValuePair; }

#define MIHOYO_SDK_UGCNETWORK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB063DB0)
#define MIHOYO_SDK_UGCNETWORK___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB063DF0)
#define MIHOYO_SDK_UGCNETWORK___C__PERFORMHTTPREQUESTBINARY_B__6_0_OFFSET UNITYSDK_OFFSET(0xB063E00)
#define MIHOYO_SDK_UGCNETWORK___C__PERFORMHTTPREQUESTBINARY_B__6_1_OFFSET UNITYSDK_OFFSET(0xB063E20)

namespace MiHoYo::SDK
{
	class UGCNetwork___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::String*>** StaticGet___9__6_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::String*>**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x368E0);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::String*>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::String*>**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x368E8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x368F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCNETWORK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCNETWORK___C_CTOR_OFFSET))(this);
		}

		::System::String* _PerformHttpRequestBinary_b__6_0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCNETWORK___C__PERFORMHTTPREQUESTBINARY_B__6_0_OFFSET))(this, a1);
		}

		::System::String* _PerformHttpRequestBinary_b__6_1(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCNETWORK___C__PERFORMHTTPREQUESTBINARY_B__6_1_OFFSET))(this, a1);
		}

	};
}
