#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPBIMDNDPLK.h"
#include "unitysdk/MoleMole/PCAdvancedGraphicsEnumSettingEntry.h"

class MDCMEPJLGOK;

#define MOLEMOLE_PCRTXENABLESETTINGENTRY_GETSETTINGCONTROLUNIT_OFFSET UNITYSDK_OFFSET(0x1249B580)
#define MOLEMOLE_PCRTXENABLESETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1249B570)
#define MOLEMOLE_PCRTXENABLESETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1249B600)
#define MOLEMOLE_PCRTXENABLESETTINGENTRY___BASE_GETSETTINGCONTROLUNIT_OFFSET UNITYSDK_OFFSET(0x1249B610)

namespace MoleMole
{
	inline static constexpr unsigned int PCRTXEnableSettingEntry_TypeDefinitionIndex = 81789;

	class PCRTXEnableSettingEntry : public ::MoleMole::PCAdvancedGraphicsEnumSettingEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PCRTXENABLESETTINGENTRY__CTOR_OFFSET))(this);
		}

		::HPBIMDNDPLK get_SettingContentType()
		{
			return ((::HPBIMDNDPLK(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PCRTXENABLESETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET))(this);
		}

		::MDCMEPJLGOK* GetSettingControlUnit()
		{
			return ((::MDCMEPJLGOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PCRTXENABLESETTINGENTRY_GETSETTINGCONTROLUNIT_OFFSET))(this);
		}

		::MDCMEPJLGOK* __base_GetSettingControlUnit()
		{
			return ((::MDCMEPJLGOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PCRTXENABLESETTINGENTRY___BASE_GETSETTINGCONTROLUNIT_OFFSET))(this);
		}
	};
}
