#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class IHBBMLIPIEP;
namespace MoleMole { class UICampIdleChoiceWidgetControllerContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }

#define MOLEMOLE_UICAMPIDLECHOICEWIDGETCONTROLLER_ONCLICKACTION_OFFSET UNITYSDK_OFFSET(0x1597A8C0)
#define MOLEMOLE_UICAMPIDLECHOICEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1597A990)
#define MOLEMOLE_UICAMPIDLECHOICEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1597AA20)
#define MOLEMOLE_UICAMPIDLECHOICEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1597A450)
#define MOLEMOLE_UICAMPIDLECHOICEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1597A620)
#define MOLEMOLE_UICAMPIDLECHOICEWIDGETCONTROLLER_REFRESHVIEWBYCONTEXT_OFFSET UNITYSDK_OFFSET(0x1597A750)
#define MOLEMOLE_UICAMPIDLECHOICEWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1597A7D0)
#define MOLEMOLE_UICAMPIDLECHOICEWIDGETCONTROLLER_SETCHECKSTATE_OFFSET UNITYSDK_OFFSET(0x1597A850)
#define MOLEMOLE_UICAMPIDLECHOICEWIDGETCONTROLLER_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1597A5B0)
#define MOLEMOLE_UICAMPIDLECHOICEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1597AAA0)
#define MOLEMOLE_UICAMPIDLECHOICEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1597AB00)
#define MOLEMOLE_UICAMPIDLECHOICEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1597AB50)
#define MOLEMOLE_UICAMPIDLECHOICEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1597AB90)
#define MOLEMOLE_UICAMPIDLECHOICEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1597ABD0)

namespace MoleMole
{
	inline static constexpr unsigned int UICampIdleChoiceWidgetController_TypeDefinitionIndex = 85820;

	class UICampIdleChoiceWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::IHBBMLIPIEP* _view; // 0x2C8
		::System::Boolean IHJONIDMACP; // 0x2D0
		::System::Boolean AOKHKGFJMFK; // 0x2D1
		::System::Byte _padding0[0x6];
		::MoleMole::UICampIdleChoiceWidgetControllerContext* MIPDAENBCII; // 0x2D8
		::System::Action* BOAFLFOPMMB; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLECHOICEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLECHOICEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void SetInteractable(::System::Boolean canInteract)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLECHOICEWIDGETCONTROLLER_SETINTERACTABLE_OFFSET))(this, canInteract);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLECHOICEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void RefreshViewByContext(::MoleMole::UICampIdleChoiceWidgetControllerContext* ctx)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UICampIdleChoiceWidgetControllerContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLECHOICEWIDGETCONTROLLER_REFRESHVIEWBYCONTEXT_OFFSET))(this, ctx);
		}

		::System::Void SetCheckState(::System::Boolean state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLECHOICEWIDGETCONTROLLER_SETCHECKSTATE_OFFSET))(this, state);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLECHOICEWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void OnClickAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLECHOICEWIDGETCONTROLLER_ONCLICKACTION_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLECHOICEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLECHOICEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLECHOICEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLECHOICEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLECHOICEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLECHOICEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
