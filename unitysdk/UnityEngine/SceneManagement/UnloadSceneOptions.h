#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::SceneManagement
{
	enum class UnloadSceneOptions : ::System::Int32
	{
		None = 0,
		UnloadAllEmbeddedSceneObjects = 1,
	};
}
