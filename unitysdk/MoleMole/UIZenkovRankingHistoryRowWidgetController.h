#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class NHDPMNHCKBC;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIZenkovRankingHistoryRowWidgetController_RowData; }
namespace MoleMole { class UIZenkovRankingHistorySceneRowWidgetController; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIZENKOVRANKINGHISTORYROWWIDGETCONTROLLER_EICMKCJOEED_OFFSET UNITYSDK_OFFSET(0x14E4CE10)
#define MOLEMOLE_UIZENKOVRANKINGHISTORYROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14E4C6E0)
#define MOLEMOLE_UIZENKOVRANKINGHISTORYROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x14E4C820)
#define MOLEMOLE_UIZENKOVRANKINGHISTORYROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14E4C770)
#define MOLEMOLE_UIZENKOVRANKINGHISTORYROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14E4C4E0)
#define MOLEMOLE_UIZENKOVRANKINGHISTORYROWWIDGETCONTROLLER_OOPNMFLJNNK_OFFSET UNITYSDK_OFFSET(0x14E4C550)
#define MOLEMOLE_UIZENKOVRANKINGHISTORYROWWIDGETCONTROLLER_SETDATA_OFFSET UNITYSDK_OFFSET(0x14E4C8E0)
#define MOLEMOLE_UIZENKOVRANKINGHISTORYROWWIDGETCONTROLLER_SETTIME_OFFSET UNITYSDK_OFFSET(0x14E4CC40)
#define MOLEMOLE_UIZENKOVRANKINGHISTORYROWWIDGETCONTROLLER_SETTITLE_OFFSET UNITYSDK_OFFSET(0x14E4C9E0)
#define MOLEMOLE_UIZENKOVRANKINGHISTORYROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14E4D5B0)
#define MOLEMOLE_UIZENKOVRANKINGHISTORYROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14E4D670)
#define MOLEMOLE_UIZENKOVRANKINGHISTORYROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x14E4D700)
#define MOLEMOLE_UIZENKOVRANKINGHISTORYROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14E4D7A0)
#define MOLEMOLE_UIZENKOVRANKINGHISTORYROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14E4D830)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovRankingHistoryRowWidgetController_TypeDefinitionIndex = 60385;

	class UIZenkovRankingHistoryRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		// static const ::System::Int32 MFDCDJMMEPM = 0x3; // 0x0
		::NHDPMNHCKBC* _view; // 0x2F8
		::System::Collections::Generic::List_1<::MoleMole::UIZenkovRankingHistorySceneRowWidgetController*>* JEPGEGDPAMO; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRANKINGHISTORYROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRANKINGHISTORYROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRANKINGHISTORYROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRANKINGHISTORYROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRANKINGHISTORYROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void SetData(::MoleMole::UIZenkovRankingHistoryRowWidgetController_RowData* data)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIZenkovRankingHistoryRowWidgetController_RowData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRANKINGHISTORYROWWIDGETCONTROLLER_SETDATA_OFFSET))(this, data);
		}

		::System::Void SetTitle(::System::String* titleKey, ::System::String* titleText)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRANKINGHISTORYROWWIDGETCONTROLLER_SETTITLE_OFFSET))(this, titleKey, titleText);
		}

		::System::Void SetTime(::System::String* timeText)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRANKINGHISTORYROWWIDGETCONTROLLER_SETTIME_OFFSET))(this, timeText);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRANKINGHISTORYROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRANKINGHISTORYROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRANKINGHISTORYROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRANKINGHISTORYROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void OOPNMFLJNNK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRANKINGHISTORYROWWIDGETCONTROLLER_OOPNMFLJNNK_OFFSET))(this);
		}

		::System::Void EICMKCJOEED(::System::Collections::Generic::List_1<::System::Object*>* CJEKKENHFMG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRANKINGHISTORYROWWIDGETCONTROLLER_EICMKCJOEED_OFFSET))(this, CJEKKENHFMG);
		}
	};
}
