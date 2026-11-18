#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPNHHGBPCGM.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MOLEMOLE_UISETTINGRESOURCEMANAGEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS3_2__CTOR_OFFSET UNITYSDK_OFFSET(0x167C5670)
#define MOLEMOLE_UISETTINGRESOURCEMANAGEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS3_2__ONUIINIT_B__9_OFFSET UNITYSDK_OFFSET(0x167C5680)

namespace MoleMole
{
	inline static constexpr unsigned int UISettingResourceManageDialogPopWindowController___c__DisplayClass3_2_TypeDefinitionIndex = 48219;

	template <typename T1, typename T2>
	class UISettingResourceManageDialogPopWindowController___c__DisplayClass3_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerable_1<::GPNHHGBPCGM>* packageTags; // 0x10
		::System::Collections::Generic::IEnumerable_1<::System::Int32>* titleIds; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGRESOURCEMANAGEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS3_2__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGRESOURCEMANAGEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS3_2__ONUIINIT_B__9_OFFSET))(this);
		}
	};
}
