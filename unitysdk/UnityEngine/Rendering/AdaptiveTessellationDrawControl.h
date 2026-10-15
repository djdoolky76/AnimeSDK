#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	enum class AdaptiveTessellationDrawControl : ::System::Int32
	{
		DrawProceduralIndirect = 0,
		DrawInstancedIndirect = 1,
	};
}
