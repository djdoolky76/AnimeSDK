#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class BLLJKHBJLEE;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UICOOPNEWTIPSDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1739BEC0)
#define MOLEMOLE_UICOOPNEWTIPSDIALOGPOPWINDOWCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x1739C150)
#define MOLEMOLE_UICOOPNEWTIPSDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1739BED0)
#define MOLEMOLE_UICOOPNEWTIPSDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1739BF90)
#define MOLEMOLE_UICOOPNEWTIPSDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1739C1C0)
#define MOLEMOLE_UICOOPNEWTIPSDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1739C1D0)
#define MOLEMOLE_UICOOPNEWTIPSDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1739C270)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopNewTipsDialogPopWindowController_TypeDefinitionIndex = 70229;

	class UICoopNewTipsDialogPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPNEWTIPSDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPNEWTIPSDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPNEWTIPSDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPNEWTIPSDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPNEWTIPSDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPNEWTIPSDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::BLLJKHBJLEE* OGMPOGIHBIK()
		{
			return ((::BLLJKHBJLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPNEWTIPSDIALOGPOPWINDOWCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
