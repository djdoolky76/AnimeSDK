#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIInLevel_BattleInfo_WithProgress_WidgetController.h"
#include "unitysdk/MoleMole/UIInLevel_BattleInfo_WithProgress_WidgetController_BattleInfoStatus.h"

namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIINLEVELPAUSE_ZENKOV_ALTARWIDGETCONTROLLER_EKHAHDGHDME_OFFSET UNITYSDK_OFFSET(0x19022770)
#define MOLEMOLE_UIINLEVELPAUSE_ZENKOV_ALTARWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x19022690)
#define MOLEMOLE_UIINLEVELPAUSE_ZENKOV_ALTARWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19022640)
#define MOLEMOLE_UIINLEVELPAUSE_ZENKOV_ALTARWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19022E30)
#define MOLEMOLE_UIINLEVELPAUSE_ZENKOV_ALTARWIDGETCONTROLLER__GETINFOSTATUS_OFFSET UNITYSDK_OFFSET(0x19022600)
#define MOLEMOLE_UIINLEVELPAUSE_ZENKOV_ALTARWIDGETCONTROLLER__REFRESHCUSTOM_OFFSET UNITYSDK_OFFSET(0x190226E0)
#define MOLEMOLE_UIINLEVELPAUSE_ZENKOV_ALTARWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x19022F60)
#define MOLEMOLE_UIINLEVELPAUSE_ZENKOV_ALTARWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19022F70)
#define MOLEMOLE_UIINLEVELPAUSE_ZENKOV_ALTARWIDGETCONTROLLER___BASE__GETINFOSTATUS_OFFSET UNITYSDK_OFFSET(0x19022E40)
#define MOLEMOLE_UIINLEVELPAUSE_ZENKOV_ALTARWIDGETCONTROLLER___BASE__REFRESHCUSTOM_OFFSET UNITYSDK_OFFSET(0x19022ED0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPause_Zenkov_AltarWidgetController_TypeDefinitionIndex = 42778;

	class UIInLevelPause_Zenkov_AltarWidgetController : public ::MoleMole::UIInLevel_BattleInfo_WithProgress_WidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSE_ZENKOV_ALTARWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::MoleMole::UIInLevel_BattleInfo_WithProgress_WidgetController_BattleInfoStatus _GetInfoStatus()
		{
			return ((::MoleMole::UIInLevel_BattleInfo_WithProgress_WidgetController_BattleInfoStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSE_ZENKOV_ALTARWIDGETCONTROLLER__GETINFOSTATUS_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSE_ZENKOV_ALTARWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSE_ZENKOV_ALTARWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void _RefreshCustom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSE_ZENKOV_ALTARWIDGETCONTROLLER__REFRESHCUSTOM_OFFSET))(this);
		}

		::MoleMole::UIInLevel_BattleInfo_WithProgress_WidgetController_BattleInfoStatus __base__GetInfoStatus()
		{
			return ((::MoleMole::UIInLevel_BattleInfo_WithProgress_WidgetController_BattleInfoStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSE_ZENKOV_ALTARWIDGETCONTROLLER___BASE__GETINFOSTATUS_OFFSET))(this);
		}

		::System::Void __base__RefreshCustom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSE_ZENKOV_ALTARWIDGETCONTROLLER___BASE__REFRESHCUSTOM_OFFSET))(this);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSE_ZENKOV_ALTARWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSE_ZENKOV_ALTARWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void EKHAHDGHDME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSE_ZENKOV_ALTARWIDGETCONTROLLER_EKHAHDGHDME_OFFSET))(this);
		}
	};
}
