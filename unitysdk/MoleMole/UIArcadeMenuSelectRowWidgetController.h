#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIArcadeMenuSelectRowBaseWidgetController.h"

class ENGPICMPKAE;
class LENEDGKLEKK;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UIARCADEMENUSELECTROWWIDGETCONTROLLER_INITVIEWCONTROL_OFFSET UNITYSDK_OFFSET(0x19D30EE0)
#define MOLEMOLE_UIARCADEMENUSELECTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19D30DB0)
#define MOLEMOLE_UIARCADEMENUSELECTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x19D30FE0)
#define MOLEMOLE_UIARCADEMENUSELECTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19D30E40)
#define MOLEMOLE_UIARCADEMENUSELECTROWWIDGETCONTROLLER_SETACTIVITYSTATUS_OFFSET UNITYSDK_OFFSET(0x19D31160)
#define MOLEMOLE_UIARCADEMENUSELECTROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19D311D0)
#define MOLEMOLE_UIARCADEMENUSELECTROWWIDGETCONTROLLER___BASE_INITVIEWCONTROL_OFFSET UNITYSDK_OFFSET(0x19D311E0)
#define MOLEMOLE_UIARCADEMENUSELECTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19D311F0)
#define MOLEMOLE_UIARCADEMENUSELECTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x19D31280)
#define MOLEMOLE_UIARCADEMENUSELECTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19D31290)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeMenuSelectRowWidgetController_TypeDefinitionIndex = 38949;

	class UIArcadeMenuSelectRowWidgetController : public ::MoleMole::UIArcadeMenuSelectRowBaseWidgetController
	{
	public:
		::LENEDGKLEKK* _view; // 0x3B0
		::ENGPICMPKAE* rowData; // 0x3B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMENUSELECTROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMENUSELECTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMENUSELECTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitViewControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMENUSELECTROWWIDGETCONTROLLER_INITVIEWCONTROL_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMENUSELECTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void SetActivityStatus(::System::Boolean isInActivity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMENUSELECTROWWIDGETCONTROLLER_SETACTIVITYSTATUS_OFFSET))(this, isInActivity);
		}

		::System::Void __base_InitViewControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMENUSELECTROWWIDGETCONTROLLER___BASE_INITVIEWCONTROL_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMENUSELECTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMENUSELECTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMENUSELECTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
