#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Runtime::InteropServices
{
	enum class ComInterfaceType : ::System::Int32
	{
		InterfaceIsDual = 0,
		InterfaceIsIUnknown = 1,
		InterfaceIsIDispatch = 2,
		InterfaceIsIInspectable = 3,
	};
}
