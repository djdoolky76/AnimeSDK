#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ABC::CustomRenderPipeline { class GTAOSetting; }
namespace ABC::QualitySettings { class CharacterQualitySettings; }
namespace ABC::QualitySettings { class EnvQualitySettings; }
namespace ABC::QualitySettings { class LightingQualitySettings; }
namespace ABC::QualitySettings { class ReflectionQualitySettings; }
namespace ABC::QualitySettings { class ResolutionQualitySettings; }
namespace ABC::QualitySettings { class ShadowQualitySettings; }
namespace ABC::QualitySettings { class VFXQualitySettings; }

#define ABC_QUALITYSETTINGS_ABCQUALITYSETTINGSPRESETDETAIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ABC::QualitySettings
{
	inline static constexpr unsigned int ABCQualitySettingsPresetDetail_TypeDefinitionIndex = 8992;

	class ABCQualitySettingsPresetDetail : public ::System::Object
	{
	public:
		::ABC::QualitySettings::ResolutionQualitySettings* resolutionVeryHigh; // 0x10
		::ABC::QualitySettings::ResolutionQualitySettings* resolutionHigh; // 0x18
		::ABC::QualitySettings::ResolutionQualitySettings* resolutionMedium; // 0x20
		::ABC::QualitySettings::ResolutionQualitySettings* resolutionLow; // 0x28
		::ABC::QualitySettings::ResolutionQualitySettings* resolutionVeryLow; // 0x30
		::ABC::QualitySettings::ShadowQualitySettings* shadowHigh; // 0x38
		::ABC::QualitySettings::ShadowQualitySettings* shadowMedium; // 0x40
		::ABC::QualitySettings::ShadowQualitySettings* shadowLow; // 0x48
		::ABC::QualitySettings::LightingQualitySettings* lightingVeryHigh; // 0x50
		::ABC::QualitySettings::LightingQualitySettings* lightingHigh; // 0x58
		::ABC::QualitySettings::LightingQualitySettings* lightingMedium; // 0x60
		::ABC::QualitySettings::LightingQualitySettings* lightingLow; // 0x68
		::ABC::QualitySettings::LightingQualitySettings* lightingVeryLow; // 0x70
		::ABC::QualitySettings::CharacterQualitySettings* characterHigh; // 0x78
		::ABC::QualitySettings::CharacterQualitySettings* characterMedium; // 0x80
		::ABC::QualitySettings::CharacterQualitySettings* characterLow; // 0x88
		::ABC::QualitySettings::EnvQualitySettings* envVeryHigh; // 0x90
		::ABC::QualitySettings::EnvQualitySettings* envHigh; // 0x98
		::ABC::QualitySettings::EnvQualitySettings* envMedium; // 0xA0
		::ABC::QualitySettings::EnvQualitySettings* envLow; // 0xA8
		::ABC::QualitySettings::EnvQualitySettings* envVeryLow; // 0xB0
		::ABC::QualitySettings::ReflectionQualitySettings* reflectionVeryHigh; // 0xB8
		::ABC::QualitySettings::ReflectionQualitySettings* reflectionHigh; // 0xC0
		::ABC::QualitySettings::ReflectionQualitySettings* reflectionMedium; // 0xC8
		::ABC::QualitySettings::ReflectionQualitySettings* reflectionLow; // 0xD0
		::ABC::QualitySettings::ReflectionQualitySettings* reflectionVeryLow; // 0xD8
		::ABC::QualitySettings::VFXQualitySettings* vfxHigh; // 0xE0
		::ABC::QualitySettings::VFXQualitySettings* vfxMedium; // 0xE8
		::ABC::QualitySettings::VFXQualitySettings* vfxLow; // 0xF0
		::ABC::CustomRenderPipeline::GTAOSetting* gtaoHigh; // 0xF8
		::ABC::CustomRenderPipeline::GTAOSetting* gtaoMedium; // 0x100
		::ABC::CustomRenderPipeline::GTAOSetting* gtaoLow; // 0x108

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_QUALITYSETTINGS_ABCQUALITYSETTINGSPRESETDETAIL__CTOR_OFFSET))(this);
		}
	};
}
