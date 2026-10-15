#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	struct alignas(4) AppOverrideKeys_t
	{
		::System::IntPtr pchKey; // 0x10
		::System::IntPtr pchValue; // 0x18
	};
}
