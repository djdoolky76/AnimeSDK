#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class PGMKDMLBFIA;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIJourneyWidgetContext; }
namespace System { class Action; }

#define MOLEMOLE_UIINTERKNOWCOURSETOPPOINTWIDGETCONTROLLER_GETVIEW_OFFSET UNITYSDK_OFFSET(0x19A616C0)
#define MOLEMOLE_UIINTERKNOWCOURSETOPPOINTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19A615B0)
#define MOLEMOLE_UIINTERKNOWCOURSETOPPOINTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19A61640)
#define MOLEMOLE_UIINTERKNOWCOURSETOPPOINTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19A614E0)
#define MOLEMOLE_UIINTERKNOWCOURSETOPPOINTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19A61540)
#define MOLEMOLE_UIINTERKNOWCOURSETOPPOINTWIDGETCONTROLLER_PLAYLINEANIM_OFFSET UNITYSDK_OFFSET(0x19A617A0)
#define MOLEMOLE_UIINTERKNOWCOURSETOPPOINTWIDGETCONTROLLER_SETLINEACTIVE_OFFSET UNITYSDK_OFFSET(0x19A61710)
#define MOLEMOLE_UIINTERKNOWCOURSETOPPOINTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19A618D0)
#define MOLEMOLE_UIINTERKNOWCOURSETOPPOINTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19A61930)
#define MOLEMOLE_UIINTERKNOWCOURSETOPPOINTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19A619C0)
#define MOLEMOLE_UIINTERKNOWCOURSETOPPOINTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19A61A50)
#define MOLEMOLE_UIINTERKNOWCOURSETOPPOINTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19A61AE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnowCourseTopPointWidgetController_TypeDefinitionIndex = 76281;

	class UIInterKnowCourseTopPointWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::PGMKDMLBFIA* _view; // 0x2C8
		::MoleMole::UIJourneyWidgetContext* context; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSETOPPOINTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSETOPPOINTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSETOPPOINTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSETOPPOINTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSETOPPOINTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::PGMKDMLBFIA* GetView()
		{
			return ((::PGMKDMLBFIA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSETOPPOINTWIDGETCONTROLLER_GETVIEW_OFFSET))(this);
		}

		::System::Void SetLineActive(::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSETOPPOINTWIDGETCONTROLLER_SETLINEACTIVE_OFFSET))(this, isActive);
		}

		::System::Void PlayLineAnim(::System::Action* callback, ::System::Single speed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSETOPPOINTWIDGETCONTROLLER_PLAYLINEANIM_OFFSET))(this, callback, speed);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSETOPPOINTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSETOPPOINTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSETOPPOINTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSETOPPOINTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
