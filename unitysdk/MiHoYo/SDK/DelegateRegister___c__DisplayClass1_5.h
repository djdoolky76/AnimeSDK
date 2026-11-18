#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKWebView; }
namespace MiHoYo::SDK { class Web; }

#define MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_5__CTOR_OFFSET UNITYSDK_OFFSET(0x1F0DF190)
#define MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_5__REGISTERWEBFUNC_B__47_OFFSET UNITYSDK_OFFSET(0x1F0E2140)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int DelegateRegister___c__DisplayClass1_5_TypeDefinitionIndex = 35308;

	template <typename T1, typename T2, typename T3, typename T4, typename T5>
	class DelegateRegister___c__DisplayClass1_5 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Web* web; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_5__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterWebFunc_b__47(::MiHoYo::SDK::MiHoYoSDKWebView* w)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_5__REGISTERWEBFUNC_B__47_OFFSET))(this, w);
		}
	};
}
