#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class MAIPFOOIFPO;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIRidusGotBooSelectLevelPageController_RidusBooTabBtn03RowData; }
namespace System { class Object; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER_GETBTN_OFFSET UNITYSDK_OFFSET(0x18F07310)
#define MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x18F07A80)
#define MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18F073E0)
#define MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x18F07370)
#define MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18F074F0)
#define MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18F07470)
#define MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18F072B0)
#define MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER_REFRESHBYDATA_OFFSET UNITYSDK_OFFSET(0x18F075B0)
#define MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18F07AD0)
#define MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x18F07AE0)
#define MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18F07AF0)
#define MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x18F07B80)
#define MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18F07C10)
#define MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18F07CB0)
#define MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18F07D40)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralBtnWithIconWidgetController_TypeDefinitionIndex = 42347;

	class UIGeneralBtnWithIconWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::MAIPFOOIFPO* _view; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::UITabButton* GetBtn()
		{
			return ((::UnityEngine::UI::Extension::UITabButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER_GETBTN_OFFSET))(this);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshByData(::MoleMole::UIRidusGotBooSelectLevelPageController_RidusBooTabBtn03RowData* data)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIRidusGotBooSelectLevelPageController_RidusBooTabBtn03RowData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER_REFRESHBYDATA_OFFSET))(this, data);
		}

		::System::Void OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void __base_OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
