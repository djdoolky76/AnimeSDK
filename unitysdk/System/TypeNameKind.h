#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	enum class TypeNameKind : ::System::Int32
	{
		Name = 0,
		ToString = 1,
		SerializationName = 2,
		FullName = 3,
	};
}
