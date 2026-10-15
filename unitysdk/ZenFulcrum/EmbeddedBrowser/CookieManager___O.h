#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_GetCookieFunc; }

namespace ZenFulcrum::EmbeddedBrowser
{
	class CookieManager___O : public ::System::Object
	{
	public:
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_GetCookieFunc** StaticGet__0___CB_GetCookieFunc()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_GetCookieFunc**)UnitySDK::FromName("ZenFulcrum.EmbeddedBrowser", "<>O")->GetStaticField(0x52200);
		}

	};
}
