#pragma once
#include "unitysdk/unitysdk.h"

namespace System::IO
{
	enum class HandleInheritability : ::System::Int32
	{
		None = 0,
		Inheritable = 1,
	};
}
