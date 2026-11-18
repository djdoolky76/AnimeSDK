#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/MoleMole/InputActionEvent.h"

class BABMKAFEADA;
class BIELJDHMEMA;
class NDHLHBHJBHF;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIInterKnotClientInfoDialogContext; }
namespace MoleMole { class UIInterKnotClientTitleInfoRowWidgetController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER_DFFIHAADJPK_OFFSET UNITYSDK_OFFSET(0x19388170)
#define MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER_EALFLAOMEND_OFFSET UNITYSDK_OFFSET(0x193878A0)
#define MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER_FEHCPOPFPDL_OFFSET UNITYSDK_OFFSET(0x19387920)
#define MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x19386CE0)
#define MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER_IFGBFMBONOL_OFFSET UNITYSDK_OFFSET(0x193882A0)
#define MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER_IKAFOOMNKJI_OFFSET UNITYSDK_OFFSET(0x19388130)
#define MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER_KADMCKJGNNF_OFFSET UNITYSDK_OFFSET(0x19387C60)
#define MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19387CF0)
#define MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x19387DF0)
#define MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19387D80)
#define MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19386CF0)
#define MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19386F40)
#define MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19387FB0)
#define MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19387FC0)
#define MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x19388050)
#define MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19388080)
#define MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19388090)
#define MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x193880A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotClientInfoPopWindowController_TypeDefinitionIndex = 49604;

	class UIInterKnotClientInfoPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::BIELJDHMEMA* _view; // 0x320
		::NDHLHBHJBHF* FKJGJKCDAOM; // 0x328
		::MoleMole::UIInterKnotClientInfoDialogContext* AMHHMLALFGI; // 0x330
		::System::Collections::Generic::List_1<::System::Int32>* MEFHDMCLLMM; // 0x338
		::System::Int32 BPIPDHJPJAE; // 0x340
		::System::Byte _padding0[0x4];
		::MoleMole::UIInterKnotClientTitleInfoRowWidgetController* GHACPJAAEAA; // 0x348
		::BABMKAFEADA* EEKDGPOHLIF; // 0x350
		::System::Single PAJAICNLPFK; // 0x358
		::System::Byte _padding1[0x4];
		::UnityEngine::RectTransform* OHMLIPHJMJM; // 0x360
		::UnityEngine::RectTransform* IJIGFKMEDCB; // 0x368

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void IKAFOOMNKJI(::System::String* EMIKCAHJLGB)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER_IKAFOOMNKJI_OFFSET))(this, EMIKCAHJLGB);
		}

		::System::Void FEHCPOPFPDL(::MoleMole::UIInterKnotClientTitleInfoRowWidgetController* JOLDOMEIKEF, ::System::Int32 BLIIBGEDDEI)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIInterKnotClientTitleInfoRowWidgetController*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER_FEHCPOPFPDL_OFFSET))(this, JOLDOMEIKEF, BLIIBGEDDEI);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* EALFLAOMEND()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER_EALFLAOMEND_OFFSET))(this);
		}

		::System::Void KADMCKJGNNF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER_KADMCKJGNNF_OFFSET))(this);
		}

		::System::String* DFFIHAADJPK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER_DFFIHAADJPK_OFFSET))(this);
		}

		::System::Void IFGBFMBONOL(::MoleMole::UIInterKnotClientTitleInfoRowWidgetController* KPCJMOJBDKA)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIInterKnotClientTitleInfoRowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER_IFGBFMBONOL_OFFSET))(this, KPCJMOJBDKA);
		}
	};
}
