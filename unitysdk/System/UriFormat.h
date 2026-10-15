#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	enum class UriFormat : ::System::Int32
	{
		UriEscaped = 1,
		Unescaped = 2,
		SafeUnescaped = 3,
	};
}
