#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/WhiteBalance_NativeSRP.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_WHITEBALANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8812E0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int WhiteBalance_TypeDefinitionIndex = 27067;

	class WhiteBalance : public ::UnityEngine::NAPRenderPipeline0::WhiteBalance_NativeSRP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WHITEBALANCE__CTOR_OFFSET))(this);
		}
	};
}
