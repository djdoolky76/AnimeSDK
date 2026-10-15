#pragma once
#include "unitysdk/unitysdk.h"

namespace MessagePack
{
	enum class MessagePackCompression : ::System::Int32
	{
		None = 0,
		Lz4Block = 1,
		Lz4BlockArray = 2,
	};
}
