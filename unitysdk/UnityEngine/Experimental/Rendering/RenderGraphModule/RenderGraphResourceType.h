#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	enum class RenderGraphResourceType : ::System::Int32
	{
		Invalid = 0,
		Texture = 1,
		RendererList = 2,
	};
}
