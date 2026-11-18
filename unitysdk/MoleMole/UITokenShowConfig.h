#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKLFCIEFPNA.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UITOKENSHOWCONFIG_GET_CUSTOMITEMPACKAGETYPE_OFFSET UNITYSDK_OFFSET(0x13B223C0)
#define MOLEMOLE_UITOKENSHOWCONFIG_GET_USECUSTOMITEMPACKAGETYPE_OFFSET UNITYSDK_OFFSET(0x13B22370)
#define MOLEMOLE_UITOKENSHOWCONFIG_HENDCIBCJFN_OFFSET UNITYSDK_OFFSET(0x13B223F0)
#define MOLEMOLE_UITOKENSHOWCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x13B223D0)

namespace MoleMole
{
	inline static constexpr unsigned int UITokenShowConfig_TypeDefinitionIndex = 46001;

	class UITokenShowConfig : public ::System::Object
	{
	public:
		::System::Int32 TokenItemID; // 0x10
		::System::Boolean HideAddIcon; // 0x14
		::System::Boolean EnableClickInLevel; // 0x15
		::System::Byte _padding0[0x2];
		::PKLFCIEFPNA m_customItemPackageType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOKENSHOWCONFIG__CTOR_OFFSET))(this);
		}

		::System::Boolean get_UseCustomItemPackageType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOKENSHOWCONFIG_GET_USECUSTOMITEMPACKAGETYPE_OFFSET))(this);
		}

		::PKLFCIEFPNA get_CustomItemPackageType()
		{
			return ((::PKLFCIEFPNA(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOKENSHOWCONFIG_GET_CUSTOMITEMPACKAGETYPE_OFFSET))(this);
		}

		::MoleMole::UITokenShowConfig* HENDCIBCJFN(::PKLFCIEFPNA OBNIAHNMHPF)
		{
			return ((::MoleMole::UITokenShowConfig*(*)(::PVOID, ::PKLFCIEFPNA))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOKENSHOWCONFIG_HENDCIBCJFN_OFFSET))(this, OBNIAHNMHPF);
		}
	};
}
