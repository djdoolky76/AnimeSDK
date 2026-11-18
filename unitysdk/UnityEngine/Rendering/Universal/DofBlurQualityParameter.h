#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DofBlurQuality.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_DOFBLURQUALITYPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8E3310)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DofBlurQualityParameter_TypeDefinitionIndex = 27295;

	class DofBlurQualityParameter
	{
	public:
		::System::Void _ctor(::UnityEngine::Rendering::Universal::DofBlurQuality value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::DofBlurQuality, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DOFBLURQUALITYPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
