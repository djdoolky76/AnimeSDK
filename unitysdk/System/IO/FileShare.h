#pragma once
#include "unitysdk/unitysdk.h"

namespace System::IO
{
	enum class FileShare : ::System::Int32
	{
		None = 0,
		Read = 1,
		Write = 2,
		ReadWrite = 3,
		Delete = 4,
		Inheritable = 16,
	};
}
