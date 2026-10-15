#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	enum class AnyType_Type : ::System::Int32
	{
		None = 0,
		Bool = 1,
		Name = 2,
		Int64 = 3,
		Double = 4,
		RawPtr = 5,
		CSharpObj = 6,
		UInt64 = 7,
	};
}
