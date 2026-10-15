#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_NativeCookie; }
namespace ZenFulcrum::EmbeddedBrowser { class Cookie; }
namespace ZenFulcrum::EmbeddedBrowser { class CookieManager_CookieFetch; }
namespace ZenFulcrum::EmbeddedBrowser { class IPromise; }

#define ZENFULCRUM_EMBEDDEDBROWSER_COOKIEMANAGER_CB_GETCOOKIEFUNC_OFFSET UNITYSDK_OFFSET(0x1F6572C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_COOKIEMANAGER_CLEARALL_OFFSET UNITYSDK_OFFSET(0x1F6577F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_COOKIEMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F63B7C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_COOKIEMANAGER_GETCOOKIES_OFFSET UNITYSDK_OFFSET(0x1F657580)

namespace ZenFulcrum::EmbeddedBrowser
{
	class CookieManager : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Browser* browser; // 0x10
		static ::ZenFulcrum::EmbeddedBrowser::CookieManager_CookieFetch** StaticGet_currentFetch()
		{
			return (::ZenFulcrum::EmbeddedBrowser::CookieManager_CookieFetch**)UnitySDK::FromName("ZenFulcrum.EmbeddedBrowser", "CookieManager")->GetStaticField(0x521B0);
		}

		::System::Void _ctor(::ZenFulcrum::EmbeddedBrowser::Browser* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::Browser*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_COOKIEMANAGER_CTOR_OFFSET))(this, a1);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise* GetCookies()
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_COOKIEMANAGER_GETCOOKIES_OFFSET))(this);
		}

		static ::System::Void CB_GetCookieFunc(::ZenFulcrum::EmbeddedBrowser::BrowserNative_NativeCookie* a1)
		{
			return ((::System::Void(*)(::ZenFulcrum::EmbeddedBrowser::BrowserNative_NativeCookie*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_COOKIEMANAGER_CB_GETCOOKIEFUNC_OFFSET))(a1);
		}

		::System::Void ClearAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_COOKIEMANAGER_CLEARALL_OFFSET))(this);
		}

	};
}
