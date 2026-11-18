#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeComponent.h"

namespace UnityEngine::NAPRenderPipeline0 { class ClampedFloatParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_PANINIPROJECTION_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1E8F31D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_PANINIPROJECTION_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x1E8F3230)
#define UNITYENGINE_RENDERING_UNIVERSAL_PANINIPROJECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8F3270)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int PaniniProjection_TypeDefinitionIndex = 26562;

	class PaniniProjection : public ::UnityEngine::NAPRenderPipeline0::VolumeComponent
	{
	public:
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* distance; // 0x38
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* cropToFit; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_PANINIPROJECTION__CTOR_OFFSET))(this);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_PANINIPROJECTION_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean IsTileCompatible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_PANINIPROJECTION_ISTILECOMPATIBLE_OFFSET))(this);
		}
	};
}
