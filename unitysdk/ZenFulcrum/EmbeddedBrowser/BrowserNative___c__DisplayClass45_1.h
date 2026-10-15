#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/BrowserNative_ZFBInitialSettings.h"

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE___C__DISPLAYCLASS45_1_CTOR_OFFSET UNITYSDK_OFFSET(0x1F650310)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE___C__DISPLAYCLASS45_1__INITWEBVIEWASYNC_B__2_OFFSET UNITYSDK_OFFSET(0x1F650320)

namespace ZenFulcrum::EmbeddedBrowser
{
	template <typename T>
	class BrowserNative___c__DisplayClass45_1 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::BrowserNative_ZFBInitialSettings settings; // 0x10
		::System::Boolean initRes; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE___C__DISPLAYCLASS45_1_CTOR_OFFSET))(this);
		}

		::System::Void _InitWebViewAsync_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE___C__DISPLAYCLASS45_1__INITWEBVIEWASYNC_B__2_OFFSET))(this);
		}

	};
}
