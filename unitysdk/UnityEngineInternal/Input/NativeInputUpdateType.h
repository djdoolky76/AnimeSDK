#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngineInternal::Input
{
	enum class NativeInputUpdateType : ::System::Int32
	{
		Dynamic = 1,
		Fixed = 2,
		BeforeRender = 4,
		Editor = 8,
		IgnoreFocus = -2147483648,
	};
}
