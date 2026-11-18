#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/LIBOIKJGAIH.h"
#include "unitysdk/MoleMole/InputActionEvent.h"

class MLKIBJKCDMJ;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIPINBALLBALLSELECTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x18ED6B10)
#define MOLEMOLE_UIPINBALLBALLSELECTPAGECONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x18ED6DF0)
#define MOLEMOLE_UIPINBALLBALLSELECTPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18ED6B20)
#define MOLEMOLE_UIPINBALLBALLSELECTPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x18ED6F00)
#define MOLEMOLE_UIPINBALLBALLSELECTPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x18ED6E60)
#define MOLEMOLE_UIPINBALLBALLSELECTPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18ED6BC0)
#define MOLEMOLE_UIPINBALLBALLSELECTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18ED7000)
#define MOLEMOLE_UIPINBALLBALLSELECTPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18ED7010)
#define MOLEMOLE_UIPINBALLBALLSELECTPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x18ED70B0)
#define MOLEMOLE_UIPINBALLBALLSELECTPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x18ED70E0)
#define MOLEMOLE_UIPINBALLBALLSELECTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18ED71A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPinballBallSelectPageController_TypeDefinitionIndex = 67678;

	class UIPinballBallSelectPageController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLBALLSELECTPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLBALLSELECTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLBALLSELECTPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLBALLSELECTPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLBALLSELECTPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLBALLSELECTPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLBALLSELECTPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLBALLSELECTPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLBALLSELECTPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLBALLSELECTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::MLKIBJKCDMJ* OGMPOGIHBIK()
		{
			return ((::MLKIBJKCDMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLBALLSELECTPAGECONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
