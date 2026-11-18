#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPBIMDNDPLK.h"
#include "unitysdk/MoleMole/GraphicEnumSettingEntryBase.h"
#include "unitysdk/MoleMole/GraphicSettingProfileType.h"

#define MOLEMOLE_VSYNCSETTINGENTRY_GET_PROFILETYPE_OFFSET UNITYSDK_OFFSET(0x12FC4B80)
#define MOLEMOLE_VSYNCSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x12FC4B70)
#define MOLEMOLE_VSYNCSETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x12FC4B90)

namespace MoleMole
{
	inline static constexpr unsigned int VSyncSettingEntry_TypeDefinitionIndex = 57376;

	class VSyncSettingEntry : public ::MoleMole::GraphicEnumSettingEntryBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VSYNCSETTINGENTRY__CTOR_OFFSET))(this);
		}

		::HPBIMDNDPLK get_SettingContentType()
		{
			return ((::HPBIMDNDPLK(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VSYNCSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET))(this);
		}

		::MoleMole::GraphicSettingProfileType get_ProfileType()
		{
			return ((::MoleMole::GraphicSettingProfileType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VSYNCSETTINGENTRY_GET_PROFILETYPE_OFFSET))(this);
		}
	};
}
