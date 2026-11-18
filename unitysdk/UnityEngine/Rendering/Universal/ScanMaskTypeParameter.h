#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ScanMaskType.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_SCANMASKTYPEPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D718A10)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ScanMaskTypeParameter_TypeDefinitionIndex = 27081;

	class ScanMaskTypeParameter
	{
	public:
		::System::Void _ctor(::UnityEngine::Rendering::Universal::ScanMaskType value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ScanMaskType, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCANMASKTYPEPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
