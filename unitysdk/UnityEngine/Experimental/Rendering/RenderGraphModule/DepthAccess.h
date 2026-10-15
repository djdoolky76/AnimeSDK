#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	enum class DepthAccess : ::System::Int32
	{
		Read = 1,
		Write = 2,
		ReadWrite = 3,
	};
}
