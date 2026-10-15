#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Runtime::InteropServices
{
	enum class ClassInterfaceType : ::System::Int32
	{
		None = 0,
		AutoDispatch = 1,
		AutoDual = 2,
	};
}
