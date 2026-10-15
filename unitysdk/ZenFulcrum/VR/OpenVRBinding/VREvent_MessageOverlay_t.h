#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	struct alignas(4) VREvent_MessageOverlay_t
	{
		::System::UInt32 unVRMessageOverlayResponse; // 0x10
	};
}
