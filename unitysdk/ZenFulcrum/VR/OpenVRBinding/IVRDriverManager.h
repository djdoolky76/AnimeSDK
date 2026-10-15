#pragma once
#include "unitysdk/unitysdk.h"
namespace ZenFulcrum::VR::OpenVRBinding { class IVRDriverManager__GetDriverCount; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRDriverManager__GetDriverName; }

namespace ZenFulcrum::VR::OpenVRBinding
{
	struct alignas(8) IVRDriverManager
	{
		::ZenFulcrum::VR::OpenVRBinding::IVRDriverManager__GetDriverCount* GetDriverCount; // 0x10
		::ZenFulcrum::VR::OpenVRBinding::IVRDriverManager__GetDriverName* GetDriverName; // 0x18
	};
}
