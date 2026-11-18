#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AGAFGMPKAFA.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIUrbanMapNavigationTeleportRowWidgetController; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIURBANMAPNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x166FE410)
#define MOLEMOLE_UIURBANMAPNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS22_0__DOTELEPORTBIGSCENE_B__0_OFFSET UNITYSDK_OFFSET(0x166FE420)
#define MOLEMOLE_UIURBANMAPNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS22_0__DOTELEPORTBIGSCENE_B__1_OFFSET UNITYSDK_OFFSET(0x166FE4A0)
#define MOLEMOLE_UIURBANMAPNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS22_0__DOTELEPORTBIGSCENE_B__2_OFFSET UNITYSDK_OFFSET(0x166FE5C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapNavigationTeleportRowWidgetController___c__DisplayClass22_0_TypeDefinitionIndex = 93004;

	class UIUrbanMapNavigationTeleportRowWidgetController___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::System::Action* __9__2; // 0x10
		::AGAFGMPKAFA baseParam; // 0x18
		::System::String* teleportAudioKey; // 0x78
		::MoleMole::UIUrbanMapNavigationTeleportRowWidgetController* __4__this; // 0x80
		::System::Int32 teleportID; // 0x88
		::System::Boolean menusReady; // 0x8C
		::System::Boolean dialogReady; // 0x8D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoTeleportBigScene_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS22_0__DOTELEPORTBIGSCENE_B__0_OFFSET))(this);
		}

		::System::Void _DoTeleportBigScene_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS22_0__DOTELEPORTBIGSCENE_B__1_OFFSET))(this);
		}

		::System::Void _DoTeleportBigScene_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS22_0__DOTELEPORTBIGSCENE_B__2_OFFSET))(this);
		}
	};
}
