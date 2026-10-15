#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	enum class EVRApplicationTransitionState : ::System::Int32
	{
		VRApplicationTransition_None = 0,
		VRApplicationTransition_OldAppQuitSent = 10,
		VRApplicationTransition_WaitingForExternalLaunch = 11,
		VRApplicationTransition_NewAppLaunched = 20,
	};
}
