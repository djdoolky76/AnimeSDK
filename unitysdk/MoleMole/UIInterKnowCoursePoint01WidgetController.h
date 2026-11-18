#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLIFCMCBGNA.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class JBAKICNLODB;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIJourneyWidgetContext; }
namespace System { class Action; }

#define MOLEMOLE_UIINTERKNOWCOURSEPOINT01WIDGETCONTROLLER_GETVIEW_OFFSET UNITYSDK_OFFSET(0x183D2D90)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT01WIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x183D2C60)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT01WIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x183D2CF0)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT01WIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x183D2AE0)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT01WIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x183D2B40)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT01WIDGETCONTROLLER_PLAYNODEUIANIM_OFFSET UNITYSDK_OFFSET(0x183D2DE0)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT01WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x183D2F60)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT01WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x183D2FC0)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT01WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x183D3050)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT01WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x183D30E0)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT01WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x183D3170)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnowCoursePoint01WidgetController_TypeDefinitionIndex = 48844;

	class UIInterKnowCoursePoint01WidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::JBAKICNLODB* _view; // 0x2C8
		::MoleMole::UIJourneyWidgetContext* context; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT01WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT01WIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT01WIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT01WIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT01WIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::JBAKICNLODB* GetView()
		{
			return ((::JBAKICNLODB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT01WIDGETCONTROLLER_GETVIEW_OFFSET))(this);
		}

		::System::Void PlayNodeUIAnim(::MLIFCMCBGNA animEnum, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MLIFCMCBGNA, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT01WIDGETCONTROLLER_PLAYNODEUIANIM_OFFSET))(this, animEnum, callback);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT01WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT01WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT01WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT01WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
