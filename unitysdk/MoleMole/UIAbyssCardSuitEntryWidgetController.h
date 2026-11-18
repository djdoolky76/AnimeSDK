#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class BPNGLLLIMDC;
class MEAJMOFMAAK;
class NGAGMMDJPPK;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHollowCardItemBtnWidgetController; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_GET_BTNENTRYOBJ_OFFSET UNITYSDK_OFFSET(0x19D034E0)
#define MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_GET_MODEL_OFFSET UNITYSDK_OFFSET(0x19D03BC0)
#define MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_ONCLICKENTRY_OFFSET UNITYSDK_OFFSET(0x19D03CD0)
#define MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19D041B0)
#define MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19D04240)
#define MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19D03510)
#define MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19D04130)
#define MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_REFRESHCARDS_OFFSET UNITYSDK_OFFSET(0x19D036A0)
#define MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_TELEPORTTONESTLEVEL_OFFSET UNITYSDK_OFFSET(0x19D03F10)
#define MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19D042C0)
#define MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19D04320)
#define MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19D043B0)
#define MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19D04440)
#define MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19D044D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssCardSuitEntryWidgetController_TypeDefinitionIndex = 58759;

	class UIAbyssCardSuitEntryWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::NGAGMMDJPPK* _view; // 0x2C8
		::System::Boolean JDMAKGNFMPM; // 0x2D0
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::List_1<::MoleMole::UIHollowCardItemBtnWidgetController*>* OIBLMPPGNLB; // 0x2D8
		::MEAJMOFMAAK* DNOFFCEAKEG; // 0x2E0
		::BPNGLLLIMDC* FOPNJFNENKM; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_BtnEntryObj()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_GET_BTNENTRYOBJ_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void RefreshCards(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_REFRESHCARDS_OFFSET))(this, args);
		}

		::System::Void OnClickEntry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_ONCLICKENTRY_OFFSET))(this);
		}

		::System::Void TelePortToNestLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_TELEPORTTONESTLEVEL_OFFSET))(this);
		}

		::BPNGLLLIMDC* get_Model()
		{
			return ((::BPNGLLLIMDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_GET_MODEL_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
