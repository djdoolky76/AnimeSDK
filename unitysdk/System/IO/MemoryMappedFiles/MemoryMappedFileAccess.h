#pragma once
#include "unitysdk/unitysdk.h"

namespace System::IO::MemoryMappedFiles
{
	enum class MemoryMappedFileAccess : ::System::Int32
	{
		ReadWrite = 0,
		Read = 1,
		Write = 2,
		CopyOnWrite = 3,
		ReadExecute = 4,
		ReadWriteExecute = 5,
	};
}
