#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	enum class VRMessageOverlayResponse : ::System::Int32
	{
		ButtonPress_0 = 0,
		ButtonPress_1 = 1,
		ButtonPress_2 = 2,
		ButtonPress_3 = 3,
		CouldntFindSystemOverlay = 4,
		CouldntFindOrCreateClientOverlay = 5,
		ApplicationQuit = 6,
	};
}
