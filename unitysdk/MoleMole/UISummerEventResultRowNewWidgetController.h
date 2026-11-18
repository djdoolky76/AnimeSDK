#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class EBCOIBKKCMH;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UISUMMEREVENTRESULTROWNEWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x169140C0)
#define MOLEMOLE_UISUMMEREVENTRESULTROWNEWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16914150)
#define MOLEMOLE_UISUMMEREVENTRESULTROWNEWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16913F90)
#define MOLEMOLE_UISUMMEREVENTRESULTROWNEWWIDGETCONTROLLER_SETSUBTITLE_OFFSET UNITYSDK_OFFSET(0x16914250)
#define MOLEMOLE_UISUMMEREVENTRESULTROWNEWWIDGETCONTROLLER_SETTITLE_OFFSET UNITYSDK_OFFSET(0x169141D0)
#define MOLEMOLE_UISUMMEREVENTRESULTROWNEWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x169142C0)
#define MOLEMOLE_UISUMMEREVENTRESULTROWNEWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16914320)
#define MOLEMOLE_UISUMMEREVENTRESULTROWNEWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x169143B0)
#define MOLEMOLE_UISUMMEREVENTRESULTROWNEWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16914440)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerEventResultRowNewWidgetController_TypeDefinitionIndex = 82197;

	class UISummerEventResultRowNewWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::EBCOIBKKCMH* _view; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTRESULTROWNEWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTRESULTROWNEWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTRESULTROWNEWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTRESULTROWNEWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetTitle(::System::String* title)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTRESULTROWNEWWIDGETCONTROLLER_SETTITLE_OFFSET))(this, title);
		}

		::System::Void SetSubTitle(::System::String* subTitle)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTRESULTROWNEWWIDGETCONTROLLER_SETSUBTITLE_OFFSET))(this, subTitle);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTRESULTROWNEWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTRESULTROWNEWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTRESULTROWNEWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
