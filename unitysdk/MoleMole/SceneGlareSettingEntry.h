#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPBIMDNDPLK.h"
#include "unitysdk/MoleMole/GraphicEnumSettingEntryBase.h"
#include "unitysdk/MoleMole/GraphicSettingProfileType.h"

#define MOLEMOLE_SCENEGLARESETTINGENTRY_GET_PROFILETYPE_OFFSET UNITYSDK_OFFSET(0x1A715610)
#define MOLEMOLE_SCENEGLARESETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1A715600)
#define MOLEMOLE_SCENEGLARESETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A715620)

namespace MoleMole
{
	inline static constexpr unsigned int SceneGlareSettingEntry_TypeDefinitionIndex = 47048;

	class SceneGlareSettingEntry : public ::MoleMole::GraphicEnumSettingEntryBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEGLARESETTINGENTRY__CTOR_OFFSET))(this);
		}

		::HPBIMDNDPLK get_SettingContentType()
		{
			return ((::HPBIMDNDPLK(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEGLARESETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET))(this);
		}

		::MoleMole::GraphicSettingProfileType get_ProfileType()
		{
			return ((::MoleMole::GraphicSettingProfileType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEGLARESETTINGENTRY_GET_PROFILETYPE_OFFSET))(this);
		}
	};
}
