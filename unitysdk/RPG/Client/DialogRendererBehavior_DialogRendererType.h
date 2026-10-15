#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class DialogRendererBehavior_DialogRendererType : ::System::Int32
	{
		None = 0,
		Renderer = 1,
		Renderable = 2,
		Registered = 4,
	};
}
