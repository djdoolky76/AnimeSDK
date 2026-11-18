#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPBIMDNDPLK.h"
#include "unitysdk/MoleMole/GraphicEnumSettingEntryBase.h"
#include "unitysdk/MoleMole/GraphicSettingProfileType.h"

#define MOLEMOLE_ANTIALIASSETTINGENTRY_GET_PROFILETYPE_OFFSET UNITYSDK_OFFSET(0x11A35780)
#define MOLEMOLE_ANTIALIASSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x11A35770)
#define MOLEMOLE_ANTIALIASSETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x11A35790)

namespace MoleMole
{
	inline static constexpr unsigned int AntiAliasSettingEntry_TypeDefinitionIndex = 86941;

	class AntiAliasSettingEntry : public ::MoleMole::GraphicEnumSettingEntryBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANTIALIASSETTINGENTRY__CTOR_OFFSET))(this);
		}

		::HPBIMDNDPLK get_SettingContentType()
		{
			return ((::HPBIMDNDPLK(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANTIALIASSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET))(this);
		}

		::MoleMole::GraphicSettingProfileType get_ProfileType()
		{
			return ((::MoleMole::GraphicSettingProfileType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANTIALIASSETTINGENTRY_GET_PROFILETYPE_OFFSET))(this);
		}
	};
}
