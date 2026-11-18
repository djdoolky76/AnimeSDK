#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class NAGHHLCDIGI;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIZENKOVMARKETPURCHASEHISTORYWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0xEB1ED30)
#define MOLEMOLE_UIZENKOVMARKETPURCHASEHISTORYWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xEB1EB80)
#define MOLEMOLE_UIZENKOVMARKETPURCHASEHISTORYWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xEB1EC20)
#define MOLEMOLE_UIZENKOVMARKETPURCHASEHISTORYWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xEB1EDA0)
#define MOLEMOLE_UIZENKOVMARKETPURCHASEHISTORYWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xEB1EE00)
#define MOLEMOLE_UIZENKOVMARKETPURCHASEHISTORYWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xEB1EEA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovMarketPurchaseHistoryWidgetController_TypeDefinitionIndex = 48884;

	class UIZenkovMarketPurchaseHistoryWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMARKETPURCHASEHISTORYWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMARKETPURCHASEHISTORYWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMARKETPURCHASEHISTORYWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMARKETPURCHASEHISTORYWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMARKETPURCHASEHISTORYWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::NAGHHLCDIGI* OGMPOGIHBIK()
		{
			return ((::NAGHHLCDIGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMARKETPURCHASEHISTORYWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
