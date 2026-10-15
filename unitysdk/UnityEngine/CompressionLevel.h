#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	enum class CompressionLevel : ::System::Int32
	{
		None = 0,
		Fastest = 1,
		Fast = 2,
		Normal = 3,
		High = 4,
		Maximum = 5,
	};
}
