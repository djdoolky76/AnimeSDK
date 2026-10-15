#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_GetCookieFunc; }
namespace ZenFulcrum::EmbeddedBrowser { class Cookie; }
namespace ZenFulcrum::EmbeddedBrowser { class CookieManager; }
namespace ZenFulcrum::EmbeddedBrowser { class Promise; }

#define ZENFULCRUM_EMBEDDEDBROWSER_COOKIEMANAGER_COOKIEFETCH_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6577D0)

namespace ZenFulcrum::EmbeddedBrowser
{
	class CookieManager_CookieFetch : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Promise* promise; // 0x10
		::ZenFulcrum::EmbeddedBrowser::BrowserNative_GetCookieFunc* nativeCB; // 0x18
		::ZenFulcrum::EmbeddedBrowser::CookieManager* manager; // 0x20
		::System::Collections::Generic::List_1<::ZenFulcrum::EmbeddedBrowser::Cookie*>* result; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_COOKIEMANAGER_COOKIEFETCH_CTOR_OFFSET))(this);
		}

	};
}
