#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml
{
	enum class ReadState : ::System::Int32
	{
		Initial = 0,
		Interactive = 1,
		Error = 2,
		EndOfFile = 3,
		Closed = 4,
	};
}
