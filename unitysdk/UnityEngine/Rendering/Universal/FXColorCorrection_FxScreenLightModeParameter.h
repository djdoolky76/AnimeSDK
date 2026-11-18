#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/FXColorCorrection_FxScreenLightMode.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_FXCOLORCORRECTION_FXSCREENLIGHTMODEPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8BEF50)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int FXColorCorrection_FxScreenLightModeParameter_TypeDefinitionIndex = 27264;

	class FXColorCorrection_FxScreenLightModeParameter
	{
	public:
		::System::Void _ctor(::UnityEngine::Rendering::Universal::FXColorCorrection_FxScreenLightMode value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::FXColorCorrection_FxScreenLightMode, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FXCOLORCORRECTION_FXSCREENLIGHTMODEPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
