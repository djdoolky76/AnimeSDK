#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Runtime::Serialization::Formatters
{
	enum class FormatterTypeStyle : ::System::Int32
	{
		TypesWhenNeeded = 0,
		TypesAlways = 1,
		XsdString = 2,
	};
}
