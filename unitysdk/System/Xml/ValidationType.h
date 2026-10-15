#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml
{
	enum class ValidationType : ::System::Int32
	{
		None = 0,
		Auto = 1,
		DTD = 2,
		XDR = 3,
		Schema = 4,
	};
}
