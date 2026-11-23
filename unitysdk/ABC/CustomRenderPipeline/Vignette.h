#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeComponent.h"

namespace ABC::CustomRenderPipeline { class VignetteQualityParameter; }
namespace UnityEngine::Rendering { class BoolParameter; }
namespace UnityEngine::Rendering { class ClampedFloatParameter; }
namespace UnityEngine::Rendering { class ColorParameter; }
namespace UnityEngine::Rendering { class Vector2Parameter; }

#define ABC_CUSTOMRENDERPIPELINE_VIGNETTE_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x277CD80)
#define ABC_CUSTOMRENDERPIPELINE_VIGNETTE_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x16A4160)
#define ABC_CUSTOMRENDERPIPELINE_VIGNETTE__CTOR_OFFSET UNITYSDK_OFFSET(0x277CDC0)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int Vignette_TypeDefinitionIndex = 16498;

	class Vignette : public ::UnityEngine::Rendering::VolumeComponent
	{
	public:
		::ABC::CustomRenderPipeline::VignetteQualityParameter* quality; // 0x38
		::UnityEngine::Rendering::ColorParameter* color; // 0x40
		::UnityEngine::Rendering::Vector2Parameter* center; // 0x48
		::UnityEngine::Rendering::ClampedFloatParameter* intensity; // 0x50
		::UnityEngine::Rendering::ClampedFloatParameter* smoothness; // 0x58
		::UnityEngine::Rendering::BoolParameter* rounded; // 0x60

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_VIGNETTE_ISACTIVE_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_VIGNETTE__CTOR_OFFSET))(this);
		}

		::System::Boolean IsTileCompatible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_VIGNETTE_ISTILECOMPATIBLE_OFFSET))(this);
		}
	};
}
