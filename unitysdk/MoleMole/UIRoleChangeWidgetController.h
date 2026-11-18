#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/MoleMole/InputActionEvent.h"

class JLNABNLCFCD;
class KJIEDDLNJFC;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIRoleInfoPageContext; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_ABKDGGHFLPJ_OFFSET UNITYSDK_OFFSET(0x155E4210)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_CLPNEPAFCNK_OFFSET UNITYSDK_OFFSET(0x155E3B10)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_FNNBAHCFJIC_OFFSET UNITYSDK_OFFSET(0x155E48C0)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_GET_SHOULDHANDLEINPUT_OFFSET UNITYSDK_OFFSET(0x155E2040)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x155E2AC0)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_KGDALKFIJJC_OFFSET UNITYSDK_OFFSET(0x155E51C0)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_KJBAOBMJFFH_1_OFFSET UNITYSDK_OFFSET(0x155E45F0)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_KJBAOBMJFFH_OFFSET UNITYSDK_OFFSET(0x155E4910)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_LJFNMLMBNIL_OFFSET UNITYSDK_OFFSET(0x155E4BC0)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_NBJAGPNIKID_OFFSET UNITYSDK_OFFSET(0x155E4A90)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_NHBJIJHOKLA_OFFSET UNITYSDK_OFFSET(0x155E5130)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x155E3360)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x155E3240)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x155E2470)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x155E2960)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x155E3540)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x155E2050)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x155E28E0)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_PEBPAGBMOHA_OFFSET UNITYSDK_OFFSET(0x155E47F0)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_PHMHNEKNIFJ_OFFSET UNITYSDK_OFFSET(0x155E4320)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_REFRESHDATA_OFFSET UNITYSDK_OFFSET(0x155E34E0)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_SETCHANGEACTION_OFFSET UNITYSDK_OFFSET(0x155E33F0)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_SETCHANGEBTNSTATE_OFFSET UNITYSDK_OFFSET(0x155E23E0)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_SETFORBIDSELECTLOCKAVATAR_OFFSET UNITYSDK_OFFSET(0x155E2380)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_SETLEFTACTION_OFFSET UNITYSDK_OFFSET(0x155E3440)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_SETRIGHTACTION_OFFSET UNITYSDK_OFFSET(0x155E3490)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x155E3690)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x155E3770)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x155E3800)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x155E3890)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x155E38C0)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x155E3960)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x155E39F0)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x155E3A80)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleChangeWidgetController_TypeDefinitionIndex = 83607;

	class UIRoleChangeWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::JLNABNLCFCD* _view; // 0x2C8
		::System::Collections::Generic::List_1<::KJIEDDLNJFC*>* JADNDECCPNC; // 0x2D0
		::System::Action_1<::KJIEDDLNJFC*>* MJGNDCHNKOB; // 0x2D8
		::System::Action* LIHPCMHCCDH; // 0x2E0
		::System::Action* NNDLFPEEFFK; // 0x2E8
		::System::Single KHOBKGGDHMC; // 0x2F0
		::System::Int32 KFKEJCCOLEN; // 0x2F4
		::System::Boolean NAGKDJPIMCM; // 0x2F8
		::System::Byte _padding0[0x3];
		::System::Int32 FAMDODHKIJB; // 0x2FC
		::System::Boolean DPAFEAJJJDA; // 0x300
		::System::Byte _padding1[0x3];
		::System::Int32 CHMAMCNNKHD; // 0x304
		::Foundation::Coroutine::CoroutineHandle CFJOIGCAFON; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_ShouldHandleInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_GET_SHOULDHANDLEINPUT_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void SetForbidSelectLockAvatar(::System::Boolean isForbid, ::System::Int32 tipId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_SETFORBIDSELECTLOCKAVATAR_OFFSET))(this, isForbid, tipId);
		}

		::System::Void SetChangeBtnState(::System::Boolean canClick)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_SETCHANGEBTNSTATE_OFFSET))(this, canClick);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void InitView(::MoleMole::UIRoleInfoPageContext* roleInfoContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIRoleInfoPageContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_INITVIEW_OFFSET))(this, roleInfoContext);
		}

		::System::Void SetChangeAction(::System::Action_1<::KJIEDDLNJFC*>* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::KJIEDDLNJFC*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_SETCHANGEACTION_OFFSET))(this, action);
		}

		::System::Void SetLeftAction(::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_SETLEFTACTION_OFFSET))(this, action);
		}

		::System::Void SetRightAction(::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_SETRIGHTACTION_OFFSET))(this, action);
		}

		::System::Void RefreshData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_REFRESHDATA_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void CLPNEPAFCNK(::System::Single PMNLNNGEIFM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_CLPNEPAFCNK_OFFSET))(this, PMNLNNGEIFM);
		}

		::System::Void PHMHNEKNIFJ(::System::Int32 FOLKIBNJNHM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_PHMHNEKNIFJ_OFFSET))(this, FOLKIBNJNHM);
		}

		::System::Void ABKDGGHFLPJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_ABKDGGHFLPJ_OFFSET))(this);
		}

		::System::Void PEBPAGBMOHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_PEBPAGBMOHA_OFFSET))(this);
		}

		::System::Void FNNBAHCFJIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_FNNBAHCFJIC_OFFSET))(this);
		}

		::System::Boolean KJBAOBMJFFH(::System::Int32 MNDIBLLFAJI)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_KJBAOBMJFFH_OFFSET))(this, MNDIBLLFAJI);
		}

		::MoleMole::ScrollViewItemWidgetController* NBJAGPNIKID(::System::Func_1<::MoleMole::UIControlReference*>* MNDIBLLFAJI)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_NBJAGPNIKID_OFFSET))(this, MNDIBLLFAJI);
		}

		::System::Void LJFNMLMBNIL(::System::Int32 EIFONLCJOPG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_LJFNMLMBNIL_OFFSET))(this, EIFONLCJOPG);
		}

		::System::Void NHBJIJHOKLA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_NHBJIJHOKLA_OFFSET))(this);
		}

		::System::Void KGDALKFIJJC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_KGDALKFIJJC_OFFSET))(this);
		}

		::System::Boolean KJBAOBMJFFH_1(::System::Int32 ABHBKFJKINO, ::System::Boolean JHAPKFPBBKA)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_KJBAOBMJFFH_1_OFFSET))(this, ABHBKFJKINO, JHAPKFPBBKA);
		}
	};
}
