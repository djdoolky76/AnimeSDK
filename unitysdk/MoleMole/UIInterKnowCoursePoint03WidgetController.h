#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLIFCMCBGNA.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class NKADKALPNOK;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIJourneyWidgetContext; }
namespace System { class Action; }

#define MOLEMOLE_UIINTERKNOWCOURSEPOINT03WIDGETCONTROLLER_GETVIEW_OFFSET UNITYSDK_OFFSET(0x17952750)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT03WIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17952620)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT03WIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x179526B0)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT03WIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x179524A0)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT03WIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17952500)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT03WIDGETCONTROLLER_PLAYNODEUIANIM_OFFSET UNITYSDK_OFFSET(0x179527A0)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT03WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17952A50)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT03WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17952AB0)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT03WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17952B40)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT03WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17952BD0)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT03WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17952C60)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnowCoursePoint03WidgetController_TypeDefinitionIndex = 56012;

	class UIInterKnowCoursePoint03WidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::NKADKALPNOK* _view; // 0x2C8
		::MoleMole::UIJourneyWidgetContext* context; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT03WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT03WIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT03WIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT03WIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT03WIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::NKADKALPNOK* GetView()
		{
			return ((::NKADKALPNOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT03WIDGETCONTROLLER_GETVIEW_OFFSET))(this);
		}

		::System::Void PlayNodeUIAnim(::MLIFCMCBGNA animEnum, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MLIFCMCBGNA, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT03WIDGETCONTROLLER_PLAYNODEUIANIM_OFFSET))(this, animEnum, callback);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT03WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT03WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT03WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT03WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
