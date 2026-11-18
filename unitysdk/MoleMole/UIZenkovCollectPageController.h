#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/LIBOIKJGAIH.h"
#include "unitysdk/MoleMole/InputActionEvent.h"

class KPMMODFFDLJ;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIZenkovCollectProPointWidgetController; }
namespace MoleMole { class UIZenkovCollectProPointWidgetController_Context; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER_AMNDFAEGLOB_OFFSET UNITYSDK_OFFSET(0x18C12670)
#define MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER_FNHIAIOIEEG_OFFSET UNITYSDK_OFFSET(0x18C13200)
#define MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x18C115B0)
#define MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER_MMHLKKDGFAJ_OFFSET UNITYSDK_OFFSET(0x18C135D0)
#define MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER_OBCEOJFMEFM_OFFSET UNITYSDK_OFFSET(0x18C11AD0)
#define MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x18C11A60)
#define MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18C115C0)
#define MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x18C12A20)
#define MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x18C12C90)
#define MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x18C12430)
#define MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18C127F0)
#define MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18C11660)
#define MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18C12E50)
#define MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18C12F40)
#define MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x18C12FE0)
#define MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x18C13010)
#define MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x18C130A0)
#define MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18C13160)
#define MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18C13170)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovCollectPageController_TypeDefinitionIndex = 77492;

	class UIZenkovCollectPageController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::UIZenkovCollectProPointWidgetController*>* FJCDBIJOIFG; // 0x320
		::System::Collections::Generic::List_1<::MoleMole::UIZenkovCollectProPointWidgetController*>* BLELMMJHJOC; // 0x328

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::MoleMole::UIZenkovCollectProPointWidgetController* FNHIAIOIEEG(::MoleMole::UIZenkovCollectProPointWidgetController_Context* AAOCANGHBDG)
		{
			return ((::MoleMole::UIZenkovCollectProPointWidgetController*(*)(::PVOID, ::MoleMole::UIZenkovCollectProPointWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER_FNHIAIOIEEG_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Void AMNDFAEGLOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER_AMNDFAEGLOB_OFFSET))(this);
		}

		::System::Void OBCEOJFMEFM(::System::Int32 ALJJBJEHLDN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER_OBCEOJFMEFM_OFFSET))(this, ALJJBJEHLDN);
		}

		::System::Void MMHLKKDGFAJ(::UnityEngine::RectTransform* GKBJOPJKCLB, ::System::Single PMGFIHJAJHL)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER_MMHLKKDGFAJ_OFFSET))(this, GKBJOPJKCLB, PMGFIHJAJHL);
		}

		::KPMMODFFDLJ* OGMPOGIHBIK()
		{
			return ((::KPMMODFFDLJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
