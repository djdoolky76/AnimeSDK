#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AGIIBOCADLI.h"
#include "unitysdk/LFOIPODBNCM.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class PNIEALAEKAL;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIPostGirlItemWidgetController; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_BECKENPHCIO_OFFSET UNITYSDK_OFFSET(0x15D315B0)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_CCDHFIKFOAJ_OFFSET UNITYSDK_OFFSET(0x15D31320)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_CLEARPOSTGIRLIDS_OFFSET UNITYSDK_OFFSET(0x15D302D0)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_DKDAGCNEBCD_OFFSET UNITYSDK_OFFSET(0x15D30BF0)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_DNELCJLJMME_OFFSET UNITYSDK_OFFSET(0x15D30E70)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_GDEOEEOHEPL_OFFSET UNITYSDK_OFFSET(0x15D2FFD0)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_HODIGFKHLGG_OFFSET UNITYSDK_OFFSET(0x15D2FCE0)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_JNNKACOJFCH_OFFSET UNITYSDK_OFFSET(0x15D312A0)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_KLGHNGBHJNB_OFFSET UNITYSDK_OFFSET(0x15D31070)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_KOIDHIAEOAK_OFFSET UNITYSDK_OFFSET(0x15D31530)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_LGFINPFLIOK_OFFSET UNITYSDK_OFFSET(0x15D30610)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15D2FB10)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x15D2FC20)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_ONSELECTPOSTGIRLFROMTYPE_OFFSET UNITYSDK_OFFSET(0x15D30320)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_ONSETSELECTTYPE_OFFSET UNITYSDK_OFFSET(0x15D2FF70)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15D2FBA0)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15D2F7C0)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15D2FAA0)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_REFRESHDATA_OFFSET UNITYSDK_OFFSET(0x15D2FF10)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x15D2FDC0)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_SETONCLICK_OFFSET UNITYSDK_OFFSET(0x15D2FD70)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_TRIGGERCURRENTCLICK_OFFSET UNITYSDK_OFFSET(0x15D305C0)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_TRYREADNEW_OFFSET UNITYSDK_OFFSET(0x15D30490)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15D308B0)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15D30920)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x15D309B0)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15D30A40)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15D30AD0)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15D30B60)

namespace MoleMole
{
	inline static constexpr unsigned int UIPostGirlWidgetController_TypeDefinitionIndex = 85102;

	class UIPostGirlWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::PNIEALAEKAL* _view; // 0x2C8
		::System::Action_2<::System::Int32, ::System::Boolean>* FBEBEHNGDPG; // 0x2D0
		::System::Collections::Generic::List_1<::System::Int32>* DGHKCAAPNKO; // 0x2D8
		::System::Int32 CJGDNDCNKPJ; // 0x2E0
		::AGIIBOCADLI GKNCMJFHEFD; // 0x2E4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void SetOnClick(::System::Action_2<::System::Int32, ::System::Boolean>* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_SETONCLICK_OFFSET))(this, onClick);
		}

		::System::Void RefreshView(::System::Collections::Generic::List_1<::System::Int32>* postGirlIDs, ::System::Int32 overrideSelectIdx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, postGirlIDs, overrideSelectIdx);
		}

		::System::Void RefreshData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_REFRESHDATA_OFFSET))(this);
		}

		::System::Void OnSetSelectType(::AGIIBOCADLI selectType)
		{
			return ((::System::Void(*)(::PVOID, ::AGIIBOCADLI))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_ONSETSELECTTYPE_OFFSET))(this, selectType);
		}

		::System::Void ClearPostGirlIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_CLEARPOSTGIRLIDS_OFFSET))(this);
		}

		::System::Void OnSelectPostGirlFromType(::LFOIPODBNCM fromType, ::System::Int32 overrideSelectID)
		{
			return ((::System::Void(*)(::PVOID, ::LFOIPODBNCM, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_ONSELECTPOSTGIRLFROMTYPE_OFFSET))(this, fromType, overrideSelectID);
		}

		::System::Void TryReadNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_TRYREADNEW_OFFSET))(this);
		}

		::System::Void TriggerCurrentClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_TRIGGERCURRENTCLICK_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void HODIGFKHLGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_HODIGFKHLGG_OFFSET))(this);
		}

		::System::Void LGFINPFLIOK(::System::Int32 ABHBKFJKINO, ::System::Boolean NEJOPPJLIOH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_LGFINPFLIOK_OFFSET))(this, ABHBKFJKINO, NEJOPPJLIOH);
		}

		::System::Void KLGHNGBHJNB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_KLGHNGBHJNB_OFFSET))(this);
		}

		::MoleMole::UIPostGirlItemWidgetController* JNNKACOJFCH(::System::Int32 MKKDGLGFANH)
		{
			return ((::MoleMole::UIPostGirlItemWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_JNNKACOJFCH_OFFSET))(this, MKKDGLGFANH);
		}

		::System::Void CCDHFIKFOAJ(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_CCDHFIKFOAJ_OFFSET))(this, ABHBKFJKINO);
		}

		::MoleMole::ScrollViewItemWidgetController* KOIDHIAEOAK(::System::Func_1<::MoleMole::UIControlReference*>* IHFDFJICHLA)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_KOIDHIAEOAK_OFFSET))(this, IHFDFJICHLA);
		}

		::System::Void BECKENPHCIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_BECKENPHCIO_OFFSET))(this);
		}

		::MoleMole::UIPostGirlItemWidgetController* DNELCJLJMME(::System::Int32 EOGLMAEPALE)
		{
			return ((::MoleMole::UIPostGirlItemWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_DNELCJLJMME_OFFSET))(this, EOGLMAEPALE);
		}

		::System::Void DKDAGCNEBCD(::System::Int32 EOGLMAEPALE)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_DKDAGCNEBCD_OFFSET))(this, EOGLMAEPALE);
		}

		::System::Void GDEOEEOHEPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_GDEOEEOHEPL_OFFSET))(this);
		}
	};
}
