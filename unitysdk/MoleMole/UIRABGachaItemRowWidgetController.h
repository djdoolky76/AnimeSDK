#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class JBGEKPENIKP;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIRABPoolAttributeRowWidgetController; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_DOPMOOOEFCC_OFFSET UNITYSDK_OFFSET(0x17D760C0)
#define MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_EGMINFGNCMI_OFFSET UNITYSDK_OFFSET(0x17D76200)
#define MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_GET_POOLID_OFFSET UNITYSDK_OFFSET(0x17D75170)
#define MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_GFAGDFNBMJJ_OFFSET UNITYSDK_OFFSET(0x17D764C0)
#define MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_KKGEGKLNPLC_OFFSET UNITYSDK_OFFSET(0x17D770C0)
#define MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_MJMKCANPNBB_OFFSET UNITYSDK_OFFSET(0x17D75330)
#define MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x17D76AC0)
#define MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17D76430)
#define MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x17D76A50)
#define MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x17D75990)
#define MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17D76B10)
#define MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17D75180)
#define MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_REFRESHTRACKQUEST_OFFSET UNITYSDK_OFFSET(0x17D769C0)
#define MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x17D75A70)
#define MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D76C20)
#define MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17D76B90)
#define MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x17D76DD0)
#define MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17D76DE0)
#define MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x17D76E70)
#define MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x17D76F00)
#define MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17D76FA0)
#define MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17D77030)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABGachaItemRowWidgetController_TypeDefinitionIndex = 82917;

	class UIRABGachaItemRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_NPFDCKDACDG()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIRABGachaItemRowWidgetController_TypeDefinitionIndex)->GetStaticField(0x3C5C0);
		}
		// static const ::System::Int32 JIPCIHGKFNM = 0x4; // 0x0
		::System::Int32 _AOHMFIMCDDF_k__BackingField; // 0x2F8
		::System::Byte _padding0[0x4];
		::JBGEKPENIKP* _view; // 0x300
		::System::Collections::Generic::List_1<::MoleMole::UIRABPoolAttributeRowWidgetController*>* EHMEHNPJLJN; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Int32 get_PoolID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_GET_POOLID_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void RefreshTrackQuest(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_REFRESHTRACKQUEST_OFFSET))(this, show);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void GFAGDFNBMJJ(::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* OIMOIMICMMF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_GFAGDFNBMJJ_OFFSET))(this, OIMOIMICMMF);
		}

		::System::Void DOPMOOOEFCC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_DOPMOOOEFCC_OFFSET))(this);
		}

		::System::Void MJMKCANPNBB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_MJMKCANPNBB_OFFSET))(this);
		}

		::System::Void EGMINFGNCMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_EGMINFGNCMI_OFFSET))(this);
		}

		::System::Void KKGEGKLNPLC(::System::Int32 EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_KKGEGKLNPLC_OFFSET))(this, EGEGIMGMJHN);
		}
	};
}
