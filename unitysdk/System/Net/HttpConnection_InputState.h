#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	enum class HttpConnection_InputState : ::System::Int32
	{
		RequestLine = 0,
		Headers = 1,
	};
}
