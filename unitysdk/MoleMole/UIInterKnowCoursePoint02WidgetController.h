#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLIFCMCBGNA.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class HLABFOOLCPB;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIJourneyWidgetContext; }
namespace System { class Action; }

#define MOLEMOLE_UIINTERKNOWCOURSEPOINT02WIDGETCONTROLLER_GETVIEW_OFFSET UNITYSDK_OFFSET(0x187EDC40)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT02WIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x187EDB10)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT02WIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x187EDBA0)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT02WIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x187ED990)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT02WIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x187ED9F0)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT02WIDGETCONTROLLER_PLAYNODEUIANIM_OFFSET UNITYSDK_OFFSET(0x187EDC90)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT02WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x187EDF10)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT02WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x187EDF70)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT02WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x187EE000)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT02WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x187EE090)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT02WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x187EE120)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnowCoursePoint02WidgetController_TypeDefinitionIndex = 77540;

	class UIInterKnowCoursePoint02WidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::HLABFOOLCPB* _view; // 0x2C8
		::MoleMole::UIJourneyWidgetContext* context; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT02WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT02WIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT02WIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT02WIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT02WIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::HLABFOOLCPB* GetView()
		{
			return ((::HLABFOOLCPB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT02WIDGETCONTROLLER_GETVIEW_OFFSET))(this);
		}

		::System::Void PlayNodeUIAnim(::MLIFCMCBGNA animEnum, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MLIFCMCBGNA, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT02WIDGETCONTROLLER_PLAYNODEUIANIM_OFFSET))(this, animEnum, callback);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT02WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT02WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT02WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT02WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
