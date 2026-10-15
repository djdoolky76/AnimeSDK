#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::BAT
{
	enum class BATRendererBehavior_CullingMode : ::System::Int32
	{
		None = 0,
		FrustumCulling = 1,
		FrustumHizCulling = 2,
	};
}
