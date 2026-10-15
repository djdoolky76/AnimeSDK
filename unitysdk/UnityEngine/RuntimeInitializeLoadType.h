#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	enum class RuntimeInitializeLoadType : ::System::Int32
	{
		AfterSceneLoad = 0,
		BeforeSceneLoad = 1,
		AfterAssembliesLoaded = 2,
		BeforeSplashScreen = 3,
		SubsystemRegistration = 4,
	};
}
