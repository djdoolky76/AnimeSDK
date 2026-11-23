#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeComponent.h"

namespace ABC::CustomRenderPipeline { class TonemappingModeParameter; }
namespace UnityEngine::Rendering { class ClampedFloatParameter; }
namespace UnityEngine::Rendering { class MinFloatParameter; }

#define ABC_CUSTOMRENDERPIPELINE_TONEMAPPING_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x2826420)
#define ABC_CUSTOMRENDERPIPELINE_TONEMAPPING_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x1678550)
#define ABC_CUSTOMRENDERPIPELINE_TONEMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x2826450)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int Tonemapping_TypeDefinitionIndex = 16902;

	class Tonemapping : public ::UnityEngine::Rendering::VolumeComponent
	{
	public:
		::ABC::CustomRenderPipeline::TonemappingModeParameter* mode; // 0x38
		::UnityEngine::Rendering::ClampedFloatParameter* toeStrength; // 0x40
		::UnityEngine::Rendering::ClampedFloatParameter* toeLength; // 0x48
		::UnityEngine::Rendering::ClampedFloatParameter* shoulderStrength; // 0x50
		::UnityEngine::Rendering::MinFloatParameter* shoulderLength; // 0x58
		::UnityEngine::Rendering::ClampedFloatParameter* shoulderAngle; // 0x60
		::UnityEngine::Rendering::MinFloatParameter* gamma; // 0x68

		::System::Boolean IsTileCompatible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_TONEMAPPING_ISTILECOMPATIBLE_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_TONEMAPPING__CTOR_OFFSET))(this);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_TONEMAPPING_ISACTIVE_OFFSET))(this);
		}
	};
}
