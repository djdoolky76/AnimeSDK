#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPBIMDNDPLK.h"
#include "unitysdk/MoleMole/IntNumSettingEntry.h"

class MDCMEPJLGOK;

#define MOLEMOLE_VOICEVOLUMESETTINGENTRY_GETSETTINGCONTROLUNIT_OFFSET UNITYSDK_OFFSET(0x120A7C00)
#define MOLEMOLE_VOICEVOLUMESETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x120A7BF0)
#define MOLEMOLE_VOICEVOLUMESETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x120A7D20)
#define MOLEMOLE_VOICEVOLUMESETTINGENTRY___BASE_GETSETTINGCONTROLUNIT_OFFSET UNITYSDK_OFFSET(0x120A7D40)

namespace MoleMole
{
	inline static constexpr unsigned int VoiceVolumeSettingEntry_TypeDefinitionIndex = 69970;

	class VoiceVolumeSettingEntry : public ::MoleMole::IntNumSettingEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOICEVOLUMESETTINGENTRY__CTOR_OFFSET))(this);
		}

		::HPBIMDNDPLK get_SettingContentType()
		{
			return ((::HPBIMDNDPLK(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOICEVOLUMESETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET))(this);
		}

		::MDCMEPJLGOK* GetSettingControlUnit()
		{
			return ((::MDCMEPJLGOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOICEVOLUMESETTINGENTRY_GETSETTINGCONTROLUNIT_OFFSET))(this);
		}

		::MDCMEPJLGOK* __base_GetSettingControlUnit()
		{
			return ((::MDCMEPJLGOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOICEVOLUMESETTINGENTRY___BASE_GETSETTINGCONTROLUNIT_OFFSET))(this);
		}
	};
}
