#pragma once
#include "unitysdk/unitysdk.h"
namespace ZenFulcrum::VR::OpenVRBinding { class CVRRenderModels__GetComponentStatePacked; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRRenderModels__GetComponentState; }

namespace ZenFulcrum::VR::OpenVRBinding
{
	struct alignas(8) CVRRenderModels_GetComponentStateUnion
	{
		::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__GetComponentState* pGetComponentState; // 0x10
		::ZenFulcrum::VR::OpenVRBinding::CVRRenderModels__GetComponentStatePacked* pGetComponentStatePacked; // 0x10
	};
}
