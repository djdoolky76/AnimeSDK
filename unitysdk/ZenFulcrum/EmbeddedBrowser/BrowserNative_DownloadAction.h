#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::EmbeddedBrowser
{
	enum class BrowserNative_DownloadAction : ::System::Int32
	{
		Begin = 0,
		Cancel = 1,
		Pause = 2,
		Resume = 3,
	};
}
