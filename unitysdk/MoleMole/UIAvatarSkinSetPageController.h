#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/LIBOIKJGAIH.h"
#include "unitysdk/MoleMole/InputActionEvent.h"

class GKEPODNIBJB;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIAVATARSKINSETPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x17EAD760)
#define MOLEMOLE_UIAVATARSKINSETPAGECONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x17EADF70)
#define MOLEMOLE_UIAVATARSKINSETPAGECONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x17EADA40)
#define MOLEMOLE_UIAVATARSKINSETPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17EAD770)
#define MOLEMOLE_UIAVATARSKINSETPAGECONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x17EADB60)
#define MOLEMOLE_UIAVATARSKINSETPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x17EADCF0)
#define MOLEMOLE_UIAVATARSKINSETPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x17EADE90)
#define MOLEMOLE_UIAVATARSKINSETPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17EADAB0)
#define MOLEMOLE_UIAVATARSKINSETPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17EADC50)
#define MOLEMOLE_UIAVATARSKINSETPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17EAD810)
#define MOLEMOLE_UIAVATARSKINSETPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17EAE040)
#define MOLEMOLE_UIAVATARSKINSETPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17EAE050)
#define MOLEMOLE_UIAVATARSKINSETPAGECONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x17EAE0F0)
#define MOLEMOLE_UIAVATARSKINSETPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x17EAE180)
#define MOLEMOLE_UIAVATARSKINSETPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x17EAE1B0)
#define MOLEMOLE_UIAVATARSKINSETPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17EAE240)
#define MOLEMOLE_UIAVATARSKINSETPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17EAE250)
#define MOLEMOLE_UIAVATARSKINSETPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17EAE260)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarSkinSetPageController_TypeDefinitionIndex = 48275;

	class UIAvatarSkinSetPageController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSKINSETPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSKINSETPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSKINSETPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSKINSETPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSKINSETPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSKINSETPAGECONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSKINSETPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSKINSETPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSKINSETPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSKINSETPAGECONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSKINSETPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSKINSETPAGECONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSKINSETPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSKINSETPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSKINSETPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSKINSETPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSKINSETPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::GKEPODNIBJB* OGMPOGIHBIK()
		{
			return ((::GKEPODNIBJB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSKINSETPAGECONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
