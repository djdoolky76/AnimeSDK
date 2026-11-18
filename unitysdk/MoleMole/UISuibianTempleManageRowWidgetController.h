#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/ODGJPBGHLAJ_GPIEHLDKMDG.h"

class HKEGDHFODPB;
class JHACLFNMIKO;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_BINDVIEWCALLBACK_OFFSET UNITYSDK_OFFSET(0x185B1990)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_CEEKLMLFMPF_OFFSET UNITYSDK_OFFSET(0x185B1A10)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_CNJCKOJOAFK_OFFSET UNITYSDK_OFFSET(0x185B2950)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_DIKDCDEDFMG_OFFSET UNITYSDK_OFFSET(0x185B1BF0)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_DIPCMDAEPCJ_OFFSET UNITYSDK_OFFSET(0x185B2A10)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_FFEMECENMML_OFFSET UNITYSDK_OFFSET(0x185B2770)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_HIDETIP_OFFSET UNITYSDK_OFFSET(0x185B2210)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_MJMMHJMMPFC_OFFSET UNITYSDK_OFFSET(0x185B2700)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x185B1680)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x185B1710)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x185B1470)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x185B1610)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_SETICON_OFFSET UNITYSDK_OFFSET(0x185B1F10)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_SETPROGRESS_OFFSET UNITYSDK_OFFSET(0x185B1E40)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_SETTITLE_OFFSET UNITYSDK_OFFSET(0x185B1F80)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_SHOWTIP_OFFSET UNITYSDK_OFFSET(0x185B2140)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_SHOWTRACK_1_OFFSET UNITYSDK_OFFSET(0x185B2080)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_SHOWTRACK_OFFSET UNITYSDK_OFFSET(0x185B2010)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x185B2290)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x185B24C0)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x185B2550)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x185B25E0)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x185B2670)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleManageRowWidgetController_TypeDefinitionIndex = 80352;

	class UISuibianTempleManageRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::HKEGDHFODPB* _view; // 0x2C8
		::Share::ENotificationBadgeType DLINOADFMCK; // 0x2D0
		::System::Boolean JBJFINAFFKO; // 0x2D4
		::System::Byte _padding0[0x3];
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::Share::ENotificationBadgeType, ::System::String*>>* BEBEJBPEADB; // 0x2D8
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::Share::ENotificationBadgeType, ::System::String*>>* ILIGAGMFEOM; // 0x2E0
		::System::Int32 MEPPPBCICGO; // 0x2E8
		::System::Byte _padding1[0x4];
		::JHACLFNMIKO* KFJCKAANAJJ; // 0x2F0
		::UnityEngine::Events::UnityAction* EJGDHCIBCJH; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void BindViewCallback(::System::Int32 lockid, ::UnityEngine::Events::UnityAction* callback, ::Share::ENotificationBadgeType badgeType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Events::UnityAction*, ::Share::ENotificationBadgeType))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_BINDVIEWCALLBACK_OFFSET))(this, lockid, callback, badgeType);
		}

		::System::Void SetProgress(::System::Int32 currentCount, ::System::Int32 totalCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_SETPROGRESS_OFFSET))(this, currentCount, totalCount);
		}

		::System::Void SetIcon(::System::String* icon)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_SETICON_OFFSET))(this, icon);
		}

		::System::Void SetTitle(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_SETTITLE_OFFSET))(this, key);
		}

		::System::Void ShowTrack(::System::Boolean track)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_SHOWTRACK_OFFSET))(this, track);
		}

		::System::Void ShowTrack_1(::ODGJPBGHLAJ_GPIEHLDKMDG track)
		{
			return ((::System::Void(*)(::PVOID, ::ODGJPBGHLAJ_GPIEHLDKMDG))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_SHOWTRACK_1_OFFSET))(this, track);
		}

		::System::Void ShowTip(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_SHOWTIP_OFFSET))(this, message);
		}

		::System::Void HideTip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_HIDETIP_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void CEEKLMLFMPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_CEEKLMLFMPF_OFFSET))(this);
		}

		::System::Void MJMMHJMMPFC(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_MJMMHJMMPFC_OFFSET))(this, KOIBHLHLMFC);
		}

		::System::Void FFEMECENMML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_FFEMECENMML_OFFSET))(this);
		}

		::System::Void CNJCKOJOAFK(::System::Int32 EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_CNJCKOJOAFK_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void DIPCMDAEPCJ(::System::Collections::Generic::List_1<::System::ValueTuple_2<::Share::ENotificationBadgeType, ::System::String*>>* DJLOKMMLFJC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::Share::ENotificationBadgeType, ::System::String*>>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_DIPCMDAEPCJ_OFFSET))(this, DJLOKMMLFJC);
		}

		::System::Void DIKDCDEDFMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_DIKDCDEDFMG_OFFSET))(this);
		}
	};
}
