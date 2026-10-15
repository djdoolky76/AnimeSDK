#pragma once
#include "unitysdk/unitysdk.h"

namespace Newtonsoft::Json::Utilities
{
	enum class ParseResult : ::System::Int32
	{
		None = 0,
		Success = 1,
		Overflow = 2,
		Invalid = 3,
	};
}
