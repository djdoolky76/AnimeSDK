#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HKIPDKIIDOD.h"
#include "unitysdk/MoleMole/SystemSettingEntryBase.h"

#define MOLEMOLE_LISTKEYBINDINGTITLESETTINGENTRY_GET_SETTINGWIDGETTYPE_OFFSET UNITYSDK_OFFSET(0x143300F0)
#define MOLEMOLE_LISTKEYBINDINGTITLESETTINGENTRY_GET__ISHIDEVERSIONCODE_OFFSET UNITYSDK_OFFSET(0x143300E0)
#define MOLEMOLE_LISTKEYBINDINGTITLESETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x14330100)

namespace MoleMole
{
	inline static constexpr unsigned int ListKeyBindingTitleSettingEntry_TypeDefinitionIndex = 49992;

	class ListKeyBindingTitleSettingEntry : public ::MoleMole::SystemSettingEntryBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LISTKEYBINDINGTITLESETTINGENTRY__CTOR_OFFSET))(this);
		}

		::System::Boolean get__isHideVersionCode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LISTKEYBINDINGTITLESETTINGENTRY_GET__ISHIDEVERSIONCODE_OFFSET))(this);
		}

		::HKIPDKIIDOD get_SettingWidgetType()
		{
			return ((::HKIPDKIIDOD(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LISTKEYBINDINGTITLESETTINGENTRY_GET_SETTINGWIDGETTYPE_OFFSET))(this);
		}
	};
}
