#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKWebViewManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_COOKIETOKENEXCHANGEINTERCEPTOR___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F0DD4A0)
#define MIHOYO_SDK_COOKIETOKENEXCHANGEINTERCEPTOR___C__DISPLAYCLASS16_0__ONFETCHRESULT_B__0_OFFSET UNITYSDK_OFFSET(0x1F0DD4B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int CookieTokenExchangeInterceptor___c__DisplayClass16_0_TypeDefinitionIndex = 35643;

	class CookieTokenExchangeInterceptor___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::System::String* strCookieToken; // 0x10
		::System::Action_1<::System::String*>* next; // 0x18
		::System::String* strUid; // 0x20
		::System::String* strMid; // 0x28
		::System::String* strUrl; // 0x30
		::MiHoYo::SDK::MiHoYoSDKWebViewManager* manager; // 0x38
		::System::String* strMatchedApex; // 0x40
		::System::Int32 nRet; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COOKIETOKENEXCHANGEINTERCEPTOR___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnFetchResult_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COOKIETOKENEXCHANGEINTERCEPTOR___C__DISPLAYCLASS16_0__ONFETCHRESULT_B__0_OFFSET))(this);
		}
	};
}
