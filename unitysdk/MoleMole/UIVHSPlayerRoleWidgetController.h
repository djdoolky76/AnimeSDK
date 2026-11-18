#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIVHSPlayerRoleWidgetController_PlayerType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class GANKICGHLBG;
namespace MoleMole { class UIControlReference; }
namespace System { class String; }

#define MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_EFFCIEBPAHD_OFFSET UNITYSDK_OFFSET(0x13BD2400)
#define MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_GET_PLAYERTYPE_OFFSET UNITYSDK_OFFSET(0x13BD1DA0)
#define MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_KAJDFFNIECL_OFFSET UNITYSDK_OFFSET(0x13BD1E20)
#define MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_OHNELKGNHOF_OFFSET UNITYSDK_OFFSET(0x13BD2480)
#define MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x13BD1C90)
#define MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13BD1D20)
#define MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13BD1BF0)
#define MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_SET_PLAYERTYPE_OFFSET UNITYSDK_OFFSET(0x13BD1DB0)
#define MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x13BD21F0)
#define MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x13BD2250)
#define MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13BD22E0)
#define MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13BD2370)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSPlayerRoleWidgetController_TypeDefinitionIndex = 72790;

	class UIVHSPlayerRoleWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::GANKICGHLBG* _view; // 0x2C8
		::MoleMole::UIVHSPlayerRoleWidgetController_PlayerType PJBFFLPHJCH; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::MoleMole::UIVHSPlayerRoleWidgetController_PlayerType get_playerType()
		{
			return ((::MoleMole::UIVHSPlayerRoleWidgetController_PlayerType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_GET_PLAYERTYPE_OFFSET))(this);
		}

		::System::Void set_playerType(::MoleMole::UIVHSPlayerRoleWidgetController_PlayerType value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIVHSPlayerRoleWidgetController_PlayerType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_SET_PLAYERTYPE_OFFSET))(this, value);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::String* EFFCIEBPAHD()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_EFFCIEBPAHD_OFFSET))(this);
		}

		::System::String* OHNELKGNHOF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_OHNELKGNHOF_OFFSET))(this);
		}

		::System::Void KAJDFFNIECL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_KAJDFFNIECL_OFFSET))(this);
		}
	};
}
