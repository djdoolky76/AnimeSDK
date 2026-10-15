#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Runtime::InteropServices
{
	enum class GCHandleType : ::System::Int32
	{
		Weak = 0,
		WeakTrackResurrection = 1,
		Normal = 2,
		Pinned = 3,
	};
}
