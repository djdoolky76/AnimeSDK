#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class DFEOJPHOOPO;
namespace MoleMole { class UIControlReference; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALSCROLLVIEWTESTWIDGETCONTROLLER_INITSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x173D08C0)
#define MOLEMOLE_UIGENERALSCROLLVIEWTESTWIDGETCONTROLLER_KOIDHIAEOAK_OFFSET UNITYSDK_OFFSET(0x173D12E0)
#define MOLEMOLE_UIGENERALSCROLLVIEWTESTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x173D0EF0)
#define MOLEMOLE_UIGENERALSCROLLVIEWTESTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x173D0F80)
#define MOLEMOLE_UIGENERALSCROLLVIEWTESTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x173D0690)
#define MOLEMOLE_UIGENERALSCROLLVIEWTESTWIDGETCONTROLLER_SETAFTERHIDECALLBACK_OFFSET UNITYSDK_OFFSET(0x173D1000)
#define MOLEMOLE_UIGENERALSCROLLVIEWTESTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x173D1050)
#define MOLEMOLE_UIGENERALSCROLLVIEWTESTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x173D1130)
#define MOLEMOLE_UIGENERALSCROLLVIEWTESTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x173D11C0)
#define MOLEMOLE_UIGENERALSCROLLVIEWTESTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x173D1250)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralScrollViewTestWidgetController_TypeDefinitionIndex = 61190;

	class UIGeneralScrollViewTestWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::DFEOJPHOOPO* _view; // 0x2C8
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Object*>*>* OJMBOGGMIKO; // 0x2D0
		::System::Action* LICGLPFFNHC; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSCROLLVIEWTESTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSCROLLVIEWTESTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSCROLLVIEWTESTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSCROLLVIEWTESTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitScrollView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSCROLLVIEWTESTWIDGETCONTROLLER_INITSCROLLVIEW_OFFSET))(this);
		}

		::System::Void SetAfterHideCallback(::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSCROLLVIEWTESTWIDGETCONTROLLER_SETAFTERHIDECALLBACK_OFFSET))(this, action);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSCROLLVIEWTESTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSCROLLVIEWTESTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSCROLLVIEWTESTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void KOIDHIAEOAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSCROLLVIEWTESTWIDGETCONTROLLER_KOIDHIAEOAK_OFFSET))(this);
		}
	};
}
