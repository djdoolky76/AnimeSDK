#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class CookieTokenExchangeInterceptor; }
namespace MiHoYo::SDK { class MiHoYoSDKWebViewManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_COOKIETOKENEXCHANGEINTERCEPTOR___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE79F00)
#define MIHOYO_SDK_COOKIETOKENEXCHANGEINTERCEPTOR___C__DISPLAYCLASS12_0__INTERCEPT_B__0_OFFSET UNITYSDK_OFFSET(0x1EE79F10)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int CookieTokenExchangeInterceptor___c__DisplayClass12_0_TypeDefinitionIndex = 35641;

	class CookieTokenExchangeInterceptor___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::CookieTokenExchangeInterceptor* __4__this; // 0x10
		::System::Action_1<::System::String*>* next; // 0x18
		::System::String* strUrl; // 0x20
		::MiHoYo::SDK::MiHoYoSDKWebViewManager* manager; // 0x28
		::System::String* strMatchedApex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COOKIETOKENEXCHANGEINTERCEPTOR___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _Intercept_b__0(::System::String* strResponse)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COOKIETOKENEXCHANGEINTERCEPTOR___C__DISPLAYCLASS12_0__INTERCEPT_B__0_OFFSET))(this, strResponse);
		}
	};
}
