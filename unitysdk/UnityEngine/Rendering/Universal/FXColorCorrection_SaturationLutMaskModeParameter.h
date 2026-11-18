#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/FXColorCorrection_SaturationLutMaskMode.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_FXCOLORCORRECTION_SATURATIONLUTMASKMODEPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8BEFF0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int FXColorCorrection_SaturationLutMaskModeParameter_TypeDefinitionIndex = 27263;

	class FXColorCorrection_SaturationLutMaskModeParameter
	{
	public:
		::System::Void _ctor(::UnityEngine::Rendering::Universal::FXColorCorrection_SaturationLutMaskMode value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::FXColorCorrection_SaturationLutMaskMode, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FXCOLORCORRECTION_SATURATIONLUTMASKMODEPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
