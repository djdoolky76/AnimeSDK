#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSubSystemSettingBase.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"

#define MOLEMOLE_CONFIG_CONFIGMPPLAYERSETTING_GET_SYSTEMSETTINGTYPE_OFFSET UNITYSDK_OFFSET(0x190A45D0)
#define MOLEMOLE_CONFIG_CONFIGMPPLAYERSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x190A45E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMpPlayerSetting_TypeDefinitionIndex = 52571;

	class ConfigMpPlayerSetting : public ::MoleMole::Config::ConfigSubSystemSettingBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMPPLAYERSETTING__CTOR_OFFSET))(this);
		}

		::MoleMole::ESystemSettingType get_SystemSettingType()
		{
			return ((::MoleMole::ESystemSettingType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMPPLAYERSETTING_GET_SYSTEMSETTINGTYPE_OFFSET))(this);
		}
	};
}
