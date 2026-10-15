#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::EmbeddedBrowser
{
	enum class BrowserNative_LoadChange : ::System::Int32
	{
		LC_STOP = 1,
		LC_RELOAD = 2,
		LC_FORCE_RELOAD = 3,
	};
}
