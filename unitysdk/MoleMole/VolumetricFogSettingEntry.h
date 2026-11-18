#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPBIMDNDPLK.h"
#include "unitysdk/MoleMole/GraphicEnumSettingEntryBase.h"
#include "unitysdk/MoleMole/GraphicSettingProfileType.h"

#define MOLEMOLE_VOLUMETRICFOGSETTINGENTRY_GET_PROFILETYPE_OFFSET UNITYSDK_OFFSET(0x13B469B0)
#define MOLEMOLE_VOLUMETRICFOGSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x13B469A0)
#define MOLEMOLE_VOLUMETRICFOGSETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x13B469C0)

namespace MoleMole
{
	inline static constexpr unsigned int VolumetricFogSettingEntry_TypeDefinitionIndex = 86545;

	class VolumetricFogSettingEntry : public ::MoleMole::GraphicEnumSettingEntryBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOLUMETRICFOGSETTINGENTRY__CTOR_OFFSET))(this);
		}

		::HPBIMDNDPLK get_SettingContentType()
		{
			return ((::HPBIMDNDPLK(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOLUMETRICFOGSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET))(this);
		}

		::MoleMole::GraphicSettingProfileType get_ProfileType()
		{
			return ((::MoleMole::GraphicSettingProfileType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOLUMETRICFOGSETTINGENTRY_GET_PROFILETYPE_OFFSET))(this);
		}
	};
}
