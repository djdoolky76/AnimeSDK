#pragma once
#include "unitysdk/unitysdk.h"

namespace XLua
{
	enum class XLuaWrapRegistrationKind : ::System::Int32
	{
		NormalWrap = 0,
		Enum = 1,
		GCOptimizedValueType = 2,
		Delegate = 3,
		InterfaceBridge = 4,
	};
}
