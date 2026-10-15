#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class RenderTestMode : ::System::Int32
	{
		AvatarRenderMode = 0,
		BaseLineMode = 1,
		ShaderTestMode = 2,
		Unknown = 100,
	};
}
