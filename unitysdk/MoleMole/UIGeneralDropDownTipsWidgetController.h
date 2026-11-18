#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHHJKACNJLG.h"
#include "unitysdk/MIKOMFIBMBN.h"
#include "unitysdk/MoleMole/UIBaseDynamicTipsWidgetController.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/UnityEngine/Vector2.h"

class GMCPAFDJNLH;
class HLIAOGOFCJP;
class OBENKIMBADN;
namespace MoleMole { class DropDownItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIFadeConfig; }
namespace MoleMole { class UIGeneralDropDownControllerContext; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_DDELKNJFAFA_OFFSET UNITYSDK_OFFSET(0x1893F600)
#define MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_EMPMBBEGIJB_OFFSET UNITYSDK_OFFSET(0x1893E3A0)
#define MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_GETDROPDOWNWIDGET_OFFSET UNITYSDK_OFFSET(0x1893F0F0)
#define MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_GETOVERRIDEFADEOUTANIM_OFFSET UNITYSDK_OFFSET(0x1893F250)
#define MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_GET_ENABLEPOSITIONTICK_OFFSET UNITYSDK_OFFSET(0x1893DF90)
#define MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_GET_ISALLOWINPUTPASS_OFFSET UNITYSDK_OFFSET(0x1893DE60)
#define MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_GET_POSITIONOFFSET_OFFSET UNITYSDK_OFFSET(0x1893DED0)
#define MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1893DFA0)
#define MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1893F030)
#define MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x1893EFA0)
#define MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_ONPLAYFADEINANIMATIONAFTERLOADING_OFFSET UNITYSDK_OFFSET(0x1893F180)
#define MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1893EEF0)
#define MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1893DE70)
#define MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1893E030)
#define MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1893F2F0)
#define MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER___BASE_GETOVERRIDEFADEOUTANIM_OFFSET UNITYSDK_OFFSET(0x1893F360)
#define MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER___BASE_GET_POSITIONOFFSET_OFFSET UNITYSDK_OFFSET(0x1893F350)
#define MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1893F370)
#define MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1893F400)
#define MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x1893F430)
#define MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER___BASE_ONPLAYFADEINANIMATIONAFTERLOADING_OFFSET UNITYSDK_OFFSET(0x1893F4C0)
#define MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1893F4D0)
#define MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1893F560)
#define MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1893F5F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralDropDownTipsWidgetController_TypeDefinitionIndex = 78272;

	class UIGeneralDropDownTipsWidgetController : public ::MoleMole::UIBaseDynamicTipsWidgetController
	{
	public:
		::OBENKIMBADN* _view; // 0x2D8
		::MoleMole::UIGeneralDropDownControllerContext* ENLMDELOAIK; // 0x2E0
		::System::Collections::Generic::List_1<::MoleMole::DropDownItemWidgetController*>* LLKBBKPOPBL; // 0x2E8
		::System::Action* PDALCLKCMOI; // 0x2F0
		::HLIAOGOFCJP* OHNFDBABEHP; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsAllowInputPass()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_GET_ISALLOWINPUTPASS_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_PositionOffset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_GET_POSITIONOFFSET_OFFSET))(this);
		}

		::System::Boolean get_EnablePositionTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_GET_ENABLEPOSITIONTICK_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::MoleMole::DropDownItemWidgetController* GetDropDownWidget(::System::Int32 index)
		{
			return ((::MoleMole::DropDownItemWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_GETDROPDOWNWIDGET_OFFSET))(this, index);
		}

		::System::Void OnPlayFadeInAnimationAfterLoading(::System::String* fadeAnimation, ::System::Boolean isPlayToEnd, ::System::Single animSpeed)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_ONPLAYFADEINANIMATIONAFTERLOADING_OFFSET))(this, fadeAnimation, isPlayToEnd, animSpeed);
		}

		::System::String* GetOverrideFadeOutAnim(::MoleMole::UIFadeConfig* fadeData, ::MIKOMFIBMBN nextPage)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::UIFadeConfig*, ::MIKOMFIBMBN))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_GETOVERRIDEFADEOUTANIM_OFFSET))(this, fadeData, nextPage);
		}

		::UnityEngine::Vector2 __base_get_PositionOffset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER___BASE_GET_POSITIONOFFSET_OFFSET))(this);
		}

		::System::String* __base_GetOverrideFadeOutAnim(::MoleMole::UIFadeConfig* P0, ::MIKOMFIBMBN P1)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::UIFadeConfig*, ::MIKOMFIBMBN))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER___BASE_GETOVERRIDEFADEOUTANIM_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnPlayFadeInAnimationAfterLoading(::System::String* P0, ::System::Boolean P1, ::System::Single P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER___BASE_ONPLAYFADEINANIMATIONAFTERLOADING_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::MoleMole::DropDownItemWidgetController* DDELKNJFAFA(::HHHJKACNJLG OBNIAHNMHPF, ::UnityEngine::Transform* JNLBPMKIFNK, ::MoleMole::UIControllerContextBase* GJAEGHFECOD, ::GMCPAFDJNLH* BOGHDABFGLF, ::System::Int32 DPEFNGHNDGJ)
		{
			return ((::MoleMole::DropDownItemWidgetController*(*)(::PVOID, ::HHHJKACNJLG, ::UnityEngine::Transform*, ::MoleMole::UIControllerContextBase*, ::GMCPAFDJNLH*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_DDELKNJFAFA_OFFSET))(this, OBNIAHNMHPF, JNLBPMKIFNK, GJAEGHFECOD, BOGHDABFGLF, DPEFNGHNDGJ);
		}

		::System::Void EMPMBBEGIJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_EMPMBBEGIJB_OFFSET))(this);
		}
	};
}
