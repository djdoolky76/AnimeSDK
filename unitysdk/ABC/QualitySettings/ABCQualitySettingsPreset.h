#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ABC::QualitySettings { class ABCQualitySettingsModel; }
namespace ABC::QualitySettings { class ABCQualitySettingsPresetDetail; }
namespace ABC::QualitySettings { class ChessGameOverrideSettings; }

#define ABC_QUALITYSETTINGS_ABCQUALITYSETTINGSPRESET__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ABC::QualitySettings
{
	inline static constexpr unsigned int ABCQualitySettingsPreset_TypeDefinitionIndex = 9203;

	class ABCQualitySettingsPreset : public ::System::Object
	{
	public:
		::ABC::QualitySettings::ABCQualitySettingsModel* veryHigh; // 0x10
		::ABC::QualitySettings::ABCQualitySettingsModel* high; // 0x18
		::ABC::QualitySettings::ABCQualitySettingsModel* medium; // 0x20
		::ABC::QualitySettings::ABCQualitySettingsModel* low; // 0x28
		::ABC::QualitySettings::ABCQualitySettingsModel* veryLow; // 0x30
		::ABC::QualitySettings::ABCQualitySettingsPresetDetail* details; // 0x38
		::ABC::QualitySettings::ChessGameOverrideSettings* chessGameOverrideSettings; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_QUALITYSETTINGS_ABCQUALITYSETTINGSPRESET__CTOR_OFFSET))(this);
		}
	};
}
