#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	enum class SSGIDisocclusionFixMethod : ::System::Int32
	{
		None = 0,
		Mip = 1,
		Bilateral = 2,
	};
}
