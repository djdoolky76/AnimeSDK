#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKWebView; }
namespace MiHoYo::SDK { class Web; }
namespace System { class String; }

#define MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_7__CTOR_OFFSET UNITYSDK_OFFSET(0x1F0DF510)
#define MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_7__REGISTERWEBFUNC_B__49_OFFSET UNITYSDK_OFFSET(0x1F0E21A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int DelegateRegister___c__DisplayClass1_7_TypeDefinitionIndex = 35310;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
	class DelegateRegister___c__DisplayClass1_7 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Web* web; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_7__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterWebFunc_b__49(::MiHoYo::SDK::MiHoYoSDKWebView* w, ::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_7__REGISTERWEBFUNC_B__49_OFFSET))(this, w, url);
		}
	};
}
