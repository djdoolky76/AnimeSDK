#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DIKAJFMJIMO;
class MMABHBCCPCM;
namespace MoleMole { class UIArcadeBasePlayChildWindowController; }

#define MOLEMOLE_UIARCADEBASEPLAYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A217EE0)
#define MOLEMOLE_UIARCADEBASEPLAYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS30_0__EXITMINIGAME_B__3_OFFSET UNITYSDK_OFFSET(0x1A217EF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeBasePlayChildWindowController___c__DisplayClass30_0_TypeDefinitionIndex = 47401;

	class UIArcadeBasePlayChildWindowController___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::MMABHBCCPCM* oldLogic; // 0x10
		::DIKAJFMJIMO* miniGame; // 0x18
		::MoleMole::UIArcadeBasePlayChildWindowController* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEBASEPLAYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Void _ExitMiniGame_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEBASEPLAYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS30_0__EXITMINIGAME_B__3_OFFSET))(this);
		}
	};
}
