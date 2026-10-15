#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Reflection
{
	enum class PInfo : ::System::Int32
	{
		Attributes = 1,
		GetMethod = 2,
		SetMethod = 4,
		ReflectedType = 8,
		DeclaringType = 16,
		Name = 32,
	};
}
