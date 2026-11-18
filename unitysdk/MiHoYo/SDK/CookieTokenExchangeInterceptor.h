#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKWebViewManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_COOKIETOKENEXCHANGEINTERCEPTOR_CLEAROURCOOKIES_OFFSET UNITYSDK_OFFSET(0x1FB50360)
#define MIHOYO_SDK_COOKIETOKENEXCHANGEINTERCEPTOR_CLEARWHITELISTCOOKIES_OFFSET UNITYSDK_OFFSET(0x1FB502C0)
#define MIHOYO_SDK_COOKIETOKENEXCHANGEINTERCEPTOR_FINDMATCHEDAPEX_OFFSET UNITYSDK_OFFSET(0x1FB4FBD0)
#define MIHOYO_SDK_COOKIETOKENEXCHANGEINTERCEPTOR_HANDLES_OFFSET UNITYSDK_OFFSET(0x1FB4F6F0)
#define MIHOYO_SDK_COOKIETOKENEXCHANGEINTERCEPTOR_HASQUERYFLAG_OFFSET UNITYSDK_OFFSET(0x1FB4F780)
#define MIHOYO_SDK_COOKIETOKENEXCHANGEINTERCEPTOR_INTERCEPT_OFFSET UNITYSDK_OFFSET(0x1FB4FD20)
#define MIHOYO_SDK_COOKIETOKENEXCHANGEINTERCEPTOR_ONFETCHRESULT_OFFSET UNITYSDK_OFFSET(0x1FB50630)
#define MIHOYO_SDK_COOKIETOKENEXCHANGEINTERCEPTOR_PARSERESPONSE_OFFSET UNITYSDK_OFFSET(0x1FB50900)
#define MIHOYO_SDK_COOKIETOKENEXCHANGEINTERCEPTOR_REPORT_OFFSET UNITYSDK_OFFSET(0x1FB50C70)
#define MIHOYO_SDK_COOKIETOKENEXCHANGEINTERCEPTOR_SCHEDULECLEARANDCONSUMEFLAG_OFFSET UNITYSDK_OFFSET(0x1FB500E0)
#define MIHOYO_SDK_COOKIETOKENEXCHANGEINTERCEPTOR_TRYGETHOST_OFFSET UNITYSDK_OFFSET(0x1FB4FA90)
#define MIHOYO_SDK_COOKIETOKENEXCHANGEINTERCEPTOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB510A0)
#define MIHOYO_SDK_COOKIETOKENEXCHANGEINTERCEPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB51090)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int CookieTokenExchangeInterceptor_TypeDefinitionIndex = 35640;

	class CookieTokenExchangeInterceptor : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_APEX_DOMAINS()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CookieTokenExchangeInterceptor_TypeDefinitionIndex)->GetStaticField(0x2B240);
		}
		static ::System::Boolean* StaticGet_s_bPendingClear()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CookieTokenExchangeInterceptor_TypeDefinitionIndex)->GetStaticField(0x8E00);
		}
		// static const ::System::String* QUERY_KEY_NAME; // 0x0
		// static const ::System::String* QUERY_KEY_VALUE; // 0x0
		// static const ::System::String* COOKIE_KEY_TOKEN; // 0x0
		// static const ::System::String* COOKIE_KEY_UID; // 0x0
		// static const ::System::String* COOKIE_KEY_MID; // 0x0
		// static const ::System::String* REPORT_EVENT; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COOKIETOKENEXCHANGEINTERCEPTOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_COOKIETOKENEXCHANGEINTERCEPTOR__CCTOR_OFFSET))();
		}

		::System::Boolean Handles(::System::String* strUrl)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COOKIETOKENEXCHANGEINTERCEPTOR_HANDLES_OFFSET))(this, strUrl);
		}

		static ::System::Boolean HasQueryFlag(::System::String* strUrl, ::System::String* strKey, ::System::String* strExpectedValue)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COOKIETOKENEXCHANGEINTERCEPTOR_HASQUERYFLAG_OFFSET))(strUrl, strKey, strExpectedValue);
		}

		static ::System::String* TryGetHost(::System::String* strUrl)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COOKIETOKENEXCHANGEINTERCEPTOR_TRYGETHOST_OFFSET))(strUrl);
		}

		static ::System::String* FindMatchedApex(::System::String* strHost)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COOKIETOKENEXCHANGEINTERCEPTOR_FINDMATCHEDAPEX_OFFSET))(strHost);
		}

		::System::Void Intercept(::MiHoYo::SDK::MiHoYoSDKWebViewManager* manager, ::System::String* strUrl, ::System::Action_1<::System::String*>* next)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebViewManager*, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COOKIETOKENEXCHANGEINTERCEPTOR_INTERCEPT_OFFSET))(this, manager, strUrl, next);
		}

		static ::System::Void ClearWhitelistCookies()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_COOKIETOKENEXCHANGEINTERCEPTOR_CLEARWHITELISTCOOKIES_OFFSET))();
		}

		static ::System::Void ScheduleClearAndConsumeFlag(::MiHoYo::SDK::MiHoYoSDKWebViewManager* manager)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::MiHoYoSDKWebViewManager*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COOKIETOKENEXCHANGEINTERCEPTOR_SCHEDULECLEARANDCONSUMEFLAG_OFFSET))(manager);
		}

		static ::System::Void ClearOurCookies(::MiHoYo::SDK::MiHoYoSDKWebViewManager* manager)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::MiHoYoSDKWebViewManager*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COOKIETOKENEXCHANGEINTERCEPTOR_CLEAROURCOOKIES_OFFSET))(manager);
		}

		::System::Void OnFetchResult(::MiHoYo::SDK::MiHoYoSDKWebViewManager* manager, ::System::String* strUrl, ::System::Action_1<::System::String*>* next, ::System::String* strMatchedApex, ::System::String* strResponse)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebViewManager*, ::System::String*, ::System::Action_1<::System::String*>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COOKIETOKENEXCHANGEINTERCEPTOR_ONFETCHRESULT_OFFSET))(this, manager, strUrl, next, strMatchedApex, strResponse);
		}

		static ::System::Void ParseResponse(::System::String* strResponse, ::System::Int32& nRet, ::System::String*& strMsg, ::System::String*& strMid, ::System::String*& strUid)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32&, ::System::String*&, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COOKIETOKENEXCHANGEINTERCEPTOR_PARSERESPONSE_OFFSET))(strResponse, nRet, strMsg, strMid, strUid);
		}

		static ::System::Void Report(::System::Boolean bSuccess, ::System::String* strMid, ::System::Int32 nRet, ::System::String* strReason)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COOKIETOKENEXCHANGEINTERCEPTOR_REPORT_OFFSET))(bSuccess, strMid, nRet, strReason);
		}
	};
}
