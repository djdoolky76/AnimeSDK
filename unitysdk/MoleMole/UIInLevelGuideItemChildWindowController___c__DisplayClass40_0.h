#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER___C__DISPLAYCLASS40_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18E8ED10)
#define MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER___C__DISPLAYCLASS40_0__SETVISIBLE_B__0_OFFSET UNITYSDK_OFFSET(0x18E8ED20)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelGuideItemChildWindowController___c__DisplayClass40_0_TypeDefinitionIndex = 73918;

	class UIInLevelGuideItemChildWindowController___c__DisplayClass40_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER___C__DISPLAYCLASS40_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetVisible_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCHILDWINDOWCONTROLLER___C__DISPLAYCLASS40_0__SETVISIBLE_B__0_OFFSET))(this);
		}
	};
}
