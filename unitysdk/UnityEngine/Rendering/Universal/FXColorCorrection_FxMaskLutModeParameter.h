#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/FXColorCorrection_FxMaskLutMode.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_FXCOLORCORRECTION_FXMASKLUTMODEPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E159280)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int FXColorCorrection_FxMaskLutModeParameter_TypeDefinitionIndex = 27262;

	class FXColorCorrection_FxMaskLutModeParameter
	{
	public:
		::System::Void _ctor(::UnityEngine::Rendering::Universal::FXColorCorrection_FxMaskLutMode value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::FXColorCorrection_FxMaskLutMode, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FXCOLORCORRECTION_FXMASKLUTMODEPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
