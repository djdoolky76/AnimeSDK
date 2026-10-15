#pragma once
#include "unitysdk/unitysdk.h"

namespace System::IO
{
	enum class SeekOrigin : ::System::Int32
	{
		Begin = 0,
		Current = 1,
		End = 2,
	};
}
