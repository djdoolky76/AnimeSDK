#pragma once
#include "unitysdk/unitysdk.h"

namespace System::IO::Compression
{
	enum class CompressionMode : ::System::Int32
	{
		Decompress = 0,
		Compress = 1,
	};
}
