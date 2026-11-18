#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/LIBOIKJGAIH.h"
#include "unitysdk/MoleMole/InputActionEvent.h"

class NPPLKJIMDIE;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIZENKOVCOLLECTMEDALPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1138F6A0)
#define MOLEMOLE_UIZENKOVCOLLECTMEDALPAGECONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x1138F850)
#define MOLEMOLE_UIZENKOVCOLLECTMEDALPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1138F6B0)
#define MOLEMOLE_UIZENKOVCOLLECTMEDALPAGECONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x1138F8C0)
#define MOLEMOLE_UIZENKOVCOLLECTMEDALPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1138F980)
#define MOLEMOLE_UIZENKOVCOLLECTMEDALPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1138F7A0)
#define MOLEMOLE_UIZENKOVCOLLECTMEDALPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1138F750)
#define MOLEMOLE_UIZENKOVCOLLECTMEDALPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1138FBE0)
#define MOLEMOLE_UIZENKOVCOLLECTMEDALPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1138FBF0)
#define MOLEMOLE_UIZENKOVCOLLECTMEDALPAGECONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x1138FC90)
#define MOLEMOLE_UIZENKOVCOLLECTMEDALPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1138FD20)
#define MOLEMOLE_UIZENKOVCOLLECTMEDALPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1138FD50)
#define MOLEMOLE_UIZENKOVCOLLECTMEDALPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1138FD60)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovCollectMedalPageController_TypeDefinitionIndex = 62683;

	class UIZenkovCollectMedalPageController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTMEDALPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTMEDALPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTMEDALPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTMEDALPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTMEDALPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTMEDALPAGECONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTMEDALPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTMEDALPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTMEDALPAGECONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTMEDALPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTMEDALPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTMEDALPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::NPPLKJIMDIE* OGMPOGIHBIK()
		{
			return ((::NPPLKJIMDIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTMEDALPAGECONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
