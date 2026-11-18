#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPBIMDNDPLK.h"
#include "unitysdk/MoleMole/PCAdvancedGraphicsEnumSettingEntry.h"

class MDCMEPJLGOK;

#define MOLEMOLE_PCRTXQUALITYSETTINGENTRY_GETSETTINGCONTROLUNIT_OFFSET UNITYSDK_OFFSET(0x1249B630)
#define MOLEMOLE_PCRTXQUALITYSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1249B620)
#define MOLEMOLE_PCRTXQUALITYSETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1249B6B0)
#define MOLEMOLE_PCRTXQUALITYSETTINGENTRY___BASE_GETSETTINGCONTROLUNIT_OFFSET UNITYSDK_OFFSET(0x1249B6C0)

namespace MoleMole
{
	inline static constexpr unsigned int PCRTXQualitySettingEntry_TypeDefinitionIndex = 62352;

	class PCRTXQualitySettingEntry : public ::MoleMole::PCAdvancedGraphicsEnumSettingEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PCRTXQUALITYSETTINGENTRY__CTOR_OFFSET))(this);
		}

		::HPBIMDNDPLK get_SettingContentType()
		{
			return ((::HPBIMDNDPLK(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PCRTXQUALITYSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET))(this);
		}

		::MDCMEPJLGOK* GetSettingControlUnit()
		{
			return ((::MDCMEPJLGOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PCRTXQUALITYSETTINGENTRY_GETSETTINGCONTROLUNIT_OFFSET))(this);
		}

		::MDCMEPJLGOK* __base_GetSettingControlUnit()
		{
			return ((::MDCMEPJLGOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PCRTXQUALITYSETTINGENTRY___BASE_GETSETTINGCONTROLUNIT_OFFSET))(this);
		}
	};
}
