#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class JLIOOEIOMJO;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIPartnerDateItemWidgetController; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_ADLMEDCDHHK_OFFSET UNITYSDK_OFFSET(0x190672D0)
#define MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_BHCNMKAFFNI_OFFSET UNITYSDK_OFFSET(0x19066440)
#define MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_DKDAGCNEBCD_OFFSET UNITYSDK_OFFSET(0x19067050)
#define MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_DNELCJLJMME_OFFSET UNITYSDK_OFFSET(0x19066D20)
#define MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_FJGDKDGFBBB_OFFSET UNITYSDK_OFFSET(0x19066FA0)
#define MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_GEINLGPDLOG_OFFSET UNITYSDK_OFFSET(0x19066F20)
#define MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19066630)
#define MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x190666C0)
#define MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x190663D0)
#define MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_REFRESHDATA_OFFSET UNITYSDK_OFFSET(0x19066790)
#define MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x190667F0)
#define MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_SETONSELECT_OFFSET UNITYSDK_OFFSET(0x19066740)
#define MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19066B10)
#define MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19066B70)
#define MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19066C00)
#define MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19066C90)

namespace MoleMole
{
	inline static constexpr unsigned int UIPartnerDateSelectWidgetController_TypeDefinitionIndex = 65557;

	class UIPartnerDateSelectWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::JLIOOEIOMJO* _view; // 0x2C8
		::System::Action_1<::System::Int32>* APAFLLFHGHC; // 0x2D0
		::System::Collections::Generic::List_1<::System::Int32>* NHKACLCFDDK; // 0x2D8
		::System::Int32 CJGDNDCNKPJ; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetOnSelect(::System::Action_1<::System::Int32>* onSelectItem)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_SETONSELECT_OFFSET))(this, onSelectItem);
		}

		::System::Void RefreshData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_REFRESHDATA_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Collections::Generic::List_1<::System::Int32>* partnerIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, partnerIDs);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void BHCNMKAFFNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_BHCNMKAFFNI_OFFSET))(this);
		}

		::MoleMole::UIPartnerDateItemWidgetController* DNELCJLJMME(::System::Int32 EOGLMAEPALE)
		{
			return ((::MoleMole::UIPartnerDateItemWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_DNELCJLJMME_OFFSET))(this, EOGLMAEPALE);
		}

		::MoleMole::ScrollViewItemWidgetController* GEINLGPDLOG(::System::Func_1<::MoleMole::UIControlReference*>* IHFDFJICHLA)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_GEINLGPDLOG_OFFSET))(this, IHFDFJICHLA);
		}

		::System::Void FJGDKDGFBBB(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_FJGDKDGFBBB_OFFSET))(this, ABHBKFJKINO);
		}

		::System::Void DKDAGCNEBCD(::System::Int32 EOGLMAEPALE)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_DKDAGCNEBCD_OFFSET))(this, EOGLMAEPALE);
		}

		::System::Void ADLMEDCDHHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_ADLMEDCDHHK_OFFSET))(this);
		}
	};
}
