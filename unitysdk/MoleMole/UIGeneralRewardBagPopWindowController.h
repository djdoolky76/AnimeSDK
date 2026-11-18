#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/OOCOCHFLKKE.h"

class HGAJKHIMKJP;
class KOIDMLPJGML;
class LPPGAAGAIGM;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALREWARDBAGPOPWINDOWCONTROLLER_CLICKTAKE_OFFSET UNITYSDK_OFFSET(0x18F11C20)
#define MOLEMOLE_UIGENERALREWARDBAGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x18F112D0)
#define MOLEMOLE_UIGENERALREWARDBAGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18F11600)
#define MOLEMOLE_UIGENERALREWARDBAGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18F11690)
#define MOLEMOLE_UIGENERALREWARDBAGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18F112E0)
#define MOLEMOLE_UIGENERALREWARDBAGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18F11330)
#define MOLEMOLE_UIGENERALREWARDBAGPOPWINDOWCONTROLLER_SETGROCERYACTIVITYREWARDS_OFFSET UNITYSDK_OFFSET(0x18F11700)
#define MOLEMOLE_UIGENERALREWARDBAGPOPWINDOWCONTROLLER_SETGROYCERYACTIVITYSTATUS_OFFSET UNITYSDK_OFFSET(0x18F118E0)
#define MOLEMOLE_UIGENERALREWARDBAGPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18F11C80)
#define MOLEMOLE_UIGENERALREWARDBAGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18F11C90)
#define MOLEMOLE_UIGENERALREWARDBAGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18F11D20)
#define MOLEMOLE_UIGENERALREWARDBAGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18F11D30)
#define MOLEMOLE_UIGENERALREWARDBAGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18F11D40)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralRewardBagPopWindowController_TypeDefinitionIndex = 81352;

	class UIGeneralRewardBagPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::LPPGAAGAIGM* _view; // 0x320
		::System::Action* NMIIECNEANB; // 0x328
		::System::Collections::Generic::List_1<::KOIDMLPJGML*>* CKBOENHCFLH; // 0x330

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALREWARDBAGPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALREWARDBAGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALREWARDBAGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALREWARDBAGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALREWARDBAGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALREWARDBAGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetGroceryActivityRewards(::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* itemList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HGAJKHIMKJP*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALREWARDBAGPOPWINDOWCONTROLLER_SETGROCERYACTIVITYREWARDS_OFFSET))(this, itemList);
		}

		::System::Void SetGroyceryActivityStatus(::OOCOCHFLKKE stateEnum, ::System::String* showString, ::System::Action* callBack)
		{
			return ((::System::Void(*)(::PVOID, ::OOCOCHFLKKE, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALREWARDBAGPOPWINDOWCONTROLLER_SETGROYCERYACTIVITYSTATUS_OFFSET))(this, stateEnum, showString, callBack);
		}

		::System::Void ClickTake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALREWARDBAGPOPWINDOWCONTROLLER_CLICKTAKE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALREWARDBAGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALREWARDBAGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALREWARDBAGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALREWARDBAGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
