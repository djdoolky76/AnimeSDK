#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	enum class DepthBufferFormat : ::System::Int32
	{
		kDepthFormatNone = 0,
		kDepthFormatMin16bits_NoStencil = 1,
		kDepthFormatMin24bits_Stencil = 2,
		kDepthFormatCount = 3,
	};
}
