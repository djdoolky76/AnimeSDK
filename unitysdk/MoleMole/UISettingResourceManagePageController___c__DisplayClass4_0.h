#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPNHHGBPCGM.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UISettingResourceManagePageController; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MOLEMOLE_UISETTINGRESOURCEMANAGEPAGECONTROLLER___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17DA3AA0)
#define MOLEMOLE_UISETTINGRESOURCEMANAGEPAGECONTROLLER___C__DISPLAYCLASS4_0__ONUIINIT_B__10_OFFSET UNITYSDK_OFFSET(0x17DA3AB0)

namespace MoleMole
{
	inline static constexpr unsigned int UISettingResourceManagePageController___c__DisplayClass4_0_TypeDefinitionIndex = 40978;

	class UISettingResourceManagePageController___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerable_1<::System::Int32>* titleIds; // 0x10
		::System::Collections::Generic::IEnumerable_1<::GPNHHGBPCGM>* packageTags; // 0x18
		::MoleMole::UISettingResourceManagePageController* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGRESOURCEMANAGEPAGECONTROLLER___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__10()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGRESOURCEMANAGEPAGECONTROLLER___C__DISPLAYCLASS4_0__ONUIINIT_B__10_OFFSET))(this);
		}
	};
}
