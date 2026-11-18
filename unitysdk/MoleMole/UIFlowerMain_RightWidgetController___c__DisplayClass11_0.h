#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UI/FlowerShop/ESlotType.h"
#include "unitysdk/System/Object.h"

class PPGKAHKNJIP;
namespace MoleMole { class UIFlowerMain_RightWidgetController; }

#define MOLEMOLE_UIFLOWERMAIN_RIGHTWIDGETCONTROLLER___C__DISPLAYCLASS11_0__BUILDDATABINDING_VIEWMODEL2CONTEXT_B__1_OFFSET UNITYSDK_OFFSET(0x18931530)
#define MOLEMOLE_UIFLOWERMAIN_RIGHTWIDGETCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18931520)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerMain_RightWidgetController___c__DisplayClass11_0_TypeDefinitionIndex = 46863;

	class UIFlowerMain_RightWidgetController___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::MoleMole::UIFlowerMain_RightWidgetController* __4__this; // 0x10
		::PPGKAHKNJIP* currentSelectData; // 0x18
		::MoleMole::UI::FlowerShop::ESlotType slot; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_RIGHTWIDGETCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _BuildDataBinding_ViewModel2Context_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_RIGHTWIDGETCONTROLLER___C__DISPLAYCLASS11_0__BUILDDATABINDING_VIEWMODEL2CONTEXT_B__1_OFFSET))(this);
		}
	};
}
