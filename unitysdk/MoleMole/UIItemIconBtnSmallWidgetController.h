#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class HGAJKHIMKJP;
class MPDDADKFPBP;
class PADOIPEJCFD;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_DISPLAYGOTICON_OFFSET UNITYSDK_OFFSET(0x190310B0)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_GETGAMEPADSELECTABLE_OFFSET UNITYSDK_OFFSET(0x19030A50)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x190313F0)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_LAACHFKOGNI_OFFSET UNITYSDK_OFFSET(0x190318D0)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_OIKLCMKHGBK_OFFSET UNITYSDK_OFFSET(0x19030830)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x190307C0)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1902FF50)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x19030190)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_ONSETDATA_OFFSET UNITYSDK_OFFSET(0x19031360)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x190300C0)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1902FFE0)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_REFRESHVIEW_1_OFFSET UNITYSDK_OFFSET(0x19030AB0)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x19030440)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_SETCUSTOMCOUNTTEXT_OFFSET UNITYSDK_OFFSET(0x19031550)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x19030280)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_SETGET_OFFSET UNITYSDK_OFFSET(0x190314B0)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_SETGOTCOLOR_OFFSET UNITYSDK_OFFSET(0x19031120)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_SETITEMCLICKEDACT_OFFSET UNITYSDK_OFFSET(0x19030770)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_SETITEMGRAY_OFFSET UNITYSDK_OFFSET(0x190312F0)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_SETITEMIDSHOWSTATE_OFFSET UNITYSDK_OFFSET(0x19031400)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_SHOWBG_OFFSET UNITYSDK_OFFSET(0x19031280)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x190315D0)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x190315E0)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x190315F0)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x19031680)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER___BASE_ONSETDATA_OFFSET UNITYSDK_OFFSET(0x19031720)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x190317B0)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19031840)

namespace MoleMole
{
	inline static constexpr unsigned int UIItemIconBtnSmallWidgetController_TypeDefinitionIndex = 87031;

	class UIItemIconBtnSmallWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::PADOIPEJCFD* _view; // 0x2F8
		::MPDDADKFPBP* LNCNCAAPDLC; // 0x300
		::HGAJKHIMKJP* KPKBEODLMCG; // 0x308
		::System::Action_1<::System::Int32>* GGOFGGADAPM; // 0x310
		::System::Boolean KLOGOIANBKA; // 0x318
		::System::Boolean KCFEGCIGAED; // 0x319
		::System::Byte _padding0[0x2];
		::System::Int32 PHDDNNJNBFB; // 0x31C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void SetItemClickedAct(::System::Action_1<::System::Int32>* itemClickedAct)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_SETITEMCLICKEDACT_OFFSET))(this, itemClickedAct);
		}

		::System::Void OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_ONCLICKITEM_OFFSET))(this);
		}

		::MoleMole::MonoGamepadSelectable* GetGamepadSelectable()
		{
			return ((::MoleMole::MonoGamepadSelectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_GETGAMEPADSELECTABLE_OFFSET))(this);
		}

		::System::Void RefreshView(::MPDDADKFPBP* itemViewData)
		{
			return ((::System::Void(*)(::PVOID, ::MPDDADKFPBP*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, itemViewData);
		}

		::System::Void OnSetData(::System::Object* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_ONSETDATA_OFFSET))(this, data);
		}

		::System::Void RefreshView_1(::System::Int32 templateID, ::System::Int32 count, ::System::Int32 targetCount, ::System::Boolean isLoadSprite)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_REFRESHVIEW_1_OFFSET))(this, templateID, count, targetCount, isLoadSprite);
		}

		::System::Int32 get_ItemID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_GET_ITEMID_OFFSET))(this);
		}

		::System::Void SetItemIDShowState(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_SETITEMIDSHOWSTATE_OFFSET))(this, isShow);
		}

		::System::Void SetEmpty(::System::Boolean isEmpty)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_SETEMPTY_OFFSET))(this, isEmpty);
		}

		::System::Void DisplayGotIcon(::System::Boolean display)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_DISPLAYGOTICON_OFFSET))(this, display);
		}

		::System::Void SetGotColor(::System::Boolean set)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_SETGOTCOLOR_OFFSET))(this, set);
		}

		::System::Void SetGet(::System::Boolean get)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_SETGET_OFFSET))(this, get);
		}

		::System::Void SetItemGray(::System::Boolean isGray)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_SETITEMGRAY_OFFSET))(this, isGray);
		}

		::System::Void ShowBg(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_SHOWBG_OFFSET))(this, isShow);
		}

		::System::Void SetCustomCountText(::System::String* countText)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_SETCUSTOMCOUNTTEXT_OFFSET))(this, countText);
		}

		::System::Void __base_OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnSetData(::System::Object* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER___BASE_ONSETDATA_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void LAACHFKOGNI(::System::Boolean CPHDDAGKHLB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_LAACHFKOGNI_OFFSET))(this, CPHDDAGKHLB);
		}

		::System::Void OIKLCMKHGBK(::System::Int32 HKHHHJHCGKL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_OIKLCMKHGBK_OFFSET))(this, HKHHHJHCGKL);
		}
	};
}
