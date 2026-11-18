#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPBIMDNDPLK.h"
#include "unitysdk/MoleMole/GraphicEnumSettingEntryBase.h"
#include "unitysdk/MoleMole/GraphicSettingProfileType.h"

#define MOLEMOLE_ANISOTROPICSAMPLINGSETTINGENTRY_GET_PROFILETYPE_OFFSET UNITYSDK_OFFSET(0x11E573A0)
#define MOLEMOLE_ANISOTROPICSAMPLINGSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x11E57390)
#define MOLEMOLE_ANISOTROPICSAMPLINGSETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x11E573B0)

namespace MoleMole
{
	inline static constexpr unsigned int AnisotropicSamplingSettingEntry_TypeDefinitionIndex = 50015;

	class AnisotropicSamplingSettingEntry : public ::MoleMole::GraphicEnumSettingEntryBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANISOTROPICSAMPLINGSETTINGENTRY__CTOR_OFFSET))(this);
		}

		::HPBIMDNDPLK get_SettingContentType()
		{
			return ((::HPBIMDNDPLK(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANISOTROPICSAMPLINGSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET))(this);
		}

		::MoleMole::GraphicSettingProfileType get_ProfileType()
		{
			return ((::MoleMole::GraphicSettingProfileType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANISOTROPICSAMPLINGSETTINGENTRY_GET_PROFILETYPE_OFFSET))(this);
		}
	};
}
