#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPBIMDNDPLK.h"
#include "unitysdk/MoleMole/GraphicEnumSettingEntryBase.h"
#include "unitysdk/MoleMole/GraphicSettingProfileType.h"

#define MOLEMOLE_BLOOMSETTINGENTRY_GET_PROFILETYPE_OFFSET UNITYSDK_OFFSET(0x11E68590)
#define MOLEMOLE_BLOOMSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x11E68580)
#define MOLEMOLE_BLOOMSETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x11E685A0)

namespace MoleMole
{
	inline static constexpr unsigned int BloomSettingEntry_TypeDefinitionIndex = 84447;

	class BloomSettingEntry : public ::MoleMole::GraphicEnumSettingEntryBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BLOOMSETTINGENTRY__CTOR_OFFSET))(this);
		}

		::HPBIMDNDPLK get_SettingContentType()
		{
			return ((::HPBIMDNDPLK(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BLOOMSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET))(this);
		}

		::MoleMole::GraphicSettingProfileType get_ProfileType()
		{
			return ((::MoleMole::GraphicSettingProfileType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BLOOMSETTINGENTRY_GET_PROFILETYPE_OFFSET))(this);
		}
	};
}
