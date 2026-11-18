#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GEIMDJMJAPJ.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class ABBBHLANIII;
class KNHFMNFLBAP;
class MBNIOKDDFEP;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIWidgetController; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x18EB2740)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_NKGIAPBADLO_OFFSET UNITYSDK_OFFSET(0x18EB4B10)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONCLICKJUMPLEVELREWARDPAGE_OFFSET UNITYSDK_OFFSET(0x18EB4400)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONCLICKOPENEXPSTRONGERDIALOG_OFFSET UNITYSDK_OFFSET(0x18EB4740)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONCLICKOPENFILMSTRONGERDIALOG_OFFSET UNITYSDK_OFFSET(0x18EB4560)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONCLICKSWITCHROLE_OFFSET UNITYSDK_OFFSET(0x18EB3F40)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONCLICKSWTICHMISSION_OFFSET UNITYSDK_OFFSET(0x18EB4130)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18EB2750)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x18EB3410)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONLNIIBMHAD_OFFSET UNITYSDK_OFFSET(0x18EB32D0)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONNEWBIEGUIDEWELFARE_OFFSET UNITYSDK_OFFSET(0x18EB3D90)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONQUESTREWARDGET_OFFSET UNITYSDK_OFFSET(0x18EB3ED0)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18EB33C0)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18EB3470)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18EB27E0)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18EB2ED0)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_OPENINITSELECTITEM_OFFSET UNITYSDK_OFFSET(0x18EB3110)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_REFRESHNOWSHOWWIDGET_OFFSET UNITYSDK_OFFSET(0x18EB3E60)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_SETCONSOLEBTNSTATE_OFFSET UNITYSDK_OFFSET(0x18EB4320)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_SWITCHSHOWMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x18EB34E0)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_SWITCHSHOWROLECHOOSE_OFFSET UNITYSDK_OFFSET(0x18EB3950)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18EB4920)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18EB4930)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x18EB49C0)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18EB4A50)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18EB4A60)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18EB4A70)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18EB4A80)

namespace MoleMole
{
	inline static constexpr unsigned int UINewbieGuidePageController_TypeDefinitionIndex = 46596;

	class UINewbieGuidePageController : public ::MoleMole::UIWindowController
	{
	public:
		::ABBBHLANIII* _view; // 0x320
		::System::Collections::Generic::List_1<::KNHFMNFLBAP*>* LFBNPHIJDFH; // 0x328
		::MoleMole::UIWidgetController* nowShowWidget; // 0x330
		::System::Collections::Generic::Dictionary_2<::GEIMDJMJAPJ, ::MBNIOKDDFEP*>* widgetDict; // 0x338
		::GEIMDJMJAPJ nowShowType; // 0x340
		::System::Int32 HOCAIEBCGMC; // 0x344

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OpenInitSelectItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_OPENINITSELECTITEM_OFFSET))(this);
		}

		::System::Void OnNewbieGuideWelfare(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONNEWBIEGUIDEWELFARE_OFFSET))(this, args);
		}

		::System::Void OnQuestRewardGet(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONQUESTREWARDGET_OFFSET))(this, args);
		}

		::System::Void RefreshNowShowWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_REFRESHNOWSHOWWIDGET_OFFSET))(this);
		}

		::System::Void OnClickSwitchRole()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONCLICKSWITCHROLE_OFFSET))(this);
		}

		::System::Void OnClickSwtichMission()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONCLICKSWTICHMISSION_OFFSET))(this);
		}

		::System::Void SwitchShowRoleChoose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_SWITCHSHOWROLECHOOSE_OFFSET))(this);
		}

		::System::Void SwitchShowMissionList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_SWITCHSHOWMISSIONLIST_OFFSET))(this);
		}

		::System::Void OnClickJumpLevelRewardPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONCLICKJUMPLEVELREWARDPAGE_OFFSET))(this);
		}

		::System::Void OnClickOpenFilmStrongerDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONCLICKOPENFILMSTRONGERDIALOG_OFFSET))(this);
		}

		::System::Void OnClickOpenExpStrongerDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONCLICKOPENEXPSTRONGERDIALOG_OFFSET))(this);
		}

		::System::Void SetConsoleBtnState(::System::Boolean consolAState, ::System::Boolean closeState, ::System::Boolean cancelState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_SETCONSOLEBTNSTATE_OFFSET))(this, consolAState, closeState, cancelState);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void NKGIAPBADLO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_NKGIAPBADLO_OFFSET))(this);
		}

		::System::Void ONLNIIBMHAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONLNIIBMHAD_OFFSET))(this);
		}
	};
}
