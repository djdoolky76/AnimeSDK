#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F3A7E850877D3BCF/B647C0399A3AF931.h"
#include "unitysdk/System/Object.h"

namespace ABC::QualitySettings { class FoliageQualitySettings; }
namespace ABC::QualitySettings { class InteractDetailSettings; }
namespace ABC::QualitySettings { class OceanDetailSettings; }
namespace ABC::QualitySettings { class SkyAtmosphereDetailSetting; }
namespace ABC::QualitySettings { class TerrainQualitySettings; }
namespace ABC::QualitySettings { class VolumetricFogDetailSettings; }

#define ABC_QUALITYSETTINGS_ENVQUALITYSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x20A3190)

namespace ABC::QualitySettings
{
	inline static constexpr unsigned int EnvQualitySettings_TypeDefinitionIndex = 8601;

	class EnvQualitySettings : public ::System::Object
	{
	public:
		::System::Boolean lensFlareEnabled; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single decalDistance; // 0x14
		::System::Single decalScreenRatio; // 0x18
		::System::Single capsuleAODistance; // 0x1C
		::System::Single motionVectorDistance; // 0x20
		::System::Single outlineDistance; // 0x24
		::F3A7E850877D3BCF::B647C0399A3AF931 streamingRangeQuality; // 0x28
		::System::Boolean enableLODDither; // 0x2C
		::System::Byte _padding1[0x3];
		::ABC::QualitySettings::TerrainQualitySettings* terrainSettings; // 0x30
		::ABC::QualitySettings::FoliageQualitySettings* foliageSettings; // 0x38
		::ABC::QualitySettings::VolumetricFogDetailSettings* volumetricFogDetailSettings; // 0x40
		::ABC::QualitySettings::OceanDetailSettings* oceanDetailSettings; // 0x48
		::ABC::QualitySettings::InteractDetailSettings* interactDetailSettings; // 0x50
		::ABC::QualitySettings::SkyAtmosphereDetailSetting* skyAtmosphereDetailSettings; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_QUALITYSETTINGS_ENVQUALITYSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
