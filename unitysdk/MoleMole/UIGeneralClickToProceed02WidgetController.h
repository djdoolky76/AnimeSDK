#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class EPHKBOFJKHH;
namespace MoleMole { class UIControlReference; }
namespace System { class String; }

#define MOLEMOLE_UIGENERALCLICKTOPROCEED02WIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x180A6200)
#define MOLEMOLE_UIGENERALCLICKTOPROCEED02WIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x180A6290)
#define MOLEMOLE_UIGENERALCLICKTOPROCEED02WIDGETCONTROLLER_SETURL_OFFSET UNITYSDK_OFFSET(0x180A6310)
#define MOLEMOLE_UIGENERALCLICKTOPROCEED02WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x180A64D0)
#define MOLEMOLE_UIGENERALCLICKTOPROCEED02WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x180A6530)
#define MOLEMOLE_UIGENERALCLICKTOPROCEED02WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x180A65C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralClickToProceed02WidgetController_TypeDefinitionIndex = 65740;

	class UIGeneralClickToProceed02WidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::EPHKBOFJKHH* _view; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCLICKTOPROCEED02WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCLICKTOPROCEED02WIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCLICKTOPROCEED02WIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetUrl(::System::String* url, ::System::Boolean webView, ::System::String* urlTitle)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCLICKTOPROCEED02WIDGETCONTROLLER_SETURL_OFFSET))(this, url, webView, urlTitle);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCLICKTOPROCEED02WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCLICKTOPROCEED02WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
