#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	enum class Guid_GuidParseThrowStyle : ::System::Int32
	{
		None = 0,
		All = 1,
		AllButOverflow = 2,
	};
}
