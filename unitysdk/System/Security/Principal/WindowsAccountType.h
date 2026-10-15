#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::Principal
{
	enum class WindowsAccountType : ::System::Int32
	{
		Normal = 0,
		Guest = 1,
		System = 2,
		Anonymous = 3,
	};
}
