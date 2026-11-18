#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInLevelMonsterPortableHudBaseChildWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UIINLEVELMONSTERPORTABLEHUDBASECHILDWINDOWCONTROLLER___C__DISPLAYCLASS62_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1901ED20)
#define MOLEMOLE_UIINLEVELMONSTERPORTABLEHUDBASECHILDWINDOWCONTROLLER___C__DISPLAYCLASS62_0__PLAYFADEOUTFORPOOL_B__0_OFFSET UNITYSDK_OFFSET(0x1901ED30)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelMonsterPortableHudBaseChildWindowController___c__DisplayClass62_0_TypeDefinitionIndex = 44709;

	class UIInLevelMonsterPortableHudBaseChildWindowController___c__DisplayClass62_0 : public ::System::Object
	{
	public:
		::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController* __4__this; // 0x10
		::System::Action* onComplete; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMONSTERPORTABLEHUDBASECHILDWINDOWCONTROLLER___C__DISPLAYCLASS62_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayFadeOutForPool_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMONSTERPORTABLEHUDBASECHILDWINDOWCONTROLLER___C__DISPLAYCLASS62_0__PLAYFADEOUTFORPOOL_B__0_OFFSET))(this);
		}
	};
}
