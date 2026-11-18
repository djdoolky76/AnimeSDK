#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/AHANIIJAIJB_PHGPGNBGKIK.h"

class BFPMFNGFOEB;
namespace MoleMole { class UIABStandbyPhaseWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIAUTOBATTLESTATITEMWIDGETCONTROLLER_CHFJOGNFEKM_OFFSET UNITYSDK_OFFSET(0x19BAE6B0)
#define MOLEMOLE_UIAUTOBATTLESTATITEMWIDGETCONTROLLER_GET_SHOWDAMAGE_OFFSET UNITYSDK_OFFSET(0x19BAE2B0)
#define MOLEMOLE_UIAUTOBATTLESTATITEMWIDGETCONTROLLER_OIPEMHPLODB_OFFSET UNITYSDK_OFFSET(0x19BAE2D0)
#define MOLEMOLE_UIAUTOBATTLESTATITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19BADEB0)
#define MOLEMOLE_UIAUTOBATTLESTATITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x19BADFC0)
#define MOLEMOLE_UIAUTOBATTLESTATITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19BADF40)
#define MOLEMOLE_UIAUTOBATTLESTATITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19BADDB0)
#define MOLEMOLE_UIAUTOBATTLESTATITEMWIDGETCONTROLLER_REFRESHSTAT_OFFSET UNITYSDK_OFFSET(0x19BAE070)
#define MOLEMOLE_UIAUTOBATTLESTATITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19BAE450)
#define MOLEMOLE_UIAUTOBATTLESTATITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19BAE460)
#define MOLEMOLE_UIAUTOBATTLESTATITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x19BAE4F0)
#define MOLEMOLE_UIAUTOBATTLESTATITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19BAE590)
#define MOLEMOLE_UIAUTOBATTLESTATITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19BAE620)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattleStatItemWidgetController_TypeDefinitionIndex = 40504;

	class UIAutoBattleStatItemWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::BFPMFNGFOEB* _view; // 0x2F8
		::MoleMole::UIABStandbyPhaseWidgetController* KBJPABNJOOM; // 0x300
		::System::Int32 AGCCLNJNNND; // 0x308
		::System::Int32 CurMaxVal; // 0x30C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLESTATITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLESTATITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLESTATITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLESTATITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLESTATITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Boolean get_ShowDamage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLESTATITEMWIDGETCONTROLLER_GET_SHOWDAMAGE_OFFSET))(this);
		}

		::System::Void RefreshStat(::AHANIIJAIJB_PHGPGNBGKIK desc)
		{
			return ((::System::Void(*)(::PVOID, ::AHANIIJAIJB_PHGPGNBGKIK))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLESTATITEMWIDGETCONTROLLER_REFRESHSTAT_OFFSET))(this, desc);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLESTATITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLESTATITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLESTATITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLESTATITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void OIPEMHPLODB(::System::Int32 HGFPEIKFHMG, ::System::Int32 LPEAPKPEBNO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLESTATITEMWIDGETCONTROLLER_OIPEMHPLODB_OFFSET))(this, HGFPEIKFHMG, LPEAPKPEBNO);
		}

		::System::Void CHFJOGNFEKM(::System::Int32 MJODFDBNJIP, ::System::Int32 DNFNKBNBJHM, ::UnityEngine::RectTransform* PMGFIHJAJHL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLESTATITEMWIDGETCONTROLLER_CHFJOGNFEKM_OFFSET))(this, MJODFDBNJIP, DNFNKBNBJHM, PMGFIHJAJHL);
		}
	};
}
