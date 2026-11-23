#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeComponent.h"

namespace ABC::CustomRenderPipeline { class ChromaticAberrationQualityParameter; }
namespace UnityEngine::Rendering { class BoolParameter; }
namespace UnityEngine::Rendering { class ClampedFloatParameter; }
namespace UnityEngine::Rendering { class ColorParameter; }

#define ABC_CUSTOMRENDERPIPELINE_CHROMATICABERRATION_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x28169C0)
#define ABC_CUSTOMRENDERPIPELINE_CHROMATICABERRATION_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x16A4160)
#define ABC_CUSTOMRENDERPIPELINE_CHROMATICABERRATION__CTOR_OFFSET UNITYSDK_OFFSET(0x2816A00)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int ChromaticAberration_TypeDefinitionIndex = 16853;

	class ChromaticAberration : public ::UnityEngine::Rendering::VolumeComponent
	{
	public:
		::ABC::CustomRenderPipeline::ChromaticAberrationQualityParameter* quality; // 0x38
		::UnityEngine::Rendering::ColorParameter* FilterA; // 0x40
		::UnityEngine::Rendering::ColorParameter* FilterB; // 0x48
		::UnityEngine::Rendering::ColorParameter* FilterC; // 0x50
		::UnityEngine::Rendering::BoolParameter* CombineWithRadialBlur; // 0x58
		::UnityEngine::Rendering::ClampedFloatParameter* intensity; // 0x60

		::System::Boolean IsTileCompatible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_CHROMATICABERRATION_ISTILECOMPATIBLE_OFFSET))(this);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_CHROMATICABERRATION_ISACTIVE_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_CHROMATICABERRATION__CTOR_OFFSET))(this);
		}
	};
}
