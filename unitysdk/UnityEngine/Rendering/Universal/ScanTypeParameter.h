#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ScanType.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_SCANTYPEPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F91FA10)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ScanTypeParameter_TypeDefinitionIndex = 26666;

	class ScanTypeParameter
	{
	public:
		::System::Void _ctor(::UnityEngine::Rendering::Universal::ScanType value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ScanType, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCANTYPEPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
