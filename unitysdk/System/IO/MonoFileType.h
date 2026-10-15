#pragma once
#include "unitysdk/unitysdk.h"

namespace System::IO
{
	enum class MonoFileType : ::System::Int32
	{
		Unknown = 0,
		Disk = 1,
		Char = 2,
		Pipe = 3,
		Remote = 32768,
	};
}
