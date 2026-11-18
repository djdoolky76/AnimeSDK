#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/LIBOIKJGAIH.h"
#include "unitysdk/MoleMole/InputActionEvent.h"

class AEAIBFKCGMJ;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIROARINSTOREREWARDPAGECONTROLLER_GET_TRYOVERRIDETOPPAGEFADEIN_OFFSET UNITYSDK_OFFSET(0x155E1AC0)
#define MOLEMOLE_UIROARINSTOREREWARDPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x155E1AB0)
#define MOLEMOLE_UIROARINSTOREREWARDPAGECONTROLLER_MASKCLOSE_OFFSET UNITYSDK_OFFSET(0x155E1DA0)
#define MOLEMOLE_UIROARINSTOREREWARDPAGECONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x155E1CB0)
#define MOLEMOLE_UIROARINSTOREREWARDPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x155E1AD0)
#define MOLEMOLE_UIROARINSTOREREWARDPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x155E1D20)
#define MOLEMOLE_UIROARINSTOREREWARDPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x155E1B70)
#define MOLEMOLE_UIROARINSTOREREWARDPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x155E1E40)
#define MOLEMOLE_UIROARINSTOREREWARDPAGECONTROLLER___BASE_MASKCLOSE_OFFSET UNITYSDK_OFFSET(0x155E1E50)
#define MOLEMOLE_UIROARINSTOREREWARDPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x155E1EE0)
#define MOLEMOLE_UIROARINSTOREREWARDPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x155E1F80)
#define MOLEMOLE_UIROARINSTOREREWARDPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x155E1FB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoarinStoreRewardPageController_TypeDefinitionIndex = 74820;

	class UIRoarinStoreRewardPageController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTOREREWARDPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTOREREWARDPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Boolean get_TryOverrideTopPageFadeIn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTOREREWARDPAGECONTROLLER_GET_TRYOVERRIDETOPPAGEFADEIN_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTOREREWARDPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTOREREWARDPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTOREREWARDPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void MaskClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTOREREWARDPAGECONTROLLER_MASKCLOSE_OFFSET))(this);
		}

		::System::Void __base_MaskClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTOREREWARDPAGECONTROLLER___BASE_MASKCLOSE_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTOREREWARDPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTOREREWARDPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTOREREWARDPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::AEAIBFKCGMJ* OGMPOGIHBIK()
		{
			return ((::AEAIBFKCGMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTOREREWARDPAGECONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
