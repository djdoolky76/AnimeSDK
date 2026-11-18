#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HKIPDKIIDOD.h"
#include "unitysdk/MoleMole/SystemSettingEntryBase.h"

#define MOLEMOLE_SMALLTITLESETTINGENTRY_GET_SETTINGWIDGETTYPE_OFFSET UNITYSDK_OFFSET(0x13A07040)
#define MOLEMOLE_SMALLTITLESETTINGENTRY_GET__ISHIDEVERSIONCODE_OFFSET UNITYSDK_OFFSET(0x13A07030)
#define MOLEMOLE_SMALLTITLESETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x13A07050)

namespace MoleMole
{
	inline static constexpr unsigned int SmallTitleSettingEntry_TypeDefinitionIndex = 88429;

	class SmallTitleSettingEntry : public ::MoleMole::SystemSettingEntryBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SMALLTITLESETTINGENTRY__CTOR_OFFSET))(this);
		}

		::System::Boolean get__isHideVersionCode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SMALLTITLESETTINGENTRY_GET__ISHIDEVERSIONCODE_OFFSET))(this);
		}

		::HKIPDKIIDOD get_SettingWidgetType()
		{
			return ((::HKIPDKIIDOD(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SMALLTITLESETTINGENTRY_GET_SETTINGWIDGETTYPE_OFFSET))(this);
		}
	};
}
