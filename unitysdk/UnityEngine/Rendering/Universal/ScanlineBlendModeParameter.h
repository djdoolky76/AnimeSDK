#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ScanlineBlendMode.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_SCANLINEBLENDMODEPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D459170)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ScanlineBlendModeParameter_TypeDefinitionIndex = 26670;

	class ScanlineBlendModeParameter
	{
	public:
		::System::Void _ctor(::UnityEngine::Rendering::Universal::ScanlineBlendMode value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ScanlineBlendMode, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCANLINEBLENDMODEPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
