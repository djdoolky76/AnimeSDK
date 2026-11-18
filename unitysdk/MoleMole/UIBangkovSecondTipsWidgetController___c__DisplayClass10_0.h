#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBangkovTipsDialogPopWindowController_ItemInfo.h"
#include "unitysdk/System/Object.h"

class IFOHGNLIAKH;
namespace MoleMole { class UIBangkovSecondTipsWidgetController; }

#define MOLEMOLE_UIBANGKOVSECONDTIPSWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17ECDED0)
#define MOLEMOLE_UIBANGKOVSECONDTIPSWIDGETCONTROLLER___C__DISPLAYCLASS10_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x17ECDEE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovSecondTipsWidgetController___c__DisplayClass10_0_TypeDefinitionIndex = 92840;

	class UIBangkovSecondTipsWidgetController___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBangkovSecondTipsWidgetController* __4__this; // 0x10
		::MoleMole::UIBangkovTipsDialogPopWindowController_ItemInfo itemInfo; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVSECONDTIPSWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__0(::IFOHGNLIAKH* ctrl)
		{
			return ((::System::Void(*)(::PVOID, ::IFOHGNLIAKH*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVSECONDTIPSWIDGETCONTROLLER___C__DISPLAYCLASS10_0__REFRESHVIEW_B__0_OFFSET))(this, ctrl);
		}
	};
}
