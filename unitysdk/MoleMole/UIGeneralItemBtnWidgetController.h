#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AOMLCIEOIME.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class GIABOBKGBCK;
class HGAJKHIMKJP;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralButtonController; }
namespace MoleMole { class UIGeneralItemBtnWidgetContext; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_GET_BTN_OFFSET UNITYSDK_OFFSET(0x17844A50)
#define MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_HAOEMFMDILD_OFFSET UNITYSDK_OFFSET(0x17844D60)
#define MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_LAOGELIHLPG_OFFSET UNITYSDK_OFFSET(0x17844DC0)
#define MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_MHBCDAIJGCE_OFFSET UNITYSDK_OFFSET(0x17844D10)
#define MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17844180)
#define MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17844210)
#define MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17843CD0)
#define MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17843EA0)
#define MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_REFRESHITEMVIEW_OFFSET UNITYSDK_OFFSET(0x17844290)
#define MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x17844090)
#define MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_SETCLICK_OFFSET UNITYSDK_OFFSET(0x178447A0)
#define MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_SETITEMNUM_OFFSET UNITYSDK_OFFSET(0x17844820)
#define MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_SETITEM_OFFSET UNITYSDK_OFFSET(0x17844610)
#define MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_SETSHOWTYPE_OFFSET UNITYSDK_OFFSET(0x17844740)
#define MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_SETTIPS_OFFSET UNITYSDK_OFFSET(0x17844530)
#define MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17844A70)
#define MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17844AD0)
#define MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17844B60)
#define MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17844BF0)
#define MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17844C80)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralItemBtnWidgetController_TypeDefinitionIndex = 39981;

	class UIGeneralItemBtnWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::GIABOBKGBCK* _view; // 0x2C8
		::System::Int32 itemID; // 0x2D0
		::System::Byte _padding0[0x4];
		::HGAJKHIMKJP* itemData; // 0x2D8
		::AOMLCIEOIME showType; // 0x2E0
		::System::Int32 consume; // 0x2E4
		::System::Boolean canClick; // 0x2E8
		::System::Byte _padding1[0x7];
		::UnityEngine::Events::UnityAction* clickAction; // 0x2F0
		::MoleMole::UIGeneralItemBtnWidgetContext* DAAAEJDBNFI; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void SetItem(::System::Int32 itemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_SETITEM_OFFSET))(this, itemID);
		}

		::System::Void SetShowType(::AOMLCIEOIME type)
		{
			return ((::System::Void(*)(::PVOID, ::AOMLCIEOIME))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_SETSHOWTYPE_OFFSET))(this, type);
		}

		::System::Void SetClick(::System::Boolean canClick, ::UnityEngine::Events::UnityAction* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_SETCLICK_OFFSET))(this, canClick, action);
		}

		::System::Void RefreshItemView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_REFRESHITEMVIEW_OFFSET))(this);
		}

		::System::Void SetTips(::System::Boolean showTips, ::System::String* tipsText)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_SETTIPS_OFFSET))(this, showTips, tipsText);
		}

		::System::Void SetItemNum(::System::Int32 currNum, ::System::Boolean showSpace, ::System::Int32 totalNum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_SETITEMNUM_OFFSET))(this, currNum, showSpace, totalNum);
		}

		::MoleMole::UIGeneralButtonController* get_Btn()
		{
			return ((::MoleMole::UIGeneralButtonController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_GET_BTN_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void MHBCDAIJGCE(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_MHBCDAIJGCE_OFFSET))(this, KOIBHLHLMFC);
		}

		::System::Void HAOEMFMDILD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_HAOEMFMDILD_OFFSET))(this);
		}

		::System::Void LAOGELIHLPG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_LAOGELIHLPG_OFFSET))(this);
		}
	};
}
