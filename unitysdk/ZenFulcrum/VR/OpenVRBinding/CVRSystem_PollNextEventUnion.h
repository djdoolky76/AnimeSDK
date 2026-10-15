#pragma once
#include "unitysdk/unitysdk.h"
namespace ZenFulcrum::VR::OpenVRBinding { class CVRSystem__PollNextEventPacked; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSystem__PollNextEvent; }

namespace ZenFulcrum::VR::OpenVRBinding
{
	struct alignas(8) CVRSystem_PollNextEventUnion
	{
		::ZenFulcrum::VR::OpenVRBinding::IVRSystem__PollNextEvent* pPollNextEvent; // 0x10
		::ZenFulcrum::VR::OpenVRBinding::CVRSystem__PollNextEventPacked* pPollNextEventPacked; // 0x10
	};
}
