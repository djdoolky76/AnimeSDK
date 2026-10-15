#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	enum class HttpListenerRequestUriBuilder_ParsingResult : ::System::Int32
	{
		Success = 0,
		InvalidString = 1,
		EncodingError = 2,
	};
}
