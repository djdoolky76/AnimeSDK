#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B88870E9FB4B8C1A/EBEF12FEF73806C7.h"
#include "unitysdk/F3A7E850877D3BCF/A8D3C83DFB0A57CA.h"
#include "unitysdk/System/Object.h"

namespace ABC::QualitySettings { class AOQualitySettings; }
namespace ABC::QualitySettings { class ClusterLightingDetailSettings; }
namespace ABC::QualitySettings { class GIDetailSettings; }
namespace ABC::QualitySettings { class SSGIDetailSettings; }

#define ABC_QUALITYSETTINGS_LIGHTINGQUALITYSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x2284470)

namespace ABC::QualitySettings
{
	inline static constexpr unsigned int LightingQualitySettings_TypeDefinitionIndex = 6987;

	class LightingQualitySettings : public ::System::Object
	{
	public:
		::System::Boolean useHalfResCopyColor; // 0x10
		::System::Byte _padding0[0x7];
		::ABC::QualitySettings::ClusterLightingDetailSettings* clusterLightingDetailSettings; // 0x18
		::ABC::QualitySettings::GIDetailSettings* giDetailSettings; // 0x20
		::ABC::QualitySettings::AOQualitySettings* aoQualitySettings; // 0x28
		::ABC::QualitySettings::SSGIDetailSettings* ssgiDetailSettings; // 0x30
		::B88870E9FB4B8C1A::EBEF12FEF73806C7 localLightLevel; // 0x38
		::F3A7E850877D3BCF::A8D3C83DFB0A57CA shaderLodLevel; // 0x3C
		::System::Single maxCharacterLocalLightDistance; // 0x40
		::System::Boolean useDepthStoreOptimization; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_QUALITYSETTINGS_LIGHTINGQUALITYSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
