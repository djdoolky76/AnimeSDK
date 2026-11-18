#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPBIMDNDPLK.h"
#include "unitysdk/MoleMole/GraphicEnumSettingEntryBase.h"
#include "unitysdk/MoleMole/GraphicSettingProfileType.h"

#define MOLEMOLE_DPIFACTORSETTINGENTRY_GET_PROFILETYPE_OFFSET UNITYSDK_OFFSET(0x142CEFC0)
#define MOLEMOLE_DPIFACTORSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x142CEFB0)
#define MOLEMOLE_DPIFACTORSETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x142CEFD0)

namespace MoleMole
{
	inline static constexpr unsigned int DpiFactorSettingEntry_TypeDefinitionIndex = 57970;

	class DpiFactorSettingEntry : public ::MoleMole::GraphicEnumSettingEntryBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DPIFACTORSETTINGENTRY__CTOR_OFFSET))(this);
		}

		::HPBIMDNDPLK get_SettingContentType()
		{
			return ((::HPBIMDNDPLK(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DPIFACTORSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET))(this);
		}

		::MoleMole::GraphicSettingProfileType get_ProfileType()
		{
			return ((::MoleMole::GraphicSettingProfileType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DPIFACTORSETTINGENTRY_GET_PROFILETYPE_OFFSET))(this);
		}
	};
}
