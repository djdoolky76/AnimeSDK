#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::EmbeddedBrowser
{
	enum class BrowserNative_ContextMenuOrigin : ::System::Int32
	{
		Editable = 2,
		Image = 4,
		Selection = 8,
		Other = 1,
	};
}
