#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	enum class CookieCollection_Stamp : ::System::Int32
	{
		Check = 0,
		Set = 1,
		SetToUnused = 2,
		SetToMaxUsed = 3,
	};
}
