#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	enum class RenderTextureSubElement : ::System::Int32
	{
		Color = 0,
		Depth = 1,
		Stencil = 2,
		Default = 3,
	};
}
