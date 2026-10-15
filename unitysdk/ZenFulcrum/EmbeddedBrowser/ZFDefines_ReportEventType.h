#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::EmbeddedBrowser
{
	enum class ZFDefines_ReportEventType : ::System::Int32
	{
		Unknown = 0,
		Mouse = 1,
		Key = 2,
		Frame = 4,
		All = 7,
	};
}
