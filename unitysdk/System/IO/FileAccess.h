#pragma once
#include "unitysdk/unitysdk.h"

namespace System::IO
{
	enum class FileAccess : ::System::Int32
	{
		Read = 1,
		Write = 2,
		ReadWrite = 3,
	};
}
