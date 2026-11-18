#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class PCCHMANJAGF;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIVirusLevelUpAbilityRowWidgetController; }
namespace MoleMole { class UIVirusLevelUpDetailsRowWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER_DHAILDJHDPC_OFFSET UNITYSDK_OFFSET(0x164D9120)
#define MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER_DJKAJBNCMHN_OFFSET UNITYSDK_OFFSET(0x164D9470)
#define MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x164D83D0)
#define MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER_KFDKADBIPPK_OFFSET UNITYSDK_OFFSET(0x164D8FF0)
#define MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x164D83E0)
#define MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x164D85A0)
#define MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x164D8610)
#define MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x164D9250)
#define MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x164D9340)
#define MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x164D93D0)
#define MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x164D93E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVirusLevelUpPopWindowController_TypeDefinitionIndex = 86024;

	class UIVirusLevelUpPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::PCCHMANJAGF* _view; // 0x320
		::System::Collections::Generic::List_1<::MoleMole::UIVirusLevelUpDetailsRowWidgetController*>* HANGGOEJKIB; // 0x328
		::System::Collections::Generic::List_1<::MoleMole::UIVirusLevelUpAbilityRowWidgetController*>* PLCFCBJHEHA; // 0x330

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::MoleMole::UIVirusLevelUpAbilityRowWidgetController* DHAILDJHDPC(::System::Int32 ABHBKFJKINO)
		{
			return ((::MoleMole::UIVirusLevelUpAbilityRowWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER_DHAILDJHDPC_OFFSET))(this, ABHBKFJKINO);
		}

		::System::Void DJKAJBNCMHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER_DJKAJBNCMHN_OFFSET))(this);
		}

		::MoleMole::UIVirusLevelUpDetailsRowWidgetController* KFDKADBIPPK(::System::Int32 ABHBKFJKINO)
		{
			return ((::MoleMole::UIVirusLevelUpDetailsRowWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER_KFDKADBIPPK_OFFSET))(this, ABHBKFJKINO);
		}
	};
}
