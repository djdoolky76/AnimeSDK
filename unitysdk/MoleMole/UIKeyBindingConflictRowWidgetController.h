#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AIOFAMODPOO.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/FBGGKHIKCPP.h"

class DJJNPOBJDOL;
class PPHHLKPBIFE;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIKeyBindingContext; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER_CPHKGIPDNEO_OFFSET UNITYSDK_OFFSET(0x196DFB20)
#define MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER_FLFNKKOGJMG_OFFSET UNITYSDK_OFFSET(0x196DFB30)
#define MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER_IBNJCIJDDPG_OFFSET UNITYSDK_OFFSET(0x196DF470)
#define MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x196DEE10)
#define MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x196DED00)
#define MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x196DED90)
#define MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x196DEB90)
#define MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x196DEBF0)
#define MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER_PDKCHDBODJB_OFFSET UNITYSDK_OFFSET(0x196DF7F0)
#define MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x196DF880)
#define MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x196DF8E0)
#define MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x196DF970)
#define MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x196DFA00)
#define MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x196DFA90)

namespace MoleMole
{
	inline static constexpr unsigned int UIKeyBindingConflictRowWidgetController_TypeDefinitionIndex = 41691;

	class UIKeyBindingConflictRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::DJJNPOBJDOL* _view; // 0x2C8
		::MoleMole::UIKeyBindingContext* DAAAEJDBNFI; // 0x2D0
		::PPHHLKPBIFE* BDNOHJAEACO; // 0x2D8
		::PPHHLKPBIFE* JBOLGFEEDJD; // 0x2E0
		::PPHHLKPBIFE* LDDDPNOMLAE; // 0x2E8
		::PPHHLKPBIFE* CNIGFLMFPIG; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitView(::MoleMole::UIKeyBindingContext* context, ::FBGGKHIKCPP info, ::System::Collections::Generic::List_1<::FBGGKHIKCPP>* allInfos, ::System::Boolean isTextHighlight)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIKeyBindingContext*, ::FBGGKHIKCPP, ::System::Collections::Generic::List_1<::FBGGKHIKCPP>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER_INITVIEW_OFFSET))(this, context, info, allInfos, isTextHighlight);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Int32 IBNJCIJDDPG(::MoleMole::LogicButtonInputType KKKMLLLKPHB, ::AIOFAMODPOO JGGPPJNIAKN, ::System::Collections::Generic::List_1<::FBGGKHIKCPP>* FMOCMOPHJPN)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::LogicButtonInputType, ::AIOFAMODPOO, ::System::Collections::Generic::List_1<::FBGGKHIKCPP>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER_IBNJCIJDDPG_OFFSET))(this, KKKMLLLKPHB, JGGPPJNIAKN, FMOCMOPHJPN);
		}

		::System::Void PDKCHDBODJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER_PDKCHDBODJB_OFFSET))(this);
		}

		::System::Void CPHKGIPDNEO(::System::EventArgs* PIIPCLCCOIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER_CPHKGIPDNEO_OFFSET))(this, PIIPCLCCOIG);
		}

		::System::Void FLFNKKOGJMG(::System::EventArgs* PIIPCLCCOIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER_FLFNKKOGJMG_OFFSET))(this, PIIPCLCCOIG);
		}
	};
}
