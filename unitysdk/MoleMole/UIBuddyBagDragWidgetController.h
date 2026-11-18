#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGHKECHINNA.h"
#include "unitysdk/MoleMole/UIBuddyBagDragWidgetController_DragState.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Vector2.h"

class ECBJHDFMMEA;
class HMNKEIMMFOP;
namespace MoleMole { class MonoDragUIObject; }
namespace MoleMole { class UIBuddyDIYComponentWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System { class EventArgs; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_BKFJABONGHK_OFFSET UNITYSDK_OFFSET(0x19849C30)
#define MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_CLPNEPAFCNK_OFFSET UNITYSDK_OFFSET(0x1984AC60)
#define MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_DLLPCHEDCHD_OFFSET UNITYSDK_OFFSET(0x1984A0F0)
#define MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_ENABLEDRAG_OFFSET UNITYSDK_OFFSET(0x19849440)
#define MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_HLGNBJNGBFH_OFFSET UNITYSDK_OFFSET(0x1984A0A0)
#define MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_IDGKJLDAAFN_OFFSET UNITYSDK_OFFSET(0x1984A3C0)
#define MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_LBMLLPLLLMB_OFFSET UNITYSDK_OFFSET(0x19849740)
#define MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_LDDPGFOHONH_OFFSET UNITYSDK_OFFSET(0x1984AA20)
#define MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_LDICHKBFBAM_OFFSET UNITYSDK_OFFSET(0x1984A920)
#define MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_LMDBJPHECEH_OFFSET UNITYSDK_OFFSET(0x19849BE0)
#define MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_NDGLLAFCGID_OFFSET UNITYSDK_OFFSET(0x19848D20)
#define MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19849130)
#define MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_ONDRAGSTART_OFFSET UNITYSDK_OFFSET(0x19849800)
#define MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x198491C0)
#define MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19848910)
#define MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19848FF0)
#define MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_PCKFDHFHOOC_OFFSET UNITYSDK_OFFSET(0x1984A9A0)
#define MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_PLKDKMGPIGJ_OFFSET UNITYSDK_OFFSET(0x19849CE0)
#define MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19849940)
#define MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x198499A0)
#define MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19849A30)
#define MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19849AC0)
#define MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19849B50)

namespace MoleMole
{
	inline static constexpr unsigned int UIBuddyBagDragWidgetController_TypeDefinitionIndex = 56963;

	class UIBuddyBagDragWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::HMNKEIMMFOP* _view; // 0x2C8
		::MoleMole::UIBuddyBagDragWidgetController_DragState AIAHDFPCGOG; // 0x2D0
		::System::Byte _padding0[0x4];
		::UnityEngine::Transform* DMKBHBEMDPB; // 0x2D8
		::UnityEngine::Transform* HBPAIJKHBNF; // 0x2E0
		::MoleMole::UIItemIconBtnWidgetController* BEMLBCKEAHH; // 0x2E8
		::MoleMole::MonoDragUIObject* FAMNIGKAGEK; // 0x2F0
		::System::Boolean HOBDDJJEAIE; // 0x2F8
		::System::Byte _padding1[0x7];
		::MoleMole::UIBuddyDIYComponentWidgetController* NNJEGCBIMAL; // 0x300
		::ECBJHDFMMEA* OOABOFFMOPB; // 0x308
		::GGHKECHINNA KGPLHELKAEM; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void EnableDrag(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_ENABLEDRAG_OFFSET))(this, enable);
		}

		::System::Void OnDragStart(::MoleMole::MonoDragUIObject* callbackObj, ::UnityEngine::EventSystems::PointerEventData* data)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoDragUIObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_ONDRAGSTART_OFFSET))(this, callbackObj, data);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void LMDBJPHECEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_LMDBJPHECEH_OFFSET))(this);
		}

		::System::Boolean BKFJABONGHK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_BKFJABONGHK_OFFSET))(this);
		}

		::System::Void PLKDKMGPIGJ(::MoleMole::MonoDragUIObject* IIIKEIHKANP, ::UnityEngine::EventSystems::PointerEventData* LJBPECKCCEA)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoDragUIObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_PLKDKMGPIGJ_OFFSET))(this, IIIKEIHKANP, LJBPECKCCEA);
		}

		::System::Void HLGNBJNGBFH(::MoleMole::MonoDragUIObject* IIIKEIHKANP, ::UnityEngine::EventSystems::PointerEventData* LJBPECKCCEA)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoDragUIObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_HLGNBJNGBFH_OFFSET))(this, IIIKEIHKANP, LJBPECKCCEA);
		}

		::System::Void LBMLLPLLLMB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_LBMLLPLLLMB_OFFSET))(this);
		}

		::System::Void DLLPCHEDCHD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_DLLPCHEDCHD_OFFSET))(this);
		}

		::System::Void IDGKJLDAAFN(::System::EventArgs* MNDIBLLFAJI)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_IDGKJLDAAFN_OFFSET))(this, MNDIBLLFAJI);
		}

		::UnityEngine::Vector2 LDICHKBFBAM()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_LDICHKBFBAM_OFFSET))(this);
		}

		::System::Void NDGLLAFCGID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_NDGLLAFCGID_OFFSET))(this);
		}

		::System::Boolean PCKFDHFHOOC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_PCKFDHFHOOC_OFFSET))(this);
		}

		::System::Void LDDPGFOHONH(::UnityEngine::Vector2 MKHLBMMKCJL)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_LDDPGFOHONH_OFFSET))(this, MKHLBMMKCJL);
		}

		::System::Void CLPNEPAFCNK(::System::Single PMNLNNGEIFM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYBAGDRAGWIDGETCONTROLLER_CLPNEPAFCNK_OFFSET))(this, PMNLNNGEIFM);
		}
	};
}
