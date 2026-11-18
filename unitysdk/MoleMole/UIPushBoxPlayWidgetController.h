#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/MoleMole/InputActionEvent.h"

class MAFFPBOHIPL;
namespace MoleMole { class UIAllroundGeneralTutorialPopWindowController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHollowMiniGameDiscretePlayerMoveChildWindowController; }
namespace MoleMole { class UIHollowPushBoxGame3DModelController; }
namespace MoleMole { class UIPushBoxPlayBtnAChildWindowController; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x147EDEB0)
#define MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_ONCLICKINFO_OFFSET UNITYSDK_OFFSET(0x147EF620)
#define MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x147EEFD0)
#define MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x147EF0D0)
#define MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x147EEA60)
#define MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x147EF060)
#define MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x147EDEC0)
#define MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x147EE080)
#define MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_PLAYCONGRATSANIM_OFFSET UNITYSDK_OFFSET(0x147EF930)
#define MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_TRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x147EF130)
#define MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x147EFB30)
#define MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x147EFB40)
#define MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x147EFBD0)
#define MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x147EFC00)
#define MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x147EFCC0)
#define MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x147EFCD0)
#define MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x147EFCE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPushBoxPlayWidgetController_TypeDefinitionIndex = 92797;

	class UIPushBoxPlayWidgetController : public ::MoleMole::UIWindowController
	{
	public:
		::MAFFPBOHIPL* _view; // 0x320
		::System::String* AGHKDOHEHKD; // 0x328
		::MoleMole::UIHollowPushBoxGame3DModelController* HOOMFHHOPPM; // 0x330
		::MoleMole::UIHollowMiniGameDiscretePlayerMoveChildWindowController* JJBOLDBDOKO; // 0x338
		::MoleMole::UIPushBoxPlayBtnAChildWindowController* OFGLEEOIKKB; // 0x340
		::MoleMole::UIAllroundGeneralTutorialPopWindowController* IJFNMKGJKKA; // 0x348

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void TriggerExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_TRIGGEREXIT_OFFSET))(this);
		}

		::System::Void OnClickInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_ONCLICKINFO_OFFSET))(this);
		}

		::System::Void PlayCongratsAnim(::System::Action* onAnimEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_PLAYCONGRATSANIM_OFFSET))(this, onAnimEnd);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
