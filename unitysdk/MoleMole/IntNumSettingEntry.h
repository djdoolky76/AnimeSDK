#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HKIPDKIIDOD.h"
#include "unitysdk/MoleMole/SystemSettingEntryBase.h"

#define MOLEMOLE_INTNUMSETTINGENTRY_GETDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x130E0FF0)
#define MOLEMOLE_INTNUMSETTINGENTRY_GET_SETTINGWIDGETTYPE_OFFSET UNITYSDK_OFFSET(0x130E0FE0)
#define MOLEMOLE_INTNUMSETTINGENTRY_GET__ISHIDEDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x130E0FD0)
#define MOLEMOLE_INTNUMSETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x130E0FA0)

namespace MoleMole
{
	inline static constexpr unsigned int IntNumSettingEntry_TypeDefinitionIndex = 72084;

	class IntNumSettingEntry : public ::MoleMole::SystemSettingEntryBase
	{
	public:
		::System::Int32 MinValue; // 0x30
		::System::Int32 MaxValue; // 0x34
		::System::Int32 DefaultValue; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INTNUMSETTINGENTRY__CTOR_OFFSET))(this);
		}

		::System::Boolean get__isHideDefaultValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INTNUMSETTINGENTRY_GET__ISHIDEDEFAULTVALUE_OFFSET))(this);
		}

		::HKIPDKIIDOD get_SettingWidgetType()
		{
			return ((::HKIPDKIIDOD(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INTNUMSETTINGENTRY_GET_SETTINGWIDGETTYPE_OFFSET))(this);
		}

		::System::Int32 GetDefaultValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INTNUMSETTINGENTRY_GETDEFAULTVALUE_OFFSET))(this);
		}
	};
}
