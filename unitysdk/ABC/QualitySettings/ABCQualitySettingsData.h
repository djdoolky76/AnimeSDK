#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace ABC::QualitySettings { class ABCQualitySettingsPreset; }

#define ABC_QUALITYSETTINGS_ABCQUALITYSETTINGSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1F270C0)

namespace ABC::QualitySettings
{
	inline static constexpr unsigned int ABCQualitySettingsData_TypeDefinitionIndex = 7599;

	class ABCQualitySettingsData : public ::UnityEngine::ScriptableObject
	{
	public:
		::ABC::QualitySettings::ABCQualitySettingsPreset* PC; // 0x18
		::ABC::QualitySettings::ABCQualitySettingsPreset* iOS; // 0x20
		::ABC::QualitySettings::ABCQualitySettingsPreset* Android; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_QUALITYSETTINGS_ABCQUALITYSETTINGSDATA__CTOR_OFFSET))(this);
		}
	};
}
