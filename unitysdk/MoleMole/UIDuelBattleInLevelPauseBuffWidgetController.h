#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class BEHJOGIIEBM;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIDuelBattleInLevelPauseBuffRowWidgetContext; }
namespace MoleMole { class UIDuelBattleInLevelPauseBuffRowWidgetController; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIDUELBATTLEINLEVELPAUSEBUFFWIDGETCONTROLLER_OJCENAFOJGF_OFFSET UNITYSDK_OFFSET(0x19692A10)
#define MOLEMOLE_UIDUELBATTLEINLEVELPAUSEBUFFWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19692BE0)
#define MOLEMOLE_UIDUELBATTLEINLEVELPAUSEBUFFWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19692C70)
#define MOLEMOLE_UIDUELBATTLEINLEVELPAUSEBUFFWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19692470)
#define MOLEMOLE_UIDUELBATTLEINLEVELPAUSEBUFFWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x196924D0)
#define MOLEMOLE_UIDUELBATTLEINLEVELPAUSEBUFFWIDGETCONTROLLER_REFRESH_OFFSET UNITYSDK_OFFSET(0x19692540)
#define MOLEMOLE_UIDUELBATTLEINLEVELPAUSEBUFFWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19692CF0)
#define MOLEMOLE_UIDUELBATTLEINLEVELPAUSEBUFFWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19692DD0)
#define MOLEMOLE_UIDUELBATTLEINLEVELPAUSEBUFFWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19692E60)
#define MOLEMOLE_UIDUELBATTLEINLEVELPAUSEBUFFWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19692EF0)
#define MOLEMOLE_UIDUELBATTLEINLEVELPAUSEBUFFWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19692F80)

namespace MoleMole
{
	inline static constexpr unsigned int UIDuelBattleInLevelPauseBuffWidgetController_TypeDefinitionIndex = 88571;

	class UIDuelBattleInLevelPauseBuffWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::BEHJOGIIEBM* _view; // 0x2C8
		::System::Collections::Generic::List_1<::MoleMole::UIDuelBattleInLevelPauseBuffRowWidgetController*>* DOKBNDIEIJC; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUELBATTLEINLEVELPAUSEBUFFWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUELBATTLEINLEVELPAUSEBUFFWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUELBATTLEINLEVELPAUSEBUFFWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void Refresh(::System::Collections::Generic::IReadOnlyList_1<::MoleMole::UIDuelBattleInLevelPauseBuffRowWidgetContext*>* buffInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::MoleMole::UIDuelBattleInLevelPauseBuffRowWidgetContext*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUELBATTLEINLEVELPAUSEBUFFWIDGETCONTROLLER_REFRESH_OFFSET))(this, buffInfos);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUELBATTLEINLEVELPAUSEBUFFWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUELBATTLEINLEVELPAUSEBUFFWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUELBATTLEINLEVELPAUSEBUFFWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUELBATTLEINLEVELPAUSEBUFFWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUELBATTLEINLEVELPAUSEBUFFWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUELBATTLEINLEVELPAUSEBUFFWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void OJCENAFOJGF(::MoleMole::UIDuelBattleInLevelPauseBuffRowWidgetContext* AAOCANGHBDG)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIDuelBattleInLevelPauseBuffRowWidgetContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUELBATTLEINLEVELPAUSEBUFFWIDGETCONTROLLER_OJCENAFOJGF_OFFSET))(this, AAOCANGHBDG);
		}
	};
}
