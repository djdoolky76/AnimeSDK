#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPBIMDNDPLK.h"
#include "unitysdk/MoleMole/EnumSettingEntry.h"

class MDCMEPJLGOK;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_IOSMETALFXSETTINGENTRY_GETSETTINGCONTROLUNIT_OFFSET UNITYSDK_OFFSET(0x12B4C7C0)
#define MOLEMOLE_IOSMETALFXSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x12B4C7B0)
#define MOLEMOLE_IOSMETALFXSETTINGENTRY_ISMETALFXENABLED_OFFSET UNITYSDK_OFFSET(0x12B4C890)
#define MOLEMOLE_IOSMETALFXSETTINGENTRY_ISSHOWONUIINNER_OFFSET UNITYSDK_OFFSET(0x12B4C840)
#define MOLEMOLE_IOSMETALFXSETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x12B4CC20)
#define MOLEMOLE_IOSMETALFXSETTINGENTRY___BASE_GETSETTINGCONTROLUNIT_OFFSET UNITYSDK_OFFSET(0x12B4CCC0)
#define MOLEMOLE_IOSMETALFXSETTINGENTRY___BASE_ISSHOWONUIINNER_OFFSET UNITYSDK_OFFSET(0x12B4CCD0)

namespace MoleMole
{
	inline static constexpr unsigned int IOSMetalFxSettingEntry_TypeDefinitionIndex = 83030;

	class IOSMetalFxSettingEntry : public ::MoleMole::EnumSettingEntry
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* EnablePerformanceKeyList; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IOSMETALFXSETTINGENTRY__CTOR_OFFSET))(this);
		}

		::HPBIMDNDPLK get_SettingContentType()
		{
			return ((::HPBIMDNDPLK(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IOSMETALFXSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET))(this);
		}

		::MDCMEPJLGOK* GetSettingControlUnit()
		{
			return ((::MDCMEPJLGOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IOSMETALFXSETTINGENTRY_GETSETTINGCONTROLUNIT_OFFSET))(this);
		}

		::System::Boolean IsShowOnUIInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IOSMETALFXSETTINGENTRY_ISSHOWONUIINNER_OFFSET))(this);
		}

		::System::Boolean IsMetalFxEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IOSMETALFXSETTINGENTRY_ISMETALFXENABLED_OFFSET))(this);
		}

		::MDCMEPJLGOK* __base_GetSettingControlUnit()
		{
			return ((::MDCMEPJLGOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IOSMETALFXSETTINGENTRY___BASE_GETSETTINGCONTROLUNIT_OFFSET))(this);
		}

		::System::Boolean __base_IsShowOnUIInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IOSMETALFXSETTINGENTRY___BASE_ISSHOWONUIINNER_OFFSET))(this);
		}
	};
}
