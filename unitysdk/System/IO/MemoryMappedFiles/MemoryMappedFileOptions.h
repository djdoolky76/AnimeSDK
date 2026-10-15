#pragma once
#include "unitysdk/unitysdk.h"

namespace System::IO::MemoryMappedFiles
{
	enum class MemoryMappedFileOptions : ::System::Int32
	{
		None = 0,
		DelayAllocatePages = 67108864,
	};
}
