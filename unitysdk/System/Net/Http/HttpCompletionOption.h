#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::Http
{
	enum class HttpCompletionOption : ::System::Int32
	{
		ResponseContentRead = 0,
		ResponseHeadersRead = 1,
	};
}
