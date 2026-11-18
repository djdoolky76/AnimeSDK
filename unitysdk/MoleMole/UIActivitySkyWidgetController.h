#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class CJIEIHEDMME;
class OHPDLOMMGEN;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIActivitySkyNormalRewardWidgetController; }
namespace MoleMole { class UIActivitySkySpecialRewardWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER_CPMIDCCGFAL_OFFSET UNITYSDK_OFFSET(0x15935070)
#define MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER_FKEPGLIHJBH_OFFSET UNITYSDK_OFFSET(0x15935260)
#define MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER_GGNNKHEEPAA_OFFSET UNITYSDK_OFFSET(0x15934B90)
#define MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER_NDGCNIANCLJ_OFFSET UNITYSDK_OFFSET(0x15934820)
#define MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x159346A0)
#define MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x15935110)
#define MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15933D50)
#define MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15934730)
#define MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15933AD0)
#define MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15933C90)
#define MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x15933E30)
#define MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15935370)
#define MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x159354C0)
#define MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x15935560)
#define MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x159355B0)
#define MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15935600)
#define MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15935640)
#define MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15935680)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivitySkyWidgetController_TypeDefinitionIndex = 65141;

	class UIActivitySkyWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::OHPDLOMMGEN* _view; // 0x2C8
		::CJIEIHEDMME* FEIHIIEOIPN; // 0x2D0
		::System::Collections::Generic::List_1<::MoleMole::UIActivitySkyNormalRewardWidgetController*>* HGDNGNGIJJG; // 0x2D8
		::MoleMole::UIActivitySkySpecialRewardWidgetController* IIPDLBHBMNO; // 0x2E0
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* IHIIHCMALON; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void GGNNKHEEPAA(::System::Int32 OFNOKLNDIDL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER_GGNNKHEEPAA_OFFSET))(this, OFNOKLNDIDL);
		}

		::System::Void NDGCNIANCLJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER_NDGCNIANCLJ_OFFSET))(this);
		}

		::System::Int32 FKEPGLIHJBH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER_FKEPGLIHJBH_OFFSET))(this);
		}

		::System::String* CPMIDCCGFAL(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER_CPMIDCCGFAL_OFFSET))(this, ABHBKFJKINO);
		}
	};
}
