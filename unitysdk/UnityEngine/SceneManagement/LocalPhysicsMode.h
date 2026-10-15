#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::SceneManagement
{
	enum class LocalPhysicsMode : ::System::Int32
	{
		None = 0,
		Physics2D = 1,
		Physics3D = 2,
	};
}
