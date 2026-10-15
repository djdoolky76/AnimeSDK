#pragma once
#include "unitysdk/unitysdk.h"

namespace ScenenLightManager
{
	enum class FadingState : ::System::Int32
	{
		FadingOut = -1,
		FadingIn = 1,
		NoFading = 0,
	};
}
