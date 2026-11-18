#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class BDCKHDEBKKK;
class GOOPJNPCAPF;
class KFLANJDIOCN;
class MJCGAOIBAPG;
class OAEFGCLEHHO;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER_COAIDIMFFEF_OFFSET UNITYSDK_OFFSET(0x1964BEE0)
#define MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER_DKIOIFCNPHA_OFFSET UNITYSDK_OFFSET(0x1964C020)
#define MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER_FPHEHIICGAP_OFFSET UNITYSDK_OFFSET(0x1964BB10)
#define MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER_IFCBDACHPIM_OFFSET UNITYSDK_OFFSET(0x1964BCE0)
#define MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1964A310)
#define MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1964A420)
#define MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1964A3A0)
#define MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1964A090)
#define MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER_PFPPPGPDBPC_OFFSET UNITYSDK_OFFSET(0x1964B1A0)
#define MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER_REBUILDEQUIPLIST_OFFSET UNITYSDK_OFFSET(0x1964B290)
#define MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER__CREATEARCADELIST_G__CREATEINFO_12_1_OFFSET UNITYSDK_OFFSET(0x1964B800)
#define MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER__CREATEARCADELIST_G__GETGAMEICONPATH_12_0_OFFSET UNITYSDK_OFFSET(0x1964B6C0)
#define MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1964B6B0)
#define MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1964B8C0)
#define MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1964B950)
#define MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1964B9F0)
#define MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1964BA80)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattleRecordRowWidgetController_TypeDefinitionIndex = 39936;

	class UIAutoBattleRecordRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::MJCGAOIBAPG* _view; // 0x2F8
		::System::Int32 MLNKCNJEOMI; // 0x300
		::System::Byte _padding0[0x4];
		::GOOPJNPCAPF* EHFBAPOFEDN; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		static ::System::Collections::Generic::List_1<::System::Int32>* RebuildEquipList(::System::Collections::Generic::List_1<::System::Int32>* originList, ::System::Int32 num)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER_REBUILDEQUIPLIST_OFFSET))(originList, num);
		}

		static ::System::String* _CreateArcadeList_g__GetGameIconPath_12_0(::BDCKHDEBKKK* brief, ::System::Boolean& isFrameTexture)
		{
			return ((::System::String*(*)(::BDCKHDEBKKK*, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER__CREATEARCADELIST_G__GETGAMEICONPATH_12_0_OFFSET))(brief, isFrameTexture);
		}

		static ::KFLANJDIOCN* _CreateArcadeList_g__CreateInfo_12_1(::System::UInt32 uid, ::BDCKHDEBKKK* brief)
		{
			return ((::KFLANJDIOCN*(*)(::System::UInt32, ::BDCKHDEBKKK*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER__CREATEARCADELIST_G__CREATEINFO_12_1_OFFSET))(uid, brief);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::KFLANJDIOCN*>* FPHEHIICGAP(::System::Collections::Generic::List_1<::BDCKHDEBKKK*>* DJLOKMMLFJC)
		{
			return ((::System::Collections::Generic::List_1<::KFLANJDIOCN*>*(*)(::System::Collections::Generic::List_1<::BDCKHDEBKKK*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER_FPHEHIICGAP_OFFSET))(DJLOKMMLFJC);
		}

		::System::Void IFCBDACHPIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER_IFCBDACHPIM_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* COAIDIMFFEF(::System::Func_1<::MoleMole::UIControlReference*>* MNDIBLLFAJI)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER_COAIDIMFFEF_OFFSET))(this, MNDIBLLFAJI);
		}

		::System::Void PFPPPGPDBPC(::System::Boolean PHIGKNCEJLP, ::System::Boolean LBGFNDAMBLD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER_PFPPPGPDBPC_OFFSET))(this, PHIGKNCEJLP, LBGFNDAMBLD);
		}

		::System::Void DKIOIFCNPHA(::OAEFGCLEHHO* EIFONLCJOPG)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER_DKIOIFCNPHA_OFFSET))(this, EIFONLCJOPG);
		}
	};
}
