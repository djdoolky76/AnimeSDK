#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Security
{
	enum class UriPartial : ::System::Int32
	{
		Scheme = 0,
		Authority = 1,
		Path = 2,
	};
}
