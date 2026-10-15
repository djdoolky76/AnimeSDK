#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	enum class SDFCompressionMethod : ::System::Int32
	{
		None = 0,
		BC4 = 1,
		NubisDXT1 = 2,
	};
}
