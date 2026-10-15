#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Runtime::Serialization::Formatters::Binary
{
	enum class InternalSerializerTypeE : ::System::Int32
	{
		Soap = 1,
		Binary = 2,
	};
}
