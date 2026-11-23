#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeComponent.h"

namespace UnityEngine::Rendering { class ClampedFloatParameter; }
namespace UnityEngine::Rendering { class MinFloatParameter; }

#define ABC_CUSTOMRENDERPIPELINE_SSAO_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1873260)
#define ABC_CUSTOMRENDERPIPELINE_SSAO_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x16A4160)
#define ABC_CUSTOMRENDERPIPELINE_SSAO__CTOR_OFFSET UNITYSDK_OFFSET(0x27DBC90)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int SSAO_TypeDefinitionIndex = 16717;

	class SSAO : public ::UnityEngine::Rendering::VolumeComponent
	{
	public:
		::UnityEngine::Rendering::MinFloatParameter* beginFadingDistance; // 0x38
		::UnityEngine::Rendering::MinFloatParameter* fadeOutRange; // 0x40
		::UnityEngine::Rendering::ClampedFloatParameter* hbaoRadiusInMeters; // 0x48
		::UnityEngine::Rendering::ClampedFloatParameter* hbaoBias; // 0x50
		::UnityEngine::Rendering::ClampedFloatParameter* hbaoStrength; // 0x58
		::UnityEngine::Rendering::ClampedFloatParameter* filterWeightsInMeters; // 0x60
		::UnityEngine::Rendering::ClampedFloatParameter* hbaoFalloffRatio; // 0x68

		::System::Boolean IsTileCompatible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_SSAO_ISTILECOMPATIBLE_OFFSET))(this);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_SSAO_ISACTIVE_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_SSAO__CTOR_OFFSET))(this);
		}
	};
}
