#pragma once
#include "unitysdk/unitysdk.h"

namespace System::IO
{
	enum class FileOptions : ::System::Int32
	{
		None = 0,
		Encrypted = 16384,
		DeleteOnClose = 67108864,
		SequentialScan = 134217728,
		RandomAccess = 268435456,
		Asynchronous = 1073741824,
		WriteThrough = -2147483648,
	};
}
