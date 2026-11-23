#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeComponent.h"

namespace UnityEngine::Rendering { class BoolParameter; }
namespace UnityEngine::Rendering { class ClampedFloatParameter; }

#define ABC_CUSTOMRENDERPIPELINE_TEMPORALAASETTINGS_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1873260)
#define ABC_CUSTOMRENDERPIPELINE_TEMPORALAASETTINGS_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x16A4160)
#define ABC_CUSTOMRENDERPIPELINE_TEMPORALAASETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x2793CB0)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int TemporalAASettings_TypeDefinitionIndex = 16562;

	class TemporalAASettings : public ::UnityEngine::Rendering::VolumeComponent
	{
	public:
		::UnityEngine::Rendering::ClampedFloatParameter* taaSharpenStrength; // 0x38
		::UnityEngine::Rendering::ClampedFloatParameter* taaHistorySharpening; // 0x40
		::UnityEngine::Rendering::ClampedFloatParameter* taaMotionVectorRejection; // 0x48
		::UnityEngine::Rendering::BoolParameter* taaAnitiHistoryRing; // 0x50
		::UnityEngine::Rendering::ClampedFloatParameter* taaJitterScale; // 0x58
		::UnityEngine::Rendering::ClampedFloatParameter* varianceClampScale; // 0x60
		::UnityEngine::Rendering::ClampedFloatParameter* stationaryBlending; // 0x68
		::UnityEngine::Rendering::ClampedFloatParameter* motionBlending; // 0x70
		::UnityEngine::Rendering::ClampedFloatParameter* historyMotionMaskValidThreshold; // 0x78

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_TEMPORALAASETTINGS_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean IsTileCompatible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_TEMPORALAASETTINGS_ISTILECOMPATIBLE_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_TEMPORALAASETTINGS__CTOR_OFFSET))(this);
		}
	};
}
