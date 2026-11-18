#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPBIMDNDPLK.h"
#include "unitysdk/MoleMole/GraphicEnumSettingEntryBase.h"
#include "unitysdk/MoleMole/GraphicSettingProfileType.h"

#define MOLEMOLE_FRAMERATESETTINGENTRY_GET_PROFILETYPE_OFFSET UNITYSDK_OFFSET(0x1A8F4DF0)
#define MOLEMOLE_FRAMERATESETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1A8F4DE0)
#define MOLEMOLE_FRAMERATESETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8F4E00)

namespace MoleMole
{
	inline static constexpr unsigned int FrameRateSettingEntry_TypeDefinitionIndex = 68679;

	class FrameRateSettingEntry : public ::MoleMole::GraphicEnumSettingEntryBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FRAMERATESETTINGENTRY__CTOR_OFFSET))(this);
		}

		::HPBIMDNDPLK get_SettingContentType()
		{
			return ((::HPBIMDNDPLK(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FRAMERATESETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET))(this);
		}

		::MoleMole::GraphicSettingProfileType get_ProfileType()
		{
			return ((::MoleMole::GraphicSettingProfileType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FRAMERATESETTINGENTRY_GET_PROFILETYPE_OFFSET))(this);
		}
	};
}
