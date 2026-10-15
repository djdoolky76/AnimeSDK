#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	enum class DTSubStringType : ::System::Int32
	{
		Unknown = 0,
		Invalid = 1,
		Number = 2,
		End = 3,
		Other = 4,
	};
}
