#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	enum class HttpConnection_LineState : ::System::Int32
	{
		None = 0,
		CR = 1,
		LF = 2,
	};
}
