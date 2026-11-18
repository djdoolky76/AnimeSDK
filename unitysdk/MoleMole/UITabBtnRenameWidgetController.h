#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFGOBPJPGBE.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Share/ENotificationBadgeType.h"

class BPNGLLLIMDC;
class EAOMOBJEOEG;
class FFHNNAAJCKM;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIGeneralPopUpHintWidgetController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_ENABLEWIDGET_OFFSET UNITYSDK_OFFSET(0x11360B80)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_GETTABBUTTON_OFFSET UNITYSDK_OFFSET(0x11360D30)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_GET_BUILDNAME_OFFSET UNITYSDK_OFFSET(0x11360400)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_GET_BUILDUID_OFFSET UNITYSDK_OFFSET(0x113603F0)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_GET_MODEL_OFFSET UNITYSDK_OFFSET(0x11360160)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_NOCCHDLPCDP_OFFSET UNITYSDK_OFFSET(0x113604F0)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_ONCLICKRENAME_OFFSET UNITYSDK_OFFSET(0x11360710)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11360360)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_ONDATAUPDATE_OFFSET UNITYSDK_OFFSET(0x1135FD60)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x11360680)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x11360410)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11360600)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1135FB30)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_REFRESHNAMETEXT_OFFSET UNITYSDK_OFFSET(0x11360270)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_REFRESH_OFFSET UNITYSDK_OFFSET(0x11360470)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_REGISTERREDPOINT_OFFSET UNITYSDK_OFFSET(0x113608E0)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_SETTOTOP_OFFSET UNITYSDK_OFFSET(0x113602F0)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x11360D90)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11360DA0)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x11360E30)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x11360EC0)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11360F60)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11360FF0)

namespace MoleMole
{
	inline static constexpr unsigned int UITabBtnRenameWidgetController_TypeDefinitionIndex = 73806;

	class UITabBtnRenameWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::FFHNNAAJCKM* _view; // 0x2F8
		::BPNGLLLIMDC* FOPNJFNENKM; // 0x300
		::System::UInt32 GPJKCJGJFKB; // 0x308
		::System::Byte _padding0[0x4];
		::System::String* HBDOBFOPFPB; // 0x310
		::MoleMole::UIGeneralPopUpHintWidgetController* OCAMNDBGALP; // 0x318
		::System::Action* ACDMIDHJGLO; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnDataUpdate(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_ONDATAUPDATE_OFFSET))(this, args);
		}

		::BPNGLLLIMDC* get_Model()
		{
			return ((::BPNGLLLIMDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_GET_MODEL_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::UInt32 get_BuildUid()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_GET_BUILDUID_OFFSET))(this);
		}

		::System::String* get_BuildName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_GET_BUILDNAME_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void Refresh(::EAOMOBJEOEG* ctx)
		{
			return ((::System::Void(*)(::PVOID, ::EAOMOBJEOEG*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_REFRESH_OFFSET))(this, ctx);
		}

		::System::Void SetToTop(::System::Boolean state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_SETTOTOP_OFFSET))(this, state);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void OnClickRename()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_ONCLICKRENAME_OFFSET))(this);
		}

		::System::Void RefreshNameText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_REFRESHNAMETEXT_OFFSET))(this);
		}

		::System::Void RegisterRedPoint(::Share::ENotificationBadgeType badgeType, ::System::Int32 subID)
		{
			return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_REGISTERREDPOINT_OFFSET))(this, badgeType, subID);
		}

		::System::Void EnableWidget(::BFGOBPJPGBE showType)
		{
			return ((::System::Void(*)(::PVOID, ::BFGOBPJPGBE))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_ENABLEWIDGET_OFFSET))(this, showType);
		}

		::UnityEngine::UI::Extension::UITabButton* GetTabButton()
		{
			return ((::UnityEngine::UI::Extension::UITabButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_GETTABBUTTON_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void NOCCHDLPCDP(::EAOMOBJEOEG* HBMGHPEPBNC)
		{
			return ((::System::Void(*)(::PVOID, ::EAOMOBJEOEG*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_NOCCHDLPCDP_OFFSET))(this, HBMGHPEPBNC);
		}
	};
}
