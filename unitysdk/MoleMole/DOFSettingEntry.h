#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPBIMDNDPLK.h"
#include "unitysdk/MoleMole/GraphicEnumSettingEntryBase.h"
#include "unitysdk/MoleMole/GraphicSettingProfileType.h"

#define MOLEMOLE_DOFSETTINGENTRY_GET_PROFILETYPE_OFFSET UNITYSDK_OFFSET(0x103E4400)
#define MOLEMOLE_DOFSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x103E43F0)
#define MOLEMOLE_DOFSETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x103E4410)

namespace MoleMole
{
	inline static constexpr unsigned int DOFSettingEntry_TypeDefinitionIndex = 56872;

	class DOFSettingEntry : public ::MoleMole::GraphicEnumSettingEntryBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DOFSETTINGENTRY__CTOR_OFFSET))(this);
		}

		::HPBIMDNDPLK get_SettingContentType()
		{
			return ((::HPBIMDNDPLK(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DOFSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET))(this);
		}

		::MoleMole::GraphicSettingProfileType get_ProfileType()
		{
			return ((::MoleMole::GraphicSettingProfileType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DOFSETTINGENTRY_GET_PROFILETYPE_OFFSET))(this);
		}
	};
}
