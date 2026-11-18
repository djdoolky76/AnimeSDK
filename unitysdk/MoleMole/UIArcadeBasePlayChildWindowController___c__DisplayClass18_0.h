#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CEACIPJGIEH;
namespace MoleMole { class UIArcadeBasePlayChildWindowController; }
namespace MoleMole::MiniGame { class MiniGameWorldBase; }
namespace System { class Action; }

#define MOLEMOLE_UIARCADEBASEPLAYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS18_0__CREATEMINIGAMEWORLD_B__0_OFFSET UNITYSDK_OFFSET(0x19D30940)
#define MOLEMOLE_UIARCADEBASEPLAYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS18_0__CREATEMINIGAMEWORLD_B__2_OFFSET UNITYSDK_OFFSET(0x19D309B0)
#define MOLEMOLE_UIARCADEBASEPLAYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS18_0__CREATEMINIGAMEWORLD_B__3_OFFSET UNITYSDK_OFFSET(0x19D30B10)
#define MOLEMOLE_UIARCADEBASEPLAYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS18_0__CREATEMINIGAMEWORLD_B__4_OFFSET UNITYSDK_OFFSET(0x19D30BA0)
#define MOLEMOLE_UIARCADEBASEPLAYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19D30930)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeBasePlayChildWindowController___c__DisplayClass18_0_TypeDefinitionIndex = 47399;

	class UIArcadeBasePlayChildWindowController___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::CEACIPJGIEH* arcadeConfig; // 0x10
		::MoleMole::UIArcadeBasePlayChildWindowController* __4__this; // 0x18
		::MoleMole::MiniGame::MiniGameWorldBase* world; // 0x20
		::System::Action* __9__4; // 0x28
		::System::Action* __9__3; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEBASEPLAYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _CreateMiniGameWorld_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEBASEPLAYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS18_0__CREATEMINIGAMEWORLD_B__0_OFFSET))(this);
		}

		::System::Void _CreateMiniGameWorld_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEBASEPLAYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS18_0__CREATEMINIGAMEWORLD_B__2_OFFSET))(this);
		}

		::System::Void _CreateMiniGameWorld_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEBASEPLAYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS18_0__CREATEMINIGAMEWORLD_B__3_OFFSET))(this);
		}

		::System::Void _CreateMiniGameWorld_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEBASEPLAYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS18_0__CREATEMINIGAMEWORLD_B__4_OFFSET))(this);
		}
	};
}
