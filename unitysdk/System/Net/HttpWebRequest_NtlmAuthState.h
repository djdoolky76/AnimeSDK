#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	enum class HttpWebRequest_NtlmAuthState : ::System::Int32
	{
		None = 0,
		Challenge = 1,
		Response = 2,
	};
}
