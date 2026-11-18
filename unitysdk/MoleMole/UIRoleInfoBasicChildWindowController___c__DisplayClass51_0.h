#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OOHBEPCMHMC.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRoleInfoBasicChildWindowController; }

#define MOLEMOLE_UIROLEINFOBASICCHILDWINDOWCONTROLLER___C__DISPLAYCLASS51_0__CTOR_OFFSET UNITYSDK_OFFSET(0x179AD420)
#define MOLEMOLE_UIROLEINFOBASICCHILDWINDOWCONTROLLER___C__DISPLAYCLASS51_0__INITAVATARSCOREDIALOG_B__3_OFFSET UNITYSDK_OFFSET(0x179AD430)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleInfoBasicChildWindowController___c__DisplayClass51_0_TypeDefinitionIndex = 59536;

	class UIRoleInfoBasicChildWindowController___c__DisplayClass51_0 : public ::System::Object
	{
	public:
		::MoleMole::UIRoleInfoBasicChildWindowController* __4__this; // 0x10
		::System::Int32 index; // 0x18
		::OOHBEPCMHMC equipScoreLevel; // 0x1C
		::OOHBEPCMHMC weaponScoreLevel; // 0x20
		::OOHBEPCMHMC skillScoreLevel; // 0x24
		::OOHBEPCMHMC levelScoreLevel; // 0x28
		::OOHBEPCMHMC totalScore; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOBASICCHILDWINDOWCONTROLLER___C__DISPLAYCLASS51_0__CTOR_OFFSET))(this);
		}

		::System::Void _InitAvatarScoreDialog_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOBASICCHILDWINDOWCONTROLLER___C__DISPLAYCLASS51_0__INITAVATARSCOREDIALOG_B__3_OFFSET))(this);
		}
	};
}
