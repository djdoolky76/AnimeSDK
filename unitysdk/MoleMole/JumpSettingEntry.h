#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HKIPDKIIDOD.h"
#include "unitysdk/MoleMole/SystemSettingEntryBase.h"

namespace System { class String; }

#define MOLEMOLE_JUMPSETTINGENTRY_GET_SETTINGWIDGETTYPE_OFFSET UNITYSDK_OFFSET(0x14671520)
#define MOLEMOLE_JUMPSETTINGENTRY_GET__ISHIDEVERSIONCODE_OFFSET UNITYSDK_OFFSET(0x14671510)
#define MOLEMOLE_JUMPSETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1466D230)

namespace MoleMole
{
	inline static constexpr unsigned int JumpSettingEntry_TypeDefinitionIndex = 39209;

	class JumpSettingEntry : public ::MoleMole::SystemSettingEntryBase
	{
	public:
		::System::String* JumpTextCode; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_JUMPSETTINGENTRY__CTOR_OFFSET))(this);
		}

		::System::Boolean get__isHideVersionCode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_JUMPSETTINGENTRY_GET__ISHIDEVERSIONCODE_OFFSET))(this);
		}

		::HKIPDKIIDOD get_SettingWidgetType()
		{
			return ((::HKIPDKIIDOD(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_JUMPSETTINGENTRY_GET_SETTINGWIDGETTYPE_OFFSET))(this);
		}
	};
}
