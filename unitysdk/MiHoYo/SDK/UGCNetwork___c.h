#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MIHOYO_SDK_UGCNETWORK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB6C4B30)
#define MIHOYO_SDK_UGCNETWORK___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB6C4B70)
#define MIHOYO_SDK_UGCNETWORK___C__PERFORMHTTPREQUESTBINARY_B__6_0_OFFSET UNITYSDK_OFFSET(0xB6C4B80)
#define MIHOYO_SDK_UGCNETWORK___C__PERFORMHTTPREQUESTBINARY_B__6_1_OFFSET UNITYSDK_OFFSET(0xB6C4BA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UGCNetwork___c_TypeDefinitionIndex = 47480;

	class UGCNetwork___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>, ::System::String*>** StaticGet___9__6_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>, ::System::String*>**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x2F1B0);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>, ::System::String*>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>, ::System::String*>**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x2F1B8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x2F1C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCNETWORK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCNETWORK___C_CTOR_OFFSET))(this);
		}

		::System::String* _PerformHttpRequestBinary_b__6_0(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*> a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCNETWORK___C__PERFORMHTTPREQUESTBINARY_B__6_0_OFFSET))(this, a1);
		}

		::System::String* _PerformHttpRequestBinary_b__6_1(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*> a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCNETWORK___C__PERFORMHTTPREQUESTBINARY_B__6_1_OFFSET))(this, a1);
		}

	};
}
