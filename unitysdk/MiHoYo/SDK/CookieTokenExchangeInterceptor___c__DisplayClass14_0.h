#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKWebViewManager; }

#define MIHOYO_SDK_COOKIETOKENEXCHANGEINTERCEPTOR___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA59290)
#define MIHOYO_SDK_COOKIETOKENEXCHANGEINTERCEPTOR___C__DISPLAYCLASS14_0__SCHEDULECLEARANDCONSUMEFLAG_B__0_OFFSET UNITYSDK_OFFSET(0x1FA592A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int CookieTokenExchangeInterceptor___c__DisplayClass14_0_TypeDefinitionIndex = 35642;

	class CookieTokenExchangeInterceptor___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::MiHoYoSDKWebViewManager* manager; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COOKIETOKENEXCHANGEINTERCEPTOR___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void _ScheduleClearAndConsumeFlag_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COOKIETOKENEXCHANGEINTERCEPTOR___C__DISPLAYCLASS14_0__SCHEDULECLEARANDCONSUMEFLAG_B__0_OFFSET))(this);
		}
	};
}
