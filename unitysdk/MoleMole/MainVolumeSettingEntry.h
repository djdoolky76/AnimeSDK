#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPBIMDNDPLK.h"
#include "unitysdk/MoleMole/IntNumSettingEntry.h"

class MDCMEPJLGOK;

#define MOLEMOLE_MAINVOLUMESETTINGENTRY_GETSETTINGCONTROLUNIT_OFFSET UNITYSDK_OFFSET(0x1246DE70)
#define MOLEMOLE_MAINVOLUMESETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1246DE60)
#define MOLEMOLE_MAINVOLUMESETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1246DF90)
#define MOLEMOLE_MAINVOLUMESETTINGENTRY___BASE_GETSETTINGCONTROLUNIT_OFFSET UNITYSDK_OFFSET(0x1246DFB0)

namespace MoleMole
{
	inline static constexpr unsigned int MainVolumeSettingEntry_TypeDefinitionIndex = 60643;

	class MainVolumeSettingEntry : public ::MoleMole::IntNumSettingEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINVOLUMESETTINGENTRY__CTOR_OFFSET))(this);
		}

		::HPBIMDNDPLK get_SettingContentType()
		{
			return ((::HPBIMDNDPLK(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINVOLUMESETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET))(this);
		}

		::MDCMEPJLGOK* GetSettingControlUnit()
		{
			return ((::MDCMEPJLGOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINVOLUMESETTINGENTRY_GETSETTINGCONTROLUNIT_OFFSET))(this);
		}

		::MDCMEPJLGOK* __base_GetSettingControlUnit()
		{
			return ((::MDCMEPJLGOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINVOLUMESETTINGENTRY___BASE_GETSETTINGCONTROLUNIT_OFFSET))(this);
		}
	};
}
